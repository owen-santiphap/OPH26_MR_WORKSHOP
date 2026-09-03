// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MRUtilityKitBPLibrary.h"

#ifdef MRUTILITYKIT_MRUtilityKitBPLibrary_generated_h
#error "MRUtilityKitBPLibrary.generated.h already included, missing '#pragma once' in MRUtilityKitBPLibrary.h"
#endif
#define MRUTILITYKIT_MRUtilityKitBPLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMRUKAnchor;
class UMRUKConfigureTrackables;
class UMRUKLoadFromDevice;
class UMRUKLoadFromJson;
class UObject;
class UProceduralMeshComponent;
class USceneComponent;
class UTexture2D;
class UTextureRenderTarget2D;
enum class EMRUKSceneModel : uint8;
struct FLinearColor;
struct FMRUKTrackerConfiguration;
struct FOculusXRUInt64;

// ********** Begin ScriptStruct FMRUKMeshSegment **************************************************
struct Z_Construct_UScriptStruct_FMRUKMeshSegment_Statics;
#define FID_Target_MR_Claude_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMRUKMeshSegment_Statics; \
	MRUTILITYKIT_API static class UScriptStruct* StaticStruct();


struct FMRUKMeshSegment;
// ********** End ScriptStruct FMRUKMeshSegment ****************************************************

// ********** Begin Delegate FMRUKLoaded ***********************************************************
#define FID_Target_MR_Claude_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_28_DELEGATE \
static void FMRUKLoaded_DelegateWrapper(const FMulticastScriptDelegate& MRUKLoaded);


// ********** End Delegate FMRUKLoaded *************************************************************

// ********** Begin Class UMRUKLoadFromDevice ******************************************************
#define FID_Target_MR_Claude_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSceneLoaded); \
	DECLARE_FUNCTION(execLoadSceneFromDeviceAsync);


struct Z_Construct_UClass_UMRUKLoadFromDevice_Statics;
MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKLoadFromDevice_NoRegister();

#define FID_Target_MR_Claude_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMRUKLoadFromDevice(); \
	friend struct ::Z_Construct_UClass_UMRUKLoadFromDevice_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MRUTILITYKIT_API UClass* ::Z_Construct_UClass_UMRUKLoadFromDevice_NoRegister(); \
public: \
	DECLARE_CLASS2(UMRUKLoadFromDevice, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MRUtilityKit"), Z_Construct_UClass_UMRUKLoadFromDevice_NoRegister) \
	DECLARE_SERIALIZER(UMRUKLoadFromDevice)


#define FID_Target_MR_Claude_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMRUKLoadFromDevice(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMRUKLoadFromDevice(UMRUKLoadFromDevice&&) = delete; \
	UMRUKLoadFromDevice(const UMRUKLoadFromDevice&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMRUKLoadFromDevice); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMRUKLoadFromDevice); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMRUKLoadFromDevice) \
	NO_API virtual ~UMRUKLoadFromDevice();


#define FID_Target_MR_Claude_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_23_PROLOG
#define FID_Target_MR_Claude_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Target_MR_Claude_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Target_MR_Claude_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_26_INCLASS_NO_PURE_DECLS \
	FID_Target_MR_Claude_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMRUKLoadFromDevice;

// ********** End Class UMRUKLoadFromDevice ********************************************************

// ********** Begin Delegate FMRUKTrackablesConfigured *********************************************
#define FID_Target_MR_Claude_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_60_DELEGATE \
static void FMRUKTrackablesConfigured_DelegateWrapper(const FMulticastScriptDelegate& MRUKTrackablesConfigured);


// ********** End Delegate FMRUKTrackablesConfigured ***********************************************

// ********** Begin Class UMRUKConfigureTrackables *************************************************
#define FID_Target_MR_Claude_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnTrackablesConfigured); \
	DECLARE_FUNCTION(execConfigureTrackablesAsync);


struct Z_Construct_UClass_UMRUKConfigureTrackables_Statics;
MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKConfigureTrackables_NoRegister();

#define FID_Target_MR_Claude_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMRUKConfigureTrackables(); \
	friend struct ::Z_Construct_UClass_UMRUKConfigureTrackables_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MRUTILITYKIT_API UClass* ::Z_Construct_UClass_UMRUKConfigureTrackables_NoRegister(); \
public: \
	DECLARE_CLASS2(UMRUKConfigureTrackables, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MRUtilityKit"), Z_Construct_UClass_UMRUKConfigureTrackables_NoRegister) \
	DECLARE_SERIALIZER(UMRUKConfigureTrackables)


#define FID_Target_MR_Claude_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_58_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMRUKConfigureTrackables(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMRUKConfigureTrackables(UMRUKConfigureTrackables&&) = delete; \
	UMRUKConfigureTrackables(const UMRUKConfigureTrackables&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMRUKConfigureTrackables); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMRUKConfigureTrackables); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMRUKConfigureTrackables) \
	NO_API virtual ~UMRUKConfigureTrackables();


#define FID_Target_MR_Claude_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_55_PROLOG
#define FID_Target_MR_Claude_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Target_MR_Claude_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Target_MR_Claude_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_58_INCLASS_NO_PURE_DECLS \
	FID_Target_MR_Claude_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMRUKConfigureTrackables;

// ********** End Class UMRUKConfigureTrackables ***************************************************

// ********** Begin Delegate FMRUKLoaded ***********************************************************
#define FID_Target_MR_Claude_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_86_DELEGATE \
static void FMRUKLoaded_DelegateWrapper(const FMulticastScriptDelegate& MRUKLoaded);


// ********** End Delegate FMRUKLoaded *************************************************************

// ********** Begin Class UMRUKLoadFromJson ********************************************************
#define FID_Target_MR_Claude_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSceneLoaded); \
	DECLARE_FUNCTION(execLoadSceneFromJsonAsync);


struct Z_Construct_UClass_UMRUKLoadFromJson_Statics;
MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKLoadFromJson_NoRegister();

#define FID_Target_MR_Claude_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_84_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMRUKLoadFromJson(); \
	friend struct ::Z_Construct_UClass_UMRUKLoadFromJson_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MRUTILITYKIT_API UClass* ::Z_Construct_UClass_UMRUKLoadFromJson_NoRegister(); \
public: \
	DECLARE_CLASS2(UMRUKLoadFromJson, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MRUtilityKit"), Z_Construct_UClass_UMRUKLoadFromJson_NoRegister) \
	DECLARE_SERIALIZER(UMRUKLoadFromJson)


#define FID_Target_MR_Claude_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_84_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMRUKLoadFromJson(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMRUKLoadFromJson(UMRUKLoadFromJson&&) = delete; \
	UMRUKLoadFromJson(const UMRUKLoadFromJson&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMRUKLoadFromJson); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMRUKLoadFromJson); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMRUKLoadFromJson) \
	NO_API virtual ~UMRUKLoadFromJson();


#define FID_Target_MR_Claude_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_81_PROLOG
#define FID_Target_MR_Claude_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_84_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Target_MR_Claude_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Target_MR_Claude_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_84_INCLASS_NO_PURE_DECLS \
	FID_Target_MR_Claude_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_84_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMRUKLoadFromJson;

// ********** End Class UMRUKLoadFromJson **********************************************************

// ********** Begin Class UMRUKBPLibrary ***********************************************************
#define FID_Target_MR_Claude_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_116_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMatrixColumn); \
	DECLARE_FUNCTION(execConstructTexture2D); \
	DECLARE_FUNCTION(execComputeDirectionAwayFromClosestWall); \
	DECLARE_FUNCTION(execSetScaleRecursivelyAdjustingForRotation); \
	DECLARE_FUNCTION(execComputeCentroid); \
	DECLARE_FUNCTION(execIsUnrealEngineMetaFork); \
	DECLARE_FUNCTION(execRecalculateProceduralMeshAndTangents); \
	DECLARE_FUNCTION(execLoadGlobalMeshFromDevice);


struct Z_Construct_UClass_UMRUKBPLibrary_Statics;
MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKBPLibrary_NoRegister();

#define FID_Target_MR_Claude_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_116_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMRUKBPLibrary(); \
	friend struct ::Z_Construct_UClass_UMRUKBPLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MRUTILITYKIT_API UClass* ::Z_Construct_UClass_UMRUKBPLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UMRUKBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MRUtilityKit"), Z_Construct_UClass_UMRUKBPLibrary_NoRegister) \
	DECLARE_SERIALIZER(UMRUKBPLibrary)


#define FID_Target_MR_Claude_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_116_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMRUKBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMRUKBPLibrary(UMRUKBPLibrary&&) = delete; \
	UMRUKBPLibrary(const UMRUKBPLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMRUKBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMRUKBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMRUKBPLibrary) \
	NO_API virtual ~UMRUKBPLibrary();


#define FID_Target_MR_Claude_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_113_PROLOG
#define FID_Target_MR_Claude_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_116_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Target_MR_Claude_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_116_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Target_MR_Claude_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_116_INCLASS_NO_PURE_DECLS \
	FID_Target_MR_Claude_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_116_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMRUKBPLibrary;

// ********** End Class UMRUKBPLibrary *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Target_MR_Claude_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
