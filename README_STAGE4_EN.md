# 🔥 Stage 4 (Optional): Wake the AI Agent — The Hunting Phoenix

[ **English** | [ภาษาไทย](README_STAGE4.md) ]

> **Optional add-on** — continues from [the main guide](README_EN.md), Stage 3
> **Time:** about 10 minutes
> **Do this when:** Stages 1–3 are done and you still have time left

---

## 💡 The Concept: what separates a "target" from an "AI Agent"?

For all three stages so far, the target (`BP_Target`) has been an **object**. It
hangs in the air waiting to be shot. It doesn't know where you are, and it has
never made a decision.

**An AI Agent is different.** It runs a three-beat loop:

```text
   [ 1. SENSE ]          [ 2. DECIDE ]              [ 3. ACT ]
                  ➔                          ➔
  "I can see the      "They're more than 150cm      "Fly toward them
   player."            away — I should close in."    and turn to face them."
```

In this stage you'll wake a **phoenix** that carries a target, so it **sees you,
turns toward you, and hunts you through your real classroom** — and you have to
shoot the target out of its claws.

> **🧠 Key point:** you don't shoot the bird — you shoot the **target it is
> carrying**. The phoenix is configured so bullets pass straight **through** it.

---

## ⚠️ Safety — read before starting

This stage sends an object flying at someone wearing a headset, so:

- ⚠️ Always set **Max Speed = 200** (the default is 1200, which is **far too fast**)
- ⚠️ Keep the **150 cm** stop distance so the bird never clips into the camera (nauseating)
- ⚠️ **Always have a spotter** beside anyone in a headset — players step backwards into real desks

---

## 🧩 What's already built for you

`BP_BirdTarget` already has its parts assembled. You're just wiring up its brain:

| Already there ✅ | What it does |
|---|---|
| `FloatingPawnMovement` | Lets it fly (hovers, never falls) |
| `PawnSensing` | Its eyes — used to spot the player |
| `AIControllerClass` | The socket its brain plugs into (`BP_BirdAIController`) |
| `BP_Target` | Already shatters and scores |

**What you'll add:** the bird mesh, a target for it to carry, and about 12
Blueprint nodes.

---

## Step 4.1: Open `BP_BirdTarget` and assemble the parts

1. In the Content Drawer go to `Content/TargetGame/Blueprints/` ➔ double-click
   **`BP_BirdTarget`**.

### 🗑️ Delete `BirdMesh`

2. In the **Components** panel select **`BirdMesh`** ➔ press **Delete**.

   *(It's a Static Mesh Component, so it can't hold an animated skeletal mesh —
   and a real `BP_Target` is about to take over its job anyway.)*

### 🐦 Drag the phoenix in

3. In the Content Drawer open `Content/phoenix/SkeletalMeshes/`.
4. **Drag `phoenix`** into the **Components** panel and drop it onto
   **`DefaultSceneRoot`**.

   *(Exactly the move you used in Stage 2 to drop `SK_FPGun` onto
   `MotionController_R`! Unreal creates the component and assigns the mesh in one
   step.)*

5. Select the new **`phoenix`** component and set these in **Details**:

| Section | Value |
|---|---|
| **Animation ➔ Animation Mode** | `Use Animation Asset` |
| **Animation ➔ Anim to Play** | `phoenix_Anim` |
| **Animation ➔ Looping** | checked ✅ |
| **Collision ➔ Collision Presets** | **`NoCollision`** ⬅️ **critical!** |
| **Transform ➔ Rotation (Yaw)** | turn it so the beak faces the **+X** axis |
| **Transform ➔ Scale** | size to roughly a 50–80 cm wingspan |

> **🎯 Why `NoCollision`?**
> Because bullets need to pass **through the bird's body** and hit the target it
> carries. Without this, shots stop at the phoenix and you can never hit the
> target.

### 🎯 Give the bird a target to carry

6. Click **`+ Add`** ➔ search **Child Actor** ➔ rename it **`CarriedTarget`**.
7. In **Details**:
   - **Child Actor Class**: **`BP_Target`**
   - **Transform ➔ Location**: `(X=0, Y=0, Z=-40)` *(the target hangs below the
     bird, as if it's being carried)*

**Correct hierarchy:**

```text
BP_BirdTarget (Pawn)
└── DefaultSceneRoot
    ├── phoenix           Z =   0    ⬅️ the bird (bullets pass through)
    ├── CarriedTarget     Z = -40    ⬅️ the target (shoot THIS!)
    ├── FloatingPawnMovement
    └── PawnSensing
```

---

## Step 4.2: Set up the brain and the speed

### 🧠 Plug in the brain

1. On the top toolbar click **Class Defaults**.
2. Find **Auto Possess AI** ➔ set it to **`Placed in World or Spawned`**.

   > **This is the moment you give it a brain.** This setting is what lets
   > `BP_BirdAIController` take control of the pawn. Without it, the bird never
   > moves at all.

### 🐌 Set the speed (for safety)

3. Select **`FloatingPawnMovement`**:
   - **Max Speed**: **`200`** ⬅️ **don't skip this!** (the default 1200 is dangerously fast)
   - **Acceleration**: `600`

### 👁️ Tune its eyes

4. Select **`PawnSensing`**:
   - **Sight Radius**: `3000` *(covers a whole classroom)*
   - **Sensing Interval**: `0.2` *(checks 5 times a second)*
   - **Peripheral Vision Angle**: `90` *(how wide it can see)*
   - **Only Sense Players**: checked ✅ *(ignores other birds)*

---

## Step 4.3: Create its memory

The AI needs to "remember" whether it has found you yet:

1. In **My Blueprint** ➔ **Variables** ➔ click **`+`**
2. Name it **`IsHunting`**
3. Set **Variable Type** to **Boolean**
4. Press **Compile** once, then leave the default **unchecked** (false)

---

## Step 4.4: Wire the Blueprint — the AI's three beats

> **Note:** if the old `BeginPlay` / `Tick` nodes look **greyed out**, they're
> disabled. Right-click ➔ **Node ➔ Enable (Always)**, or delete and place fresh
> ones.

### 🔍 Beat 1 — SENSE

1. Select **`PawnSensing`** in the Components panel.
2. In **Details**, scroll to **Events** ➔ click the **`+`** on **On See Pawn**.
3. Wire it up:

```text
[ On See Pawn (PawnSensing) ]
            │
            ▼
    [ Set IsHunting ]  ☑ checked
```

> **What happens:** the instant the bird "sees" you, it remembers *"target
> found!"*

### 🤔 Beats 2 + 3 — DECIDE & ACT

4. On **Event Tick** (runs every frame), wire this:

```text
[ Event Tick ]
      │
      ▼
[ Branch ] ◄──────────── [ Get IsHunting ]          ⬅️ "Have I found them yet?"
      │ True
      ▼
[ Branch ] ◄──────────── [ Get Distance To ] ◄── [ Get Player Pawn ]
      │ True                   (Result > 150.0)      ⬅️ "Are they still >150cm away?"
      ▼
[ Add Movement Input ]                               ⬅️ "Fly at them!"
   ├─ World Direction ◄── [ Get Unit Direction (Vector) ]
   │                          From ◄── [ Get Actor Location (self) ]
   │                          To   ◄── [ Get Actor Location ] ◄── [ Get Player Pawn ]
   └─ Scale Value = 1.0
      │
      ▼
[ Set Actor Rotation ] ◄── [ Find Look at Rotation ]  ⬅️ "Turn to face them"
                              Start  ◄── [ Get Actor Location (self) ]
                              Target ◄── [ Get Actor Location ] ◄── [ Get Player Pawn ]
```

**Wiring tips:**
- Place **one** `Get Player Pawn` node and drag from it to all three places.
- Drag off `Get Distance To` ➔ search for the **`>`** (greater) node ➔ type
  `150.0` in the lower field.
- `Set Actor Rotation` makes the bird fly **beak-first**. Without it the phoenix
  slides sideways and the flapping animation looks completely wrong.

### 🏆 Beat 3 — SCORE

**Nothing to wire!** `CarriedTarget` *is* a real `BP_Target`, so it already
carries the shatter effect, the sound, and the scoring with it.

5. Press **Compile** ✅ and **Save**.

---

## Step 4.5: Test on the monitor first (no headset yet)

> **💡 Why test on PC first?**
> The AI's brain **has nothing to do with whether we display on a monitor or a
> headset.** Testing on the screen is faster, easier, and everyone can do it at
> once without queuing for a headset!

1. Open `Content/FirstPerson/Maps/FirstPersonMap`.
2. In **World Settings**, check **Default Pawn Class** is **`BP_FirstPersonCharacter`**.
3. **Drag `BP_BirdTarget`** into the level, about **400 cm** away, at **Z ≈ 150**.
4. Press **Play** and check each item:

- [ ] The bird hovers with its **wings flapping** — not frozen in a T-pose
- [ ] It faces **beak-first**, not sliding sideways
- [ ] When you walk into its view it **turns toward you and flies at you**
- [ ] It **stops about 150 cm away** and doesn't ram your face
- [ ] Shoot the target hanging beneath it ➔ **shatter + sound + score goes up**

---

## Step 4.6: Release the bird into your real classroom (Mixed Reality)

1. Open `Content/TargetGame/VR_MR/Levels/LVL_TargetGame_MR`.
2. **Drag in 2 `BP_BirdTarget`**, placed:
   - at about **Z ≈ 150 cm** height
   - **3–4 metres** from `PlayerStart`
   - over **open floor**, away from real desks and chairs
3. **Save** (`Ctrl + S`).
4. Click **`...`** next to Play ➔ **VR Preview** ➔ put on the headset.

---

## 🏆 The Climax: the AI hunts you in your real classroom

- You see your real classroom, real desks, and your friends through passthrough.
- **Two phoenixes hover in the middle of your actual classroom**, wings beating,
  each carrying a target.
- The moment one **sees you**, it turns its head toward you and **starts hunting**.
- You have to spin, aim, and shatter the target in its claws before it closes in!
- **CRACK!** The target shatters, the score climbs — and the bird flies off
  empty-clawed.

> **🧠 What you just built:**
> Not an object following a pre-written script, but an **Agent that senses its
> environment, decides for itself, and acts** — and it decided that **you** are
> the objective.

---

## 🩺 Stage 4 Troubleshooting

| Symptom | Cause | Fix |
|---|---|---|
| Bird never moves or follows | `PawnSensing` hasn't seen the player | Check **Sight Radius = 3000** and **Only Sense Players** is ticked.<br>**Demo rescue:** tick the `IsHunting` variable's default to true so it always hunts. |
| Bird hovers but never chases | No brain plugged in | **Class Defaults ➔ Auto Possess AI ➔ `Placed in World or Spawned`** |
| Bullets stop at the bird's body | The phoenix is still blocking shots | Select the `phoenix` component ➔ set **Collision Presets = `NoCollision`** |
| Hitting the target does nothing | Child Actor class is empty | Select `CarriedTarget` ➔ set **Child Actor Class = `BP_Target`** |
| Bird rams your face / makes you dizzy | Speed still at the default 1200 | `FloatingPawnMovement` ➔ **Max Speed = 200**, and raise the `150.0` on the Branch node |
| Bird slides sideways instead of beak-first | Model's forward axis isn't +X | Adjust the `phoenix` component's **Rotation ➔ Yaw** |
| Bird frozen with wings spread (T-pose) | No animation assigned | Set **Animation Mode = `Use Animation Asset`**, **Anim to Play = `phoenix_Anim`**, tick **Looping** |
| Bird is giant / microscopic | Source model scale | Adjust the `phoenix` component's **Transform ➔ Scale** |
| Bird is plain white/grey with no pattern | Materials missing | Check `Content/phoenix/Materials/` and `Textures/` are both present |
| Two overlapping targets | `BirdMesh` never deleted | Delete `BirdMesh`, or set its **Static Mesh = `None`** |
| Nodes greyed out and never run | Node is disabled | Right-click the node ➔ **Node ➔ Enable (Always)** |

---

## 🎁 Bonus (if you still have time)

**1. Make the bird flee once its target is shot**
Right now the bird keeps flying empty-clawed. To make it leave too:
on `Event Tick`, add `Is Valid` checking `CarriedTarget ➔ Child Actor`
➔ if **False** ➔ connect to `DestroyActor`.

**2. Make it grip the target in its actual claws**
Select `CarriedTarget` ➔ in the **Parent Socket** field, pick a foot or claw bone
on the phoenix skeleton instead of hanging it by a Z offset.

**3. Crank up the challenge**
Try 4–5 birds, or raise **Max Speed** to `300`.
*(⚠️ Don't go higher than that with anyone in a headset, and always keep a
spotter.)*
