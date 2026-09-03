# 🥽 From Desktop FPS to Mixed Reality — Workshop Guide

> **Audience:** High School Students & Beginners (University Open House)  
> **Mission:** Transform a standard desktop PC game into full 6DOF VR, then peel back virtual reality into Mixed Reality!  
> **Educational Philosophy:** Learn by doing — See the direct cause-and-effect of each technology upgrade.

---

## 🗺️ The 3-Stage Transformation Journey

```text
[ Stage 1: Play PC Game ] ➔ [ Stage 2: Upgrade to VR ] ➔ [ Stage 3: Mixed Reality ]
   WASD + Mouse on PC          Headset + 6DOF Hand          Peel Sky to See Classroom
```

---

## 📁 Project Directory Structure

All VR and Mixed Reality workshop assets live inside the `VR_MR` subfolder to keep the workspace organized:

```text
Content/
├── FirstPerson/
│   ├── Maps/
│   │   └── FirstPersonMap          <-- 🎮 STAGE 1: Standard Desktop 3D Map
│   └── Blueprints/
│       └── BP_FirstPersonProjectile <-- Projectile used to shatter targets
│
├── TargetGame/
│   ├── Blueprints/
│   │   ├── BP_Target               <-- 🎯 Target that shatters when shot
│   │   └── BP_TargetGameMode       <-- Game rules and score tracking
│   │
│   └── VR_MR/                      <-- ✨ WORKSHOP FOCUS AREA
│       ├── Blueprints/
│       │   └── BP_VRPawn           <-- 🥽 STAGE 2: VR Pawn with tracked hands
│       ├── Input/
│       │   ├── IA_Shoot_VR         <-- Enhanced Input Action (Trigger)
│       │   └── IMC_VR              <-- Input Mapping Context (Quest Controller)
│       └── Levels/
│           └── LVL_TargetGame_MR   <-- 🌌 STAGE 3: Mixed Reality Level
│
└── FPWeapon/
    ├── Audio/                      <-- Weapon sound effects
    └── Mesh/
        └── SK_FPGun                <-- 🔫 Blaster 3D mesh
```

---

## 🛠️ Part 0: Instructor Pre-Flight Setup (Before Students Arrive)

> [!NOTE]
> All complex engine settings are already permanently pre-configured in `Config/DefaultEngine.ini`:
> - **MetaXR Plugin**: Enabled
> - **Forward Shading & MSAA**: Enabled
> - **Insight Passthrough**: `bInsightPassthroughEnabled=True`
> - **Passthrough Alpha Pipeline**: `bEnableAlphaChannelInPostProcessing=True`, `r.PostProcessing.PropagateAlpha=1`, and `r.Mobile.PropagateAlpha=True`
> 
> Students do **NOT** need to open Project Settings!

### Instructor Checklist on Host PCs:
1. Connect the Meta Quest headset via **USB-C Link Cable** or **Air Link**.
2. Open the **Meta Quest Link (Oculus) PC App**:
   - Go to **Settings ➔ General**: Ensure **OpenXR Runtime** is set to **Meta Quest Link** (Active).
   - Go to **Settings ➔ Beta**: Toggle **Enable Passthrough over Meta Quest Link** to **ON** *(Required for the PC to receive real-world camera feeds)*.
3. In Unreal Engine: Verify that clicking the `...` next to the Play button shows **VR Preview** available.

---

## 🕹️ Stage 1: Play the PC Game (The Baseline — 3 Mins)

*Goal: Play and understand the target shooting game on desktop before touching VR.*

1. In the Content Drawer, navigate to:  
   `Content/FirstPerson/Maps/` ➔ Double-click **`FirstPersonMap`**.
2. *(Verify Default Pawn)*: In the **World Settings** panel on the right, under **GameMode Override**, ensure **Default Pawn Class** is set to **`BP_FirstPersonCharacter`** *(so you have full WASD walk, sprint, and jump capabilities!)*.
3. Click the green **Play** button on the top toolbar to play directly in the editor viewport.
4. **Controls:**
   - **`W`, `A`, `S`, `D`**: Move around the 3D arena.
   - **`Spacebar`**: Jump.
   - **`Mouse`**: Look around.
   - **`Left Mouse Click`**: Shoot the blaster rifle at targets.
5. Shoot a target — notice how the projectile flies and the target shatters into pieces!
6. Press **`Esc`** on the keyboard to exit play mode.

> **💡 Learning Takeaway:**  
> In a traditional PC game, the camera is locked to your 2D mouse, and the gun is glued to a fixed position on the screen.

---

## 🥽 Stage 2: The VR Upgrade (From Screen to 6DOF Hands — 7 Mins)

*Goal: Upgrade the game to full Virtual Reality. Step inside the arena, hold the blaster in your tracked physical right hand, and pull the controller trigger to shoot.*

### Step 2.1: Open `BP_VRPawn` & Snap the Blaster to Your Hand
1. In the Content Drawer, navigate to:  
   `Content/TargetGame/VR_MR/Blueprints/` ➔ Double-click **`BP_VRPawn`**.
2. Look at the **Components** panel on the top-left:
   - Notice the VR tracking rig: `VROrigin` ➔ `Camera` (your head), `MotionController_L`, and `MotionController_R` (your hands).
   - Click **`MotionController_R`**. In the **Details** panel on the right, verify **Motion Source** is set to **`RightAim`** *(ensures it tracks your right hand!)*.
3. **Snap the Blaster to Your Hand:**
   - In Content Drawer, open: `Content/FPWeapon/Mesh/`.
   - **Drag `SK_FPGun`** into the Components panel and **drop it directly onto `MotionController_R`**.
   - With `SK_FPGun` selected, look at the **Details** panel:
     - **Location**: `(X=0.0, Y=0.0, Z=0.0)`
     - **Rotation**: `(Pitch=0.0, Yaw=0.0, Roll=-90.0)` *(aligns the blaster barrel straight along your hand)*.
4. **Add the Muzzle Spawn Point:**
   - With `SK_FPGun` selected, click **`+ Add`** ➔ search for and add an **Arrow Component**.
   - Rename the arrow to **`Muzzle`**.
   - In Details: Set its **Location** to: `(X=60.0, Y=0.0, Z=10.0)` *(places the spawn point right at the tip of the barrel)*.

---

### Step 2.2: Wire the Controller Trigger to Shoot
1. In `BP_VRPawn`, switch to the **Event Graph** tab.
2. **Hook Up BeginPlay (Activates the VR Input Mapping Context):**
   - Connect `Event BeginPlay` ➔ **`Set Tracking Origin`** ➔ select **Local Floor** *(sets height to real floor)*.
   - Drag from the output execution pin ➔ search for **`Get Player Controller`** (Player Index = 0).
   - Drag from its Return Value ➔ search for **`Enhanced Input Local Player Subsystem`**.
   - Drag from the subsystem pin ➔ search for **`Add Mapping Context`**.
   - On the `Add Mapping Context` node: Set **Mapping Context** to **`IMC_VR`**.
   - Connect the white execution line into `Add Mapping Context`.

3. **Wire the Trigger Shoot Event:**
   - Right-click anywhere in the graph ➔ search for: **`Enhanced Action Events ➔ IA_Shoot_VR`**.
   - Drag out from the **Triggered** pin ➔ search for and add **`Spawn Actor from Class`**.
   - On the `SpawnActor` node:
     - **Class**: Select **`BP_FirstPersonProjectile`**.
     - **Collision Handling Override**: Select **`Always Spawn, Ignore Collisions`** *(prevents the bullet from colliding with your own blaster mesh on frame 0)*.
   - From the Components panel on the left, **drag `Muzzle`** into the graph.
   - Drag from `Muzzle` ➔ search for **`Get World Transform`** ➔ connect its Return Value to **`Spawn Transform`**.
4. Click **Compile** and **Save** on the top toolbar.

---

### Step 2.3: Swap the Pawn in `FirstPersonMap` & Play in VR!
1. Switch back to the **`FirstPersonMap`** tab.
2. Look for the **World Settings** panel on the right *(if hidden: top menu **Window ➔ World Settings**)*.
3. In **World Settings**:
   - Under **GameMode Override**, expand the selected game mode.
   - Change **Default Pawn Class** from `BP_FirstPersonCharacter` to **`BP_VRPawn`**.
4. On the top toolbar, click the **`...`** (three dots) next to the Play button ➔ choose **VR Preview**.
5. Put on the Meta Quest headset:
   - **🎉 The VR Upgrade Moment:** You are standing inside the *exact same 3D level* you just played on desktop!
   - Look down at your right hand: you hold the blaster in 3D space!
   - Aim your arm and squeeze the Quest controller trigger: projectiles fire into the arena!
6. Take off the headset and press **`Esc`** on the PC keyboard to stop.

---

## 🌌 Stage 3: The Mixed Reality Transformation (7 Mins)

*Goal: Punch through the virtual world! Peel away the virtual sky and arena to let your real physical classroom show through using Meta Quest Passthrough.*

> **💡 The Concept — Why Can't We See the Room Yet?**  
> The Meta Quest headset has real-time cameras that project your room **behind** the game (Underlay).  
> In VR, the 3D sky, clouds, and arena walls are completely opaque and block the camera feed.  
> The moment you remove the virtual sky, **your real physical room punches through!**

---

### Step 3.1: Branch the Level for Mixed Reality
1. In Unreal Editor, go to the top menu: **File ➔ Save Current Level As...**
2. In the file dialog, navigate to: `Content/TargetGame/VR_MR/Levels/`.
3. Name the level **`LVL_TargetGame_MR`** and click **Save**.  
   *(Now you have your dedicated MR level while keeping your original PC arena safe!)*

---

### Step 3.2: Peel Away the Virtual Sky & Walls
1. Make sure you have **`LVL_TargetGame_MR`** open.
2. Look at the **Outliner** panel on the top-right:
3. Select and **Delete (`Delete` key)** the virtual background actors:
   - ❌ **`SkyAtmosphere`**
   - ❌ **`VolumetricCloud`**
   - ❌ **`ExponentialHeightFog`**
   - ❌ The outer arena boxes and walls *(delete the outer walls and floor so your real classroom is visible!)*.
4. **⚠️ DO NOT DELETE:**
   - ✅ **`DirectionalLight`** *(Crucial! Without this light, your blaster and targets have zero illumination and appear pure black)*.
   - ✅ **`PlayerStart`** *(Defines where you stand in the room)*.

---

### Step 3.3: Place Real-Room Targets
1. In the Content Drawer, navigate to:  
   `Content/TargetGame/Blueprints/`
2. **Drag and drop `BP_Target` 3 to 5 times** directly into the level viewport:
   - Drag one floating in front of where you stand.
   - Drag one to the left, near the door.
   - Drag one above a classmate's desk.
   - Keep them at comfortable eye heights (Z: 120 cm to 180 cm).
3. Save the level (**`Ctrl + S`**).

---

### Step 3.4: Add the Real-Room Mesh Spawner (MRUK)
*Goal: Turn your scanned physical walls, tables, couch, and floor into real-time physics colliders!*

1. In Unreal Editor, open the Place Actors window: **Window ➔ Place Actors** *(or `Ctrl + Shift + 1`)*.
2. Search for: **`Anchor Actor Spawner`** *(MR Utility Kit Anchor Actor Spawner)*.
3. **Drag and drop it directly into your `LVL_TargetGame_MR` level viewport.**
4. With `MRUKAnchorActorSpawner` selected, look at the **Details** panel:
   - **Spawn Mode**: Set to **`All Rooms`**.
   - **Procedural Material**: Click the dropdown ➔ select **`MI_Highlights_Translucent`** *(enables crystal-clear passthrough with active 3D collision!)*.
   - **Should Fallback To Procedural**: Ensure it is checked **`[x]`**.

---

### Step 3.5: Initialize Passthrough & Room Collision in Blueprint
*Goal: Turn on the live cameras and load the room collision asynchronously on startup.*

1. On the top toolbar of `LVL_TargetGame_MR`, click the **Blueprints icon** ➔ **Open Level Blueprint**.
2. **Add the Nodes:**
   - Right-click ➔ search: **`Load Scene From Device Async`** *(MR Utility Kit)*.
     - Set **Scene Model** to: **`V2Fallback V1`** *(smart fallback: tries high-res V2 first, falls back to V1 if needed!)*.
   - Right-click ➔ search: **`Get Passthrough Subsystem`**.
   - Right-click ➔ search: **`Initialize Persistent Passthrough`**.
3. **Wire the Graph:**
   - Connect **`Event BeginPlay`** into **`Load Scene From Device Async`**.
   - Connect the top execution pin of `Load Scene From Device Async` into **`Initialize Persistent Passthrough`**.
   - Connect **`Passthrough Subsystem`** into the **`Target`** pin of `Initialize Persistent Passthrough`:
   ```text
   [ Event BeginPlay ] ➔ [ LoadSceneFromDeviceAsync (V2Fallback V1) ] ➔ [ Initialize Persistent Passthrough ]
                                                                                   ▲
                                                       [ Get Passthrough Subsystem ]
   ```
4. Click **Compile & Save**, then close the Level Blueprint.

---

## 🏆 The Climax: Experience Mixed Reality!

1. On the top toolbar, click the **`...`** (three dots) next to Play ➔ select **VR Preview**.
2. Put on the Meta Quest headset.
3. **✨ The Wow Moment:**
   - The virtual world is gone.
   - You see your **actual physical classroom, your desk, and your friends** through the Quest cameras in real-time!
   - Floating in mid-air in front of you are the glowing 3D targets.
   - Aim your blaster, pull the Quest controller trigger:
     - **PEW!** The projectile flies through your physical room.
     - **CRACK!** The target shatters into real-time physics shards right in front of your friends!
     - **BOUNCE!** If a shot misses, it physically hits your **actual real-world desk or floor and bounces realistically across the classroom!**
     - The scoreboard records the hit!

---

## 🩺 Quick Troubleshooting Cheatsheet

| Issue | Root Cause | Quick Fix |
|---|---|---|
| Cannot move with WASD on desktop (Stage 1) | GameMode Default Pawn is set to VR Pawn | In `FirstPersonMap` World Settings, set **Default Pawn Class** to **`BP_FirstPersonCharacter`**. |
| Headset view is completely pitch black | Meta Quest Link PC app blocked cameras | In the Oculus desktop app on PC: **Settings ➔ Beta**: turn **Enable Passthrough over Meta Quest Link** to **ON**. |
| Blaster appears attached to the left hand | `MotionController_R` has default motion source | In `BP_VRPawn`, select `MotionController_R` and set **Motion Source** to **`RightAim`**. |
| Blaster points sideways or towards the floor | Skeletal mesh bone orientation | In `BP_VRPawn`, select `SK_FPGun` and set Rotation to `(Pitch=0, Yaw=0, Roll=-90)`. |
| Projectile disappears or hits player's hand instantly | Frame-0 collision overlap with gun mesh | On `SpawnActor`, set **Collision Handling Override** to **`Always Spawn, Ignore Collisions`**, and verify `Muzzle` is at `X=60`. |
| Targets and blaster are completely black | Missing light source | In `LVL_TargetGame_MR`, ensure a **Directional Light** is in the level (Quick Add ➔ Lights ➔ Directional Light). |
| Virtual sky/blackness covers the physical room | Opaque sky actor still in the level | In `LVL_TargetGame_MR` Outliner, delete `SkyAtmosphere`, `VolumetricCloud`, and `ExponentialHeightFog`. |
| Trigger does nothing | Enhanced Input mapping not added | In `BP_VRPawn` BeginPlay, ensure `Enhanced Input Local Player Subsystem` calls `Add Mapping Context` with `IMC_VR`. |
| Projectiles don't bounce off real tables / walls | Spatial data permission or spawner missing | 1. In PC Oculus app: **Settings ➔ Beta ➔ turn ON Share Meta Quest Point Cloud / Spatial Data**.<br>2. Ensure `MRUKAnchorActorSpawner` is in the level with `Procedural Material = MI_Highlights_Translucent`.<br>3. Ensure Level Blueprint runs `Load Scene From Device (V2)`. |
| Room mesh shows up as giant gray boxes | Spawner procedural material left on None | In `MRUKAnchorActorSpawner`, set **Procedural Material** to **`MI_Highlights_Translucent`**. |
