# 🥽 VR & Mixed Reality Target Game — Workshop Guide (Open House)

> **Workshop:** First-Person to Mixed Reality Target Game  
> **Audience:** University Open House (High School Students & Beginners)  
> **Philosophy:** **100% Drag-and-Drop & Zero-Friction Settings**

---

## 📁 Project Directory Structure

All VR and Mixed Reality workshop assets live strictly inside the `VR_MR` subfolder to keep the workspace organized:

```text
Content/
├── TargetGame/
│   ├── Blueprints/               <-- Existing PC Game: BP_Target, BP_TargetGameMode, BP_SpawnManager
│   ├── Levels/                   <-- Existing PC levels
│   ├── Target/                   <-- Target materials and textures
│   ├── UI/                       <-- WBP_HUD
│   │
│   └── VR_MR/                    <-- ✨ WORKSHOP FOCUS AREA
│       ├── Blueprints/           <-- BP_VRPawn
│       ├── Input/                <-- IA_Shoot_VR, IMC_VR
│       └── Levels/               <-- LVL_TargetGame_MR
│
├── FirstPerson/
│   └── Blueprints/               <-- BP_FirstPersonProjectile (used to shoot targets)
└── FPWeapon/
    ├── Audio/                    <-- FirstPersonTemplateWeaponFire02 (gunshot sound)
    └── Mesh/                     <-- SK_FPGun (blaster 3D mesh)
```

---

## 🛠️ Part 0: Instructor Pre-Flight Setup (Done before students arrive)

> [!NOTE]
> All complex engine settings are already permanently pre-configured in `Config/DefaultEngine.ini` and `VR_MR_Workshop.uproject`:
> - **MetaXR Plugin**: Enabled
> - **Forward Shading & MSAA**: Enabled
> - **Insight Passthrough**: `bInsightPassthroughEnabled=True`
> - **Passthrough Alpha Pipeline**: `bEnableAlphaChannelInPostProcessing=True`, `r.PostProcessing.PropagateAlpha=1`, and `r.Mobile.PropagateAlpha=True` (Pre-configured for real-world Passthrough!)
> 
> Students do **NOT** need to open Project Settings!

### Instructor Checklist on Host PCs:
1. Connect Meta Quest 2 / 3 / Pro via **USB-C Link Cable** or **Air Link**.
2. Open the **Meta Quest Link (Oculus) PC App**:
   - Go to **Settings ➔ General**: Ensure **OpenXR Runtime** is set to **Meta Quest Link** (Active).
   - Go to **Settings ➔ Beta**: Toggle **Enable Passthrough over Meta Quest Link** to **ON** (Required for the PC to receive real-world camera feeds).
3. In Unreal Engine: Check that the Play button dropdown has **VR Preview** available.

> [!IMPORTANT]
> ### 🌌 Why is the Sky Black on the PC Monitor (Only Clouds Visible)?
> When `r.PostProcessing.PropagateAlpha=1` is active for Mixed Reality, Unreal sets the sky atmosphere to **transparent (`Alpha = 0`)**:
> - **Inside the Quest Headset:** That `Alpha = 0` area is where your **real physical classroom** appears through the Passthrough cameras!
> - **On the PC Monitor:** Because your PC monitor has no real-world camera feed to composite behind the game, Unreal fills the transparent background with **solid black**, leaving only the 3D clouds (`Alpha > 0`) visible.
> - **Quick PC Toggle:** If you want to preview the original blue PC sky on desktop, press **`~`** (console) in the editor and type:
>   - `r.PostProcessing.PropagateAlpha 0` ➔ Restores normal blue sky for PC testing.
>   - `r.PostProcessing.PropagateAlpha 1` ➔ Restores Mixed Reality Passthrough transparency.

---

## 🚀 Student Module 1: Hold the Blaster (5 Mins)
*Goal: Visual gratification. See real hand movements tracked with the blaster in 3D.*

### Step 1.1: Open the VR Pawn
1. In the Content Drawer, navigate to:  
   `Content/TargetGame/VR_MR/Blueprints/`
2. Double-click to open **`BP_VRPawn`** *(pre-created for you — no folder or asset creation needed!)*.
3. Verify the component hierarchy:
   ```text
   [Root] DefaultSceneRoot
      └── VROrigin (Scene Component)
           ├── Camera (Camera Component)
           ├── MotionController_L (Motion Controller, MotionSource = LeftAim)
           └── MotionController_R (Motion Controller, MotionSource = RightAim)
   ```
4. In **BeginPlay** of `BP_VRPawn`:
   - Connect `BeginPlay` ➔ **`Set Tracking Origin`** ➔ select **Floor Level** (matches player height to the real room floor).
   - Drag from `Set Tracking Origin` ➔ call **`Execute Console Command`** ➔ Command: `r.PostProcessing.PropagateAlpha 1` *(automatically turns on Passthrough transparency the moment you enter VR!)*.
5. In **EndPlay** of `BP_VRPawn`:
   - Connect `EndPlay` ➔ **`Execute Console Command`** ➔ Command: `r.PostProcessing.PropagateAlpha 0` *(automatically restores the beautiful blue PC sky when you stop playing!)*.

### Step 1.2: The Drag & Drop Snap
1. In the Content Drawer, open:  
   `Content/FPWeapon/Mesh/`
2. **Click and drag `SK_FPGun`** directly into the **Components** panel on the top-left, and **drop it onto `MotionController_R`**.
3. In the Details panel for `SK_FPGun`:
   - Set **Location**: `(X=0, Y=0, Z=0)`
   - Set **Rotation**: `(Pitch=0.0, Yaw=0.0, Roll=-90.0)` *(aligns the blaster barrel forward along your hand)*.
4. With `SK_FPGun` selected, click **+ Add** ➔ add an **Arrow Component** named **`Muzzle`**:
   - In Details: Set **Location** to `(X=60, Y=0, Z=10)` *(places the spawn point right at the blaster tip)*.
5. **Compile & Save**.

---

## 🔫 Student Module 2: Pull the Trigger to Shoot (10 Mins)
*Goal: 2 simple nodes to connect the Quest controller trigger to firing projectiles.*

### Step 2.1: The 2-Wire Event Graph
In `BP_VRPawn` ➔ **Event Graph**:

```text
[ Oculus Touch (R) Trigger - Pressed ]
             │
             ▼
   [ SpawnActor BP_FirstPersonProjectile ]
             │
             ├── Spawn Transform: [ Get World Transform (from Muzzle) ]
             └── Collision Handling: Always Spawn, Ignore Collisions
```

#### How to Drag & Drop this:
1. Right-click on graph ➔ search for **`Oculus Touch (R) Trigger`** (or `IA_Shoot_VR`).
2. Pull out the **Pressed** pin ➔ release and pick **`Spawn Actor from Class`**.
3. From the Content Drawer (`Content/FirstPerson/Blueprints/`), **drag `BP_FirstPersonProjectile`** directly onto the **Class** pin.
4. From the Components panel on the left, **drag `Muzzle`** into the graph.
5. Drag out from `Muzzle` ➔ pick **`Get World Transform`** ➔ wire into **`Spawn Transform`**.
6. On the `SpawnActor` node: Set **Collision Handling Override** to **`Always Spawn, Ignore Collisions`** *(prevents the bullet from colliding with your own blaster on frame 0)*.
7. *(Optional Audio)*: Pull from SpawnActor ➔ add **`Play Sound at Location`** ➔ select `FirstPersonTemplateWeaponFire02`.

### Step 2.2: Test in VR
1. Hit **VR Preview**.
2. Put on the headset, squeeze the right trigger.
3. The projectile shoots forward and bounces off surfaces!

---

## 🪟 Student Module 3: Mixed Reality Passthrough Magic (10 Mins)
*Goal: Remove the virtual world and shoot targets floating inside the actual classroom!*

### Step 3.1: Add the Passthrough Component
1. Open **`BP_VRPawn`**.
2. Click **+ Add Component** ➔ search for **`OculusXRPassthroughLayer`**.
3. In Details:
   - Verify **Passthrough Layer Type** is set to `Underlay` (default).

### Step 3.2: Open the MR Level
1. In the Content Drawer, navigate to:  
   `Content/TargetGame/VR_MR/Levels/`
2. Double-click to open **`LVL_TargetGame_MR`** *(pre-created for you — no folder or level creation needed!)*.
3. In **World Settings** (Window ➔ World Settings):
   - **GameMode Override**: `BP_TargetGameMode`
   - **Default Pawn Class**: `BP_VRPawn`
4. Add lighting for the targets:
   - Place a simple **Directional Light** into the level.
   - **Important:** Do **NOT** add a SkySphere, SkyAtmosphere, or ExponentialHeightFog. An empty black background outputs `Alpha = 0`, allowing the real-world Passthrough camera feed to shine through!

### Step 3.3: Drag & Drop Targets Around the Room
1. In Content Drawer, open:  
   `Content/TargetGame/Blueprints/`
2. **Drag and drop `BP_Target`** 3 to 5 times directly into the 3D level viewport:
   - Drag one above the teacher's desk.
   - Drag one near the door.
   - Drag one floating near a classmate.
   - Keep them at comfortable eye heights (Z: 120 cm to 180 cm).

---

## 🏆 The Climax: Play & Win!

1. Click **VR Preview**.
2. Hand the headset to the student.
3. **The Wow Moment**:
   - The virtual world is gone.
   - The student sees their actual classroom and friends through the Quest cameras in real-time.
   - In front of them float the 3D targets.
   - They aim the blaster, squeeze the trigger:
     - **PEW!** The projectile flies through their real room.
     - **CRACK!** The target shatters into physical Chaos shards.
     - The debug notification displays **"Win!!!"**.

---

## 🩺 Quick Troubleshooting Cheatsheet

| Issue | Root Cause | Quick Fix |
|---|---|---|
| Black screen in headset / Passthrough not showing | Link Passthrough toggle disabled in PC app | In Oculus PC App ➔ `Settings ➔ Beta`: verify **Enable Passthrough over Meta Quest Link** is turned **ON**. |
| Blaster points sideways or towards the floor | Skeletal mesh default bone offset | In `BP_VRPawn`, select `SK_FPGun` and set Rotation to `(Pitch=0, Yaw=0, Roll=-90)`. |
| Projectile disappears or hits player's hand instantly | Frame-0 collision overlap with gun | On `SpawnActor`, set **Collision Handling Override** to `Always Spawn, Ignore Collisions`, and ensure `Muzzle` Arrow is placed at `X=60`. |
| Player view is at floor level (crawling) | Missing tracking origin node | In `BP_VRPawn` BeginPlay, ensure `Set Tracking Origin` is called with **Floor Level**. |
| Virtual sky/blackness covers the room | Opaque sky actor in the level | Delete any `SkySphere`, `SkyAtmosphere`, or `ExponentialHeightFog` from the level so the background clears to alpha 0. |
| PC monitor shows black sky with floating clouds | `PropagateAlpha=1` punches out sky for MR Passthrough | **Expected behavior.** In the Quest headset, that black area is your real room! To view the blue sky on PC, run console command: `r.PostProcessing.PropagateAlpha 0`. |
