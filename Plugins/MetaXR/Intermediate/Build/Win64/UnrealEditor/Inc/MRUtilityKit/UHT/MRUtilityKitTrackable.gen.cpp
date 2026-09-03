// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MRUtilityKitTrackable.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMRUtilityKitTrackable() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox2D();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor();
MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKTrackable();
MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKTrackable_NoRegister();
MRUTILITYKIT_API UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKMarkerPayloadType();
MRUTILITYKIT_API UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKTrackableType();
UPackage* Z_Construct_UPackage__Script_MRUtilityKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMRUKTrackable ***********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AMRUKTrackable;
UClass* AMRUKTrackable::GetPrivateStaticClass()
{
	using TClass = AMRUKTrackable;
	if (!Z_Registration_Info_UClass_AMRUKTrackable.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MRUKTrackable"),
			Z_Registration_Info_UClass_AMRUKTrackable.InnerSingleton,
			StaticRegisterNativesAMRUKTrackable,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AMRUKTrackable.InnerSingleton;
}
UClass* Z_Construct_UClass_AMRUKTrackable_NoRegister()
{
	return AMRUKTrackable::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMRUKTrackable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "MRUtilityKit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Represents a trackable object in the Mixed Reality Utility Kit.\n * A trackable is a type of object that can be detected and tracked by the runtime,\n * such as keyboards and QR codes. Unlike scene anchors, trackables can move dynamically\n * and may become temporarily untracked if they cannot be seen by the device.\n *\n * Trackables are instantiated and managed by UMRUKSubsystem. When a new trackable is detected,\n * the subsystem creates an AMRUKTrackable actor and invokes the OnTrackableAdded event.\n */" },
#endif
		{ "DisplayName", "MR Utility Kit Trackable" },
		{ "IncludePath", "MRUtilityKitTrackable.h" },
		{ "ModuleRelativePath", "Public/MRUtilityKitTrackable.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents a trackable object in the Mixed Reality Utility Kit.\nA trackable is a type of object that can be detected and tracked by the runtime,\nsuch as keyboards and QR codes. Unlike scene anchors, trackables can move dynamically\nand may become temporarily untracked if they cannot be seen by the device.\n\nTrackables are instantiated and managed by UMRUKSubsystem. When a new trackable is detected,\nthe subsystem creates an AMRUKTrackable actor and invokes the OnTrackableAdded event." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackableType_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The type of this trackable (e.g., Keyboard, QRCode)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitTrackable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The type of this trackable (e.g., Keyboard, QRCode)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsTracked_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Whether this trackable is currently being tracked.\n\x09 * A trackable may become temporarily untracked if it cannot be seen by the device.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitTrackable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether this trackable is currently being tracked.\nA trackable may become temporarily untracked if it cannot be seen by the device." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneBounds_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If the trackable has a plane attached to it, this represents the bounds of that plane in\n\x09 * local coordinate space.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitTrackable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the trackable has a plane attached to it, this represents the bounds of that plane in\nlocal coordinate space." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneBoundary2D_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If the trackable has a plane attached to it, this represents the boundary of it in\n\x09 * local coordinate space.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitTrackable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the trackable has a plane attached to it, this represents the boundary of it in\nlocal coordinate space." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeBounds_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If the trackable has a volume attached to it, this represents the bounds of that volume in\n\x09 * local coordinate space.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitTrackable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the trackable has a volume attached to it, this represents the bounds of that volume in\nlocal coordinate space." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PayloadType_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The type of payload the trackable carries.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitTrackable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The type of payload the trackable carries." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerPayloadString_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The marker's payload as a string.\n\x09 * If this trackable is a marker (e.g., a QR Code) and its payload can be interpreted as a string,\n\x09 * this property contains the decoded string. Otherwise, it is empty.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitTrackable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The marker's payload as a string.\nIf this trackable is a marker (e.g., a QR Code) and its payload can be interpreted as a string,\nthis property contains the decoded string. Otherwise, it is empty." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerPayloadBytes_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The marker's payload as raw bytes.\n\x09 * If this trackable is a marker (e.g., a QR Code), this property contains the raw payload bytes.\n\x09 * Otherwise, the array is empty.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitTrackable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The marker's payload as raw bytes.\nIf this trackable is a marker (e.g., a QR Code), this property contains the raw payload bytes.\nOtherwise, the array is empty." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AMRUKTrackable constinit property declarations ***************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_TrackableType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TrackableType;
	static void NewProp_IsTracked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsTracked;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlaneBounds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlaneBoundary2D_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlaneBoundary2D;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VolumeBounds;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PayloadType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PayloadType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MarkerPayloadString;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MarkerPayloadBytes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MarkerPayloadBytes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AMRUKTrackable constinit property declarations *****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMRUKTrackable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AMRUKTrackable_Statics

// ********** Begin Class AMRUKTrackable Property Definitions **************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMRUKTrackable_Statics::NewProp_TrackableType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMRUKTrackable_Statics::NewProp_TrackableType = { "TrackableType", nullptr, (EPropertyFlags)0x0010000000022815, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKTrackable, TrackableType), Z_Construct_UEnum_MRUtilityKit_EMRUKTrackableType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackableType_MetaData), NewProp_TrackableType_MetaData) }; // 2499041208
void Z_Construct_UClass_AMRUKTrackable_Statics::NewProp_IsTracked_SetBit(void* Obj)
{
	((AMRUKTrackable*)Obj)->IsTracked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMRUKTrackable_Statics::NewProp_IsTracked = { "IsTracked", nullptr, (EPropertyFlags)0x0010000000022815, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMRUKTrackable), &Z_Construct_UClass_AMRUKTrackable_Statics::NewProp_IsTracked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsTracked_MetaData), NewProp_IsTracked_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMRUKTrackable_Statics::NewProp_PlaneBounds = { "PlaneBounds", nullptr, (EPropertyFlags)0x0010000000022815, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKTrackable, PlaneBounds), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneBounds_MetaData), NewProp_PlaneBounds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMRUKTrackable_Statics::NewProp_PlaneBoundary2D_Inner = { "PlaneBoundary2D", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMRUKTrackable_Statics::NewProp_PlaneBoundary2D = { "PlaneBoundary2D", nullptr, (EPropertyFlags)0x0010000000022815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKTrackable, PlaneBoundary2D), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneBoundary2D_MetaData), NewProp_PlaneBoundary2D_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMRUKTrackable_Statics::NewProp_VolumeBounds = { "VolumeBounds", nullptr, (EPropertyFlags)0x0010000000022815, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKTrackable, VolumeBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeBounds_MetaData), NewProp_VolumeBounds_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMRUKTrackable_Statics::NewProp_PayloadType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMRUKTrackable_Statics::NewProp_PayloadType = { "PayloadType", nullptr, (EPropertyFlags)0x0010000000022815, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKTrackable, PayloadType), Z_Construct_UEnum_MRUtilityKit_EMRUKMarkerPayloadType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PayloadType_MetaData), NewProp_PayloadType_MetaData) }; // 1982717005
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMRUKTrackable_Statics::NewProp_MarkerPayloadString = { "MarkerPayloadString", nullptr, (EPropertyFlags)0x0010000000022815, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKTrackable, MarkerPayloadString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerPayloadString_MetaData), NewProp_MarkerPayloadString_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMRUKTrackable_Statics::NewProp_MarkerPayloadBytes_Inner = { "MarkerPayloadBytes", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMRUKTrackable_Statics::NewProp_MarkerPayloadBytes = { "MarkerPayloadBytes", nullptr, (EPropertyFlags)0x0010000000022815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKTrackable, MarkerPayloadBytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerPayloadBytes_MetaData), NewProp_MarkerPayloadBytes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMRUKTrackable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKTrackable_Statics::NewProp_TrackableType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKTrackable_Statics::NewProp_TrackableType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKTrackable_Statics::NewProp_IsTracked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKTrackable_Statics::NewProp_PlaneBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKTrackable_Statics::NewProp_PlaneBoundary2D_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKTrackable_Statics::NewProp_PlaneBoundary2D,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKTrackable_Statics::NewProp_VolumeBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKTrackable_Statics::NewProp_PayloadType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKTrackable_Statics::NewProp_PayloadType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKTrackable_Statics::NewProp_MarkerPayloadString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKTrackable_Statics::NewProp_MarkerPayloadBytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKTrackable_Statics::NewProp_MarkerPayloadBytes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKTrackable_Statics::PropPointers) < 2048);
// ********** End Class AMRUKTrackable Property Definitions ****************************************
UObject* (*const Z_Construct_UClass_AMRUKTrackable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MRUtilityKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKTrackable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMRUKTrackable_Statics::ClassParams = {
	&AMRUKTrackable::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMRUKTrackable_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKTrackable_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKTrackable_Statics::Class_MetaDataParams), Z_Construct_UClass_AMRUKTrackable_Statics::Class_MetaDataParams)
};
void AMRUKTrackable::StaticRegisterNativesAMRUKTrackable()
{
}
UClass* Z_Construct_UClass_AMRUKTrackable()
{
	if (!Z_Registration_Info_UClass_AMRUKTrackable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMRUKTrackable.OuterSingleton, Z_Construct_UClass_AMRUKTrackable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMRUKTrackable.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AMRUKTrackable);
AMRUKTrackable::~AMRUKTrackable() {}
// ********** End Class AMRUKTrackable *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Target_MR_Claude_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitTrackable_h__Script_MRUtilityKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMRUKTrackable, AMRUKTrackable::StaticClass, TEXT("AMRUKTrackable"), &Z_Registration_Info_UClass_AMRUKTrackable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMRUKTrackable), 241143525U) },
	};
}; // Z_CompiledInDeferFile_FID_Target_MR_Claude_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitTrackable_h__Script_MRUtilityKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Target_MR_Claude_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitTrackable_h__Script_MRUtilityKit_2195165384{
	TEXT("/Script/MRUtilityKit"),
	Z_CompiledInDeferFile_FID_Target_MR_Claude_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitTrackable_h__Script_MRUtilityKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Target_MR_Claude_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitTrackable_h__Script_MRUtilityKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
