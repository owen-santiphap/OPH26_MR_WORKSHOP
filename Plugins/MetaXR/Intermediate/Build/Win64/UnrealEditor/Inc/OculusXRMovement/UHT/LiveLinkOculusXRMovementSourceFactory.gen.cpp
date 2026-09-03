// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkOculusXRMovementSourceFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeLiveLinkOculusXRMovementSourceFactory() {}

// ********** Begin Cross Module References ********************************************************
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceFactory();
OCULUSXRMOVEMENT_API UClass* Z_Construct_UClass_ULiveLinkOculusXRMovementSourceFactory();
OCULUSXRMOVEMENT_API UClass* Z_Construct_UClass_ULiveLinkOculusXRMovementSourceFactory_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusXRMovement();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ULiveLinkOculusXRMovementSourceFactory ***********************************
FClassRegistrationInfo Z_Registration_Info_UClass_ULiveLinkOculusXRMovementSourceFactory;
UClass* ULiveLinkOculusXRMovementSourceFactory::GetPrivateStaticClass()
{
	using TClass = ULiveLinkOculusXRMovementSourceFactory;
	if (!Z_Registration_Info_UClass_ULiveLinkOculusXRMovementSourceFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("LiveLinkOculusXRMovementSourceFactory"),
			Z_Registration_Info_UClass_ULiveLinkOculusXRMovementSourceFactory.InnerSingleton,
			StaticRegisterNativesULiveLinkOculusXRMovementSourceFactory,
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
	return Z_Registration_Info_UClass_ULiveLinkOculusXRMovementSourceFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_ULiveLinkOculusXRMovementSourceFactory_NoRegister()
{
	return ULiveLinkOculusXRMovementSourceFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULiveLinkOculusXRMovementSourceFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LiveLinkOculusXRMovementSourceFactory.h" },
		{ "ModuleRelativePath", "Private/LiveLinkOculusXRMovementSourceFactory.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ULiveLinkOculusXRMovementSourceFactory constinit property declarations ***
// ********** End Class ULiveLinkOculusXRMovementSourceFactory constinit property declarations *****
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkOculusXRMovementSourceFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ULiveLinkOculusXRMovementSourceFactory_Statics
UObject* (*const Z_Construct_UClass_ULiveLinkOculusXRMovementSourceFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXRMovement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkOculusXRMovementSourceFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkOculusXRMovementSourceFactory_Statics::ClassParams = {
	&ULiveLinkOculusXRMovementSourceFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkOculusXRMovementSourceFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveLinkOculusXRMovementSourceFactory_Statics::Class_MetaDataParams)
};
void ULiveLinkOculusXRMovementSourceFactory::StaticRegisterNativesULiveLinkOculusXRMovementSourceFactory()
{
}
UClass* Z_Construct_UClass_ULiveLinkOculusXRMovementSourceFactory()
{
	if (!Z_Registration_Info_UClass_ULiveLinkOculusXRMovementSourceFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkOculusXRMovementSourceFactory.OuterSingleton, Z_Construct_UClass_ULiveLinkOculusXRMovementSourceFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULiveLinkOculusXRMovementSourceFactory.OuterSingleton;
}
ULiveLinkOculusXRMovementSourceFactory::ULiveLinkOculusXRMovementSourceFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ULiveLinkOculusXRMovementSourceFactory);
ULiveLinkOculusXRMovementSourceFactory::~ULiveLinkOculusXRMovementSourceFactory() {}
// ********** End Class ULiveLinkOculusXRMovementSourceFactory *************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Target_MR_Claude_Plugins_MetaXR_Source_OculusXRMovement_Private_LiveLinkOculusXRMovementSourceFactory_h__Script_OculusXRMovement_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkOculusXRMovementSourceFactory, ULiveLinkOculusXRMovementSourceFactory::StaticClass, TEXT("ULiveLinkOculusXRMovementSourceFactory"), &Z_Registration_Info_UClass_ULiveLinkOculusXRMovementSourceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkOculusXRMovementSourceFactory), 4061654697U) },
	};
}; // Z_CompiledInDeferFile_FID_Target_MR_Claude_Plugins_MetaXR_Source_OculusXRMovement_Private_LiveLinkOculusXRMovementSourceFactory_h__Script_OculusXRMovement_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Target_MR_Claude_Plugins_MetaXR_Source_OculusXRMovement_Private_LiveLinkOculusXRMovementSourceFactory_h__Script_OculusXRMovement_549095754{
	TEXT("/Script/OculusXRMovement"),
	Z_CompiledInDeferFile_FID_Target_MR_Claude_Plugins_MetaXR_Source_OculusXRMovement_Private_LiveLinkOculusXRMovementSourceFactory_h__Script_OculusXRMovement_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Target_MR_Claude_Plugins_MetaXR_Source_OculusXRMovement_Private_LiveLinkOculusXRMovementSourceFactory_h__Script_OculusXRMovement_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
