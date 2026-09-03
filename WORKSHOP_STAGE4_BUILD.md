# 🔥 Stage 4 Build Sheet — The Phoenix AI Agent (Instructor)

> **Build this before students arrive.** Roughly 10 minutes.
> Everything you need already exists in the project — you are wiring a scaffold,
> not building from scratch.

---

## What you are building

`BP_BirdTarget` already exists as a **half-finished AI pawn** carried over from
the `_GI479` import: its components are assembled but its Event Graph was never
written. You are finishing it.

The result: a **phoenix that carries a target**, notices the player, turns, and
flies at them — then stops at a safe distance. Shoot the target it carries and
the existing Chaos shatter + score fires.

| Already done for you | What you add |
|---|---|
| `FloatingPawnMovement` (flight) | The phoenix mesh |
| `PawnSensing` (sight) | A `BP_Target` for it to carry |
| `AIControllerClass = BP_BirdAIController` | 1 variable + ~12 graph nodes |
| `BP_Target` damage → shatter → score | 7 Details-panel settings |

---

## ⚠️ Safety first — do not skip

`FloatingPawnMovement` defaults to **Max Speed 1200**. That is an object flying
at a teenager's face at 12 m/s. **Set it to 200** and keep the 150 cm stop
distance in the graph. Keep a spotter beside anyone wearing a headset — they
*will* step backwards into a real desk.

---

## Step 1 — Open the blueprint

Content Browser → `Content/TargetGame/Blueprints/` → double-click
**`BP_BirdTarget`**.

---

## Step 2 — Components panel

Target layout — phoenix on top, target hanging below it:

```text
BP_BirdTarget (Pawn)
└── DefaultSceneRoot
    ├── phoenix           Z =   0     the phoenix   (NoCollision)
    ├── CarriedTarget     Z = -40     BP_Target     (this is what you shoot)
    ├── FloatingPawnMovement
    └── PawnSensing
```

### 2a. Delete `BirdMesh`

Select **`BirdMesh`** → **Delete**.

It is a *Static* Mesh Component, so it cannot hold an animated skeletal mesh, and
`CarriedTarget` is taking over its job as the target.

> Why not just shoot `BirdMesh`? Because nothing would happen. `BP_BirdTarget`
> has **no damage handler at all** — no `Event Point Damage`. A projectile hits
> it and stops, with no score, no shatter, no destroy. `BP_Target` already has
> that handler, which is why we carry one instead of rebuilding it.

### 2b. Drag in the phoenix

Content Browser → `Content/phoenix/SkeletalMeshes/` → **drag `phoenix` into the
Components panel and drop it onto `DefaultSceneRoot`**.

*(Same move as dropping `SK_FPGun` onto `MotionController_R` in Stage 2 — Unreal
creates the component and assigns the mesh in one step.)*

With the new **`phoenix`** component selected, in **Details**:

| Section | Setting | Value |
|---|---|---|
| Animation | **Animation Mode** | `Use Animation Asset` |
| Animation | **Anim to Play** | `phoenix_Anim` |
| Animation | **Looping** | ✅ checked |
| Collision | **Collision Presets** | **`NoCollision`** ← critical |
| Transform | **Rotation → Yaw** | adjust so the phoenix faces **+X** — 📝 note the value |
| Transform | **Scale** | size to a ~50–80 cm wingspan — 📝 note the value |

**`NoCollision` is the whole trick**: shots pass straight through the bird's body
and land on the target it carries. Students shoot the *target*, not the phoenix.

### 2c. Add `CarriedTarget`

**`+ Add`** → search **Child Actor** → rename it **`CarriedTarget`**.

| Setting | Value |
|---|---|
| **Child Actor Class** | **`BP_Target`** |
| **Transform → Location** | `X=0, Y=0, Z=-40` |

Leave its collision alone — `BP_Target` brings its own working setup, and its
`RotatingMovement` makes the carried target spin.

---

## Step 3 — Details settings

Select **Class Defaults** (toolbar):

| Setting | Value |
|---|---|
| **Auto Possess AI** | **`Placed in World or Spawned`** |

*This is the "give it a brain" moment — it's what lets `BP_BirdAIController`
possess the pawn.*

Select **`FloatingPawnMovement`**:

| Setting | Value |
|---|---|
| **Max Speed** | **`200`** ← safety |
| **Acceleration** | `600` |

Select **`PawnSensing`**:

| Setting | Value |
|---|---|
| **Sight Radius** | `3000` |
| **Sensing Interval** | `0.2` |
| **Peripheral Vision Angle** | `90` |
| **Only Sense Players** | ✅ checked |

---

## Step 4 — Add the variable

In **My Blueprint** → **Variables** → **`+`**:

- Name: **`IsHunting`**
- Type: **Boolean**
- Default: **unchecked** (false)

*(Compile once so the default value field appears.)*

---

## Step 5 — Event Graph: Sense → Decide → Act

> If any inherited `BeginPlay` / `Tick` / `ActorBeginOverlap` nodes look greyed
> out, they are **disabled**. Right-click → **Node → Enable (Always)**, or just
> delete them and place fresh ones.

### Beat 1 — SENSE

Select **`PawnSensing`** in Components → in **Details** scroll to **Events** →
click **`+`** on **On See Pawn**.

```text
[ On See Pawn (PawnSensing) ]
            │
            ▼
    [ Set IsHunting ]  ☑ checked
```

### Beat 2 — DECIDE + ACT

```text
[ Event Tick ]
      │
      ▼
[ Branch ] ◄──────────── [ Get IsHunting ]
      │ True
      ▼
[ Branch ] ◄──────────── [ Get Distance To ] ◄── [ Get Player Pawn ]
      │ True                   (Result > 150.0)
      ▼
[ Add Movement Input ]
   ├─ World Direction ◄── [ Get Unit Direction (Vector) ]
   │                          From ◄── [ Get Actor Location (self) ]
   │                          To   ◄── [ Get Actor Location ] ◄── [ Get Player Pawn ]
   └─ Scale Value = 1.0
      │
      ▼
[ Set Actor Rotation ] ◄── [ Find Look at Rotation ]
                              Start  ◄── [ Get Actor Location (self) ]
                              Target ◄── [ Get Actor Location ] ◄── [ Get Player Pawn ]
```

Notes:
- Drop **one** `Get Player Pawn` node and reuse it for all three connections.
- `Get Distance To` → drag its output into a **`>`** (greater) node, type `150.0`.
- `Set Actor Rotation` keeps the phoenix flying nose-first. Without it the bird
  slides sideways and the flap animation looks broken.

### Beat 3 — SCORE

**Nothing to wire.** `CarriedTarget` *is* a `BP_Target`, so a blaster hit runs
its existing `Event Point Damage → Chaos shatter → S_Target_Shatter →
TargetDestroyed → HUD score`.

**Compile** ✅ and **Save**.

---

## Step 6 — Test on the desktop first (no headset)

This catches every AI bug before anyone puts a headset on.

1. Open `Content/FirstPerson/Maps/FirstPersonMap`.
2. **World Settings → Default Pawn Class** must be **`BP_FirstPersonCharacter`**.
3. Drag **`BP_BirdTarget`** into the level, about **400 cm** away, **Z ≈ 150**.
4. Press **Play**.

Checklist:

- [ ] Phoenix hovers, wings flapping, **not** frozen in a T-pose
- [ ] It faces forward (nose-first), not sideways
- [ ] When you walk into its view it **turns toward you and flies at you**
- [ ] It **stops ~150 cm short** and holds — it must never reach your camera
- [ ] Shooting the target below it → **shatter + sound + score goes up**

---

## Step 7 — Put it in Mixed Reality

1. Open `Content/TargetGame/VR_MR/Levels/LVL_TargetGame_MR`.
2. Drag in **2** `BP_BirdTarget`, at **Z ≈ 150 cm**, **3–4 m** from
   `PlayerStart`, over **open floor** away from real furniture.
3. **Save**, then **`...` → VR Preview**.

---

## 📝 Report back these three values

The guides need real numbers, so note them as you go:

1. **Yaw** you used on the `phoenix` component: `________`
2. **Scale** you used: `________`
3. Does **`phoenix_Anim` loop cleanly**, or does it hitch? `________`

---

## 🩺 If something goes wrong

| Symptom | Fix |
|---|---|
| Phoenix never moves | `PawnSensing` never saw you. Check **Sight Radius = 3000** and **Only Sense Players** ✅. **Demo rescue:** tick the `IsHunting` variable's default to true so it always hunts. |
| Phoenix hovers but never chases | Class Defaults → **Auto Possess AI** → `Placed in World or Spawned`. |
| Shots stop at the bird's body | The `phoenix` component's **Collision Presets** must be **`NoCollision`**. |
| Shots hit the target, nothing happens | `CarriedTarget` → **Child Actor Class** is empty. Set it to **`BP_Target`**. |
| It rushes into your face | `FloatingPawnMovement` → **Max Speed = 200**; raise `150.0` on the Branch. |
| Flies sideways | Adjust the `phoenix` component's **Rotation → Yaw**. |
| Frozen T-pose | **Animation Mode = `Use Animation Asset`**, **Anim to Play = `phoenix_Anim`**, **Looping** ✅. |
| Giant or microscopic | Adjust the `phoenix` component's **Transform → Scale**. |
| Plain grey/white bird | Check `Content/phoenix/Materials/` and `Textures/` are present. |
| Two overlapping target discs | You didn't delete `BirdMesh`. Delete it, or set its Static Mesh to `None`. |
| Nodes greyed out, never fire | Right-click → **Node → Enable (Always)**. |

---

## Known quirk (leave it)

When the carried target shatters, the phoenix keeps flying with empty claws.
Harmless — tell the students *"you disarmed it."*

Optional fix if you have spare time: on Tick, `Is Valid (CarriedTarget → Child
Actor)` → **False** → `DestroyActor`.
