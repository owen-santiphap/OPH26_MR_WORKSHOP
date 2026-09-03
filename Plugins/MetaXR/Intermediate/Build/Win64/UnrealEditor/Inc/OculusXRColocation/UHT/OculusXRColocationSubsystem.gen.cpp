// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRColocationSubsystem.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeOculusXRColocationSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
OCULUSXRCOLOCATION_API UClass* Z_Construct_UClass_UOculusXRColocationSubsystem();
OCULUSXRCOLOCATION_API UClass* Z_Construct_UClass_UOculusXRColocationSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusXRColocation();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOculusXRColocationSubsystem *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRColocationSubsystem;
UClass* UOculusXRColocationSubsystem::GetPrivateStaticClass()
{
	using TClass = UOculusXRColocationSubsystem;
	if (!Z_Registration_Info_UClass_UOculusXRColocationSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OculusXRColocationSubsystem"),
			Z_Registration_Info_UClass_UOculusXRColocationSubsystem.InnerSingleton,
			StaticRegisterNativesUOculusXRColocationSubsystem,
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
	return Z_Registration_Info_UClass_UOculusXRColocationSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UOculusXRColocationSubsystem_NoRegister()
{
	return UOculusXRColocationSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOculusXRColocationSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OculusXRColocationSubsystem.h" },
		{ "ModuleRelativePath", "Public/OculusXRColocationSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRColocationSubsystem constinit property declarations *************
// ********** End Class UOculusXRColocationSubsystem constinit property declarations ***************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRColocationSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UOculusXRColocationSubsystem_Statics
UObject* (*const Z_Construct_UClass_UOculusXRColocationSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXRColocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRColocationSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRColocationSubsystem_Statics::ClassParams = {
	&UOculusXRColocationSubsystem::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRColocationSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRColocationSubsystem_Statics::Class_MetaDataParams)
};
void UOculusXRColocationSubsystem::StaticRegisterNativesUOculusXRColocationSubsystem()
{
}
UClass* Z_Construct_UClass_UOculusXRColocationSubsystem()
{
	if (!Z_Registration_Info_UClass_UOculusXRColocationSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRColocationSubsystem.OuterSingleton, Z_Construct_UClass_UOculusXRColocationSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRColocationSubsystem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRColocationSubsystem);
UOculusXRColocationSubsystem::~UOculusXRColocationSubsystem() {}
// ********** End Class UOculusXRColocationSubsystem ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Target_MR_Claude_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationSubsystem_h__Script_OculusXRColocation_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRColocationSubsystem, UOculusXRColocationSubsystem::StaticClass, TEXT("UOculusXRColocationSubsystem"), &Z_Registration_Info_UClass_UOculusXRColocationSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRColocationSubsystem), 3168869661U) },
	};
}; // Z_CompiledInDeferFile_FID_Target_MR_Claude_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationSubsystem_h__Script_OculusXRColocation_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Target_MR_Claude_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationSubsystem_h__Script_OculusXRColocation_1396049471{
	TEXT("/Script/OculusXRColocation"),
	Z_CompiledInDeferFile_FID_Target_MR_Claude_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationSubsystem_h__Script_OculusXRColocation_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Target_MR_Claude_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationSubsystem_h__Script_OculusXRColocation_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
