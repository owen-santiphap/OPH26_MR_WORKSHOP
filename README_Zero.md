# 🚀 From Zero to Mixed Reality: Converting a Clean Desktop PC Project to VR & MR (README_Zero)

> **Starting Condition:** A vanilla Desktop PC project (e.g., Unreal Engine First Person Template) with **ZERO VR assets**, standard WASD + mouse controls, and **no XR plugins imported**.  
> **Destination:** Full 6DOF VR with tracked controllers, followed by Mixed Reality (Passthrough) with real-world collision meshing.

---

## 🗺️ The Complete Architecture Roadmap

```text
[ Stage 0: Foundations ] ➔ [ Stage 1: The PC Baseline ] ➔ [ Stage 2: Build VR (6DOF) ] ➔ [ Stage 3: Build Mixed Reality ]
  • Import MetaXR Plugin     • WASD + Mouse                 • Create IA_Shoot_VR           • Save Map as LVL_MR
  • Enable MRUK              • Standard FirstPersonMap      • Create IMC_VR Context        • Strip Sky & Walls
  • Configure PostProcess    • BP_FirstPersonCharacter      • Build BP_VRPawn from scratch • Add MRUK Room Spawner
  • Set Oculus Link Beta                                    • Tracked Hands + Gun Offset   • Initialize Passthrough
```

---

## 📁 Files Created in this Guide

Starting from zero, you will only need to create **3 assets** and **1 saved-as level**:

```text
Content/
└── TargetGame/
    └── VR_MR/
        ├── Input/
        │   ├── IA_Shoot_VR         <-- [NEW] Enhanced Input Action (Trigger)
        │   └── IMC_VR              <-- [NEW] Input Mapping Context (Quest Controller Bindings)
        ├── Blueprints/
        │   └── BP_VRPawn           <-- [NEW] 6DOF VR Pawn with head & hand tracking
        └── Levels/
            └── LVL_TargetGame_MR   <-- [NEW] Mixed Reality level (Passthrough + Room Collision)
```

---

# 🛠️ Stage 0: Importing & Configuring MetaXR

Before any VR or MR features can be used, the **MetaXR plugin** must be added to the project.

### 0.1 Import MetaXR into the Project
1. Navigate to your project's root folder (where your `.uproject` file is located).
2. If it does not exist, create a folder named **`Plugins`**:
   ```text
   YourProject/
   ├── Config/
   ├── Content/
   ├── Plugins/
   │   └── MetaXR/  <-- Unzip the MetaXR plugin here
   └── YourProject.uproject
   ```
3. Copy the **`MetaXR`** folder from the workshop repository (`Plugins/MetaXR`) or download it from the [Meta Quest Developer Center](https://developer.oculus.com/downloads/package/unreal-engine-5-integration/).
4. Launch your `.uproject`.

### 0.2 Enable Plugins in Unreal Engine
1. Go to **Edit ➔ Plugins**.
2. In the search bar, search for **`MetaXR`**:
   * Check **Enabled** for **MetaXR**.
   * Check **Enabled** for **MR Utility Kit (MRUK)** (bundled with MetaXR).
3. If prompted, restart the editor.

### 0.3 Configure Engine Settings for Mixed Reality (Passthrough)
Open **Edit ➔ Project Settings**:
1. **Insight Passthrough:**
   * Search for `Insight Passthrough` (under **Plugins ➔ Meta XR**).
   * Check **Insight Passthrough Enabled** (`bInsightPassthroughEnabled=True`).
2. **Alpha Channel Support (Crucial for Passthrough Underlay):**
   * Search for `Alpha` (under **Engine ➔ Rendering ➔ Postprocessing**).
   * Set **Enable alpha channel support in post processing** to **Allow through tonemapper** (or enable the checkbox on UE 5.5+).
   * *(Note: In DefaultEngine.ini, this sets `bEnableAlphaChannelInPostProcessing=True` and `r.PostProcessing.PropagateAlpha=1`).*
3. **Run the Project Setup Tool:**
   * On the top toolbar, click **Meta XR Tools ➔ Project Setup Tool**.
   * Under both **PC** and **Android**, click **Apply All / Fix All** to automatically configure recommended OpenXR and SDK settings.

### 0.4 Configure Meta Quest Link PC App
On the host PC running the Meta Quest Link software:
1. Open **Meta Quest Link (Oculus) App**.
2. Go to **Settings ➔ General**: Verify **OpenXR Runtime** is set to **Meta Quest Link (Active)**.
3. Go to **Settings ➔ Beta**:
   * Switch **Enable Passthrough over Meta Quest Link** to **ON**.
   * Switch **Share Meta Quest Point Cloud / Spatial Data** to **ON**.

---

# 🕹️ Stage 1: The PC Baseline

Test your starting project to ensure the game works normally on desktop:
1. Open **`Content/FirstPerson/Maps/FirstPersonMap`**.
2. Click **Play** (PIE).
3. Move with **WASD**, aim with **Mouse**, and left-click to shoot targets.
4. Press **Esc** to exit.

---

# 🥽 Stage 2: Building VR from Scratch (Zero to 6DOF)

Now, we build the VR tracking, controller inputs, and pawn completely from scratch.

### 2.1 Create the Input Action (`IA_Shoot_VR`)
1. In the Content Browser, right-click in an empty space ➔ **Input ➔ Input Action**.
2. Name it **`IA_Shoot_VR`**.
3. Open it and verify that **Value Type** is set to **`Digital (bool)`** (default).
4. Save and close.

### 2.2 Create the Input Mapping Context (`IMC_VR`)
1. In the Content Browser, right-click ➔ **Input ➔ Input Mapping Context**.
2. Name it **`IMC_VR`**.
3. Double-click to open it:
   * Under **Mappings**, click the **`+`** button to add an Action Mapping.
   * Select **`IA_Shoot_VR`**.
   * Click the dropdown to select the key binding:
     * Search and select: **`Oculus Touch (R) Trigger`** (or `XR (R) Index Trigger`).
4. Save and close.

---

### 2.3 Create the VR Pawn (`BP_VRPawn`)
1. In the Content Browser, right-click ➔ **Blueprint Class** ➔ choose **Pawn**.
2. Name it **`BP_VRPawn`**.
3. Double-click to open `BP_VRPawn`.

#### Step A: Assemble Components
In the top-left **Components** panel:
1. Click **`+ Add`** ➔ add a **Scene Component** ➔ rename it to **`VROrigin`**.
2. Select **`VROrigin`**, click **`+ Add`** ➔ add a **Camera Component** ➔ rename to **`Camera`**.
3. Select **`VROrigin`**, click **`+ Add`** ➔ add a **Motion Controller Component** ➔ rename to **`MotionController_L`**:
   * In Details ➔ **Motion Source**: Set to **`LeftGrip`**.
4. Select **`VROrigin`**, click **`+ Add`** ➔ add a **Motion Controller Component** ➔ rename to **`MotionController_R`**:
   * In Details ➔ **Motion Source**: Set to **`RightAim`**.
5. Select **`MotionController_R`**, click **`+ Add`** ➔ add a **Skeletal Mesh Component** (or Static Mesh) ➔ rename to **`SK_FPGun`**:
   * In Details ➔ **Skeletal Mesh**: Choose your gun model (`SK_FPGun`).
   * In Details ➔ **Transform**:
     * **Location:** `(X=0.0, Y=0.0, Z=0.0)`
     * **Rotation:** `(Pitch=0.0, Yaw=0.0, Roll=-90.0)` *(Aligns barrel with hand aim)*.
6. Select **`SK_FPGun`**, click **`+ Add`** ➔ add an **Arrow Component** ➔ rename to **`Muzzle`**:
   * In Details ➔ **Transform**:
     * **Location:** `(X=60.0, Y=0.0, Z=10.0)` *(Positions spawn point at the barrel tip)*.

#### Component Hierarchy Check:
```text
BP_VRPawn (DefaultSceneRoot)
└── VROrigin
    ├── Camera
    ├── MotionController_L
    └── MotionController_R
        └── SK_FPGun
            └── Muzzle
```

---

#### Step B: Wire the Event Graph
Switch to the **Event Graph** tab:

**1. Setup BeginPlay (Tracking Origin & Input Context):**
```text
[ Event BeginPlay ]
       │
       ▼
[ Set Tracking Origin ] (Origin: Floor)
       │
       ▼
[ Get Player Controller ] (Index: 0)
       │ (Return Value)
       ▼
[ Get Enhanced Input Local Player Subsystem ]
       │ (Return Value)
       ▼
[ Add Mapping Context ] (Mapping Context: IMC_VR)
```

**2. Setup Weapon Fire:**
```text
[ IA_Shoot_VR (Started) ]
       │
       ▼
[ Spawn Actor from Class ]
  ├── Class: BP_FirstPersonProjectile
  ├── Collision Handling: Always Spawn, Ignore Collisions  <-- CRITICAL!
  └── Spawn Transform ◄── [ Muzzle ] ➔ [ Get World Transform ]
```

4. Click **Compile** and **Save**.

---

### 2.4 Test VR Mode
1. Open **`FirstPersonMap`**.
2. Open **Window ➔ World Settings**:
   * Under **GameMode Override**, set **Default Pawn Class** to **`BP_VRPawn`**.
3. Put on your Meta Quest headset (connected via Quest Link).
4. Click the **`...`** next to the Play button ➔ Select **VR Preview**.
5. Look at your right hand: your blaster tracks 1:1 with your controller, and pulling the trigger fires projectiles into the arena!

---

# 🌌 Stage 3: Building Mixed Reality (VR to MR)

Now, we strip the virtual reality boundary and project the game into the player's physical room with real-world collisions.

### 3.1 Create the Dedicated MR Level
1. With `FirstPersonMap` open, go to **File ➔ Save Current Level As...**
2. Choose your levels folder and save it as **`LVL_TargetGame_MR`**.

### 3.2 Peel Back the Virtual Sky & Arena Walls
In the **Outliner** of `LVL_TargetGame_MR`, select and press **Delete** on:
* ❌ **`SkyAtmosphere`**
* ❌ **`VolumetricCloud`**
* ❌ **`ExponentialHeightFog`**
* ❌ **`BP_Sky_Sphere`** (if present)
* ❌ All arena floor meshes, ramps, and perimeter walls.
* ⚠️ **KEEP:** **`DirectionalLight`** (required for lighting virtual targets in your physical room) and **`PlayerStart`**.

### 3.3 Add Real-World Room Collision (MR Utility Kit Spawner)
1. Open the **Place Actors** panel (**Window ➔ Place Actors** or `Ctrl + Shift + 1`).
2. Search for **`Anchor Actor Spawner`** (*MRUKAnchorActorSpawner*).
3. Drag it into the viewport of `LVL_TargetGame_MR`.
4. In its **Details** panel:
   * **Spawn Mode:** `All Rooms`.
   * **Procedural Material:** `MI_Highlights_Translucent` (or a transparent shadow-catcher material with collision enabled).
   * **Should Fallback To Procedural:** `Checked [x]`.

### 3.4 Initialize Passthrough in the Level Blueprint
1. Click the **Blueprints** icon on the top toolbar ➔ **Open Level Blueprint**.
2. Add the following nodes and connect them:
   ```text
   [ Event BeginPlay ]
          │
          ▼
   [ Load Scene From Device Async ] (Scene Model: V2Fallback V1)
          │
          ▼
   [ Initialize Persistent Passthrough ] ◄── [ Get Passthrough Subsystem ]
   ```
3. Click **Compile** and **Save**.

---

# 🏆 The Final Verification (Mixed Reality Live Test)

1. Put on the Meta Quest headset.
2. Ensure your room has been scanned (**Settings ➔ Physical Space ➔ Space Setup / Room Scan** on Quest).
3. In Unreal Editor, click **`...` ➔ VR Preview**.
4. **The Result:**
   * The virtual arena is gone; you can see your physical room, desk, and hands clearly through the cameras.
   * Virtual targets float in your physical room.
   * Fired projectiles travel through real space. If you shoot a physical desk or wall, the projectile collides and bounces off it realistically according to real-world physics!

---

# 🩺 Quick Reference Troubleshooting

| Symptom | Cause | Solution |
|---|---|---|
| **Black sky in Stages 1 & 2** | `SkyAtmosphere` does not render to empty background in Forward Shading or Alpha Postprocessing. | Drag **`BP_Sky_Sphere`** from Engine Content into `FirstPersonMap` for VR, or use Deferred Shading on PC. |
| **Black screen / Passthrough not visible in Stage 3** | Oculus Link Beta Passthrough switch is OFF, or Alpha Channel is disabled in Project Settings. | 1. In Oculus PC App: **Settings ➔ Beta ➔ Enable Passthrough over Link = ON**.<br>2. In Project Settings: Enable **Alpha channel support in post processing**. |
| **Bullets disappear immediately when fired** | Bullet collides with gun mesh on frame 0. | On the `SpawnActor` node in `BP_VRPawn`, set **Collision Handling Override** to **`Always Spawn, Ignore Collisions`**. |
| **Gun points sideways or down** | 3D mesh rotation offset on motion controller. | In `BP_VRPawn`, set `SK_FPGun` Rotation to `(Pitch=0, Yaw=0, Roll=-90)`. |
| **Bullets pass through real desks/walls** | Spatial Data sharing is disabled or MRUK Spawner is missing. | 1. In Oculus PC App: **Settings ➔ Beta ➔ Share Spatial Data = ON**.<br>2. Verify `MRUKAnchorActorSpawner` is placed in `LVL_TargetGame_MR`. |
| **Pawn is embedded in the floor** | Tracking origin set to eye level instead of floor. | In `BP_VRPawn` BeginPlay, ensure `Set Tracking Origin` is set to **`Floor`**. |
