// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRSpatialAnchorComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeOculusXRSpatialAnchorComponent() {}

// ********** Begin Cross Module References ********************************************************
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAnchorComponent();
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRSpatialAnchorComponent();
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRSpatialAnchorComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusXRAnchors();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOculusXRSpatialAnchorComponent ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRSpatialAnchorComponent;
UClass* UOculusXRSpatialAnchorComponent::GetPrivateStaticClass()
{
	using TClass = UOculusXRSpatialAnchorComponent;
	if (!Z_Registration_Info_UClass_UOculusXRSpatialAnchorComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OculusXRSpatialAnchorComponent"),
			Z_Registration_Info_UClass_UOculusXRSpatialAnchorComponent.InnerSingleton,
			StaticRegisterNativesUOculusXRSpatialAnchorComponent,
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
	return Z_Registration_Info_UClass_UOculusXRSpatialAnchorComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UOculusXRSpatialAnchorComponent_NoRegister()
{
	return UOculusXRSpatialAnchorComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOculusXRSpatialAnchorComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "DisplayName", "Oculus Spatial Anchor Component" },
		{ "IncludePath", "OculusXRSpatialAnchorComponent.h" },
		{ "ModuleRelativePath", "Public/OculusXRSpatialAnchorComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRSpatialAnchorComponent constinit property declarations **********
// ********** End Class UOculusXRSpatialAnchorComponent constinit property declarations ************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRSpatialAnchorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UOculusXRSpatialAnchorComponent_Statics
UObject* (*const Z_Construct_UClass_UOculusXRSpatialAnchorComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOculusXRAnchorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXRAnchors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRSpatialAnchorComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRSpatialAnchorComponent_Statics::ClassParams = {
	&UOculusXRSpatialAnchorComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRSpatialAnchorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRSpatialAnchorComponent_Statics::Class_MetaDataParams)
};
void UOculusXRSpatialAnchorComponent::StaticRegisterNativesUOculusXRSpatialAnchorComponent()
{
}
UClass* Z_Construct_UClass_UOculusXRSpatialAnchorComponent()
{
	if (!Z_Registration_Info_UClass_UOculusXRSpatialAnchorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRSpatialAnchorComponent.OuterSingleton, Z_Construct_UClass_UOculusXRSpatialAnchorComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRSpatialAnchorComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRSpatialAnchorComponent);
UOculusXRSpatialAnchorComponent::~UOculusXRSpatialAnchorComponent() {}
// ********** End Class UOculusXRSpatialAnchorComponent ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Target_MR_Claude_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRSpatialAnchorComponent_h__Script_OculusXRAnchors_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRSpatialAnchorComponent, UOculusXRSpatialAnchorComponent::StaticClass, TEXT("UOculusXRSpatialAnchorComponent"), &Z_Registration_Info_UClass_UOculusXRSpatialAnchorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRSpatialAnchorComponent), 3961876105U) },
	};
}; // Z_CompiledInDeferFile_FID_Target_MR_Claude_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRSpatialAnchorComponent_h__Script_OculusXRAnchors_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Target_MR_Claude_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRSpatialAnchorComponent_h__Script_OculusXRAnchors_649013450{
	TEXT("/Script/OculusXRAnchors"),
	Z_CompiledInDeferFile_FID_Target_MR_Claude_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRSpatialAnchorComponent_h__Script_OculusXRAnchors_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Target_MR_Claude_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRSpatialAnchorComponent_h__Script_OculusXRAnchors_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
