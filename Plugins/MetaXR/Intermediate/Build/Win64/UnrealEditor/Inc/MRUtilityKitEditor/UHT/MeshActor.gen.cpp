// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMeshActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
MRUTILITYKITEDITOR_API UClass* Z_Construct_UClass_AMeshActor();
MRUTILITYKITEDITOR_API UClass* Z_Construct_UClass_AMeshActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_MRUtilityKitEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMeshActor ***************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AMeshActor;
UClass* AMeshActor::GetPrivateStaticClass()
{
	using TClass = AMeshActor;
	if (!Z_Registration_Info_UClass_AMeshActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MeshActor"),
			Z_Registration_Info_UClass_AMeshActor.InnerSingleton,
			StaticRegisterNativesAMeshActor,
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
	return Z_Registration_Info_UClass_AMeshActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AMeshActor_NoRegister()
{
	return AMeshActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMeshActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MeshActor.h" },
		{ "ModuleRelativePath", "Private/MeshActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AMeshActor constinit property declarations *******************************
// ********** End Class AMeshActor constinit property declarations *********************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMeshActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AMeshActor_Statics
UObject* (*const Z_Construct_UClass_AMeshActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MRUtilityKitEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMeshActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMeshActor_Statics::ClassParams = {
	&AMeshActor::StaticClass,
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
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMeshActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMeshActor_Statics::Class_MetaDataParams)
};
void AMeshActor::StaticRegisterNativesAMeshActor()
{
}
UClass* Z_Construct_UClass_AMeshActor()
{
	if (!Z_Registration_Info_UClass_AMeshActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMeshActor.OuterSingleton, Z_Construct_UClass_AMeshActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMeshActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AMeshActor);
AMeshActor::~AMeshActor() {}
// ********** End Class AMeshActor *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Target_MR_Claude_Plugins_MetaXR_Source_MRUtilityKitEditor_Private_MeshActor_h__Script_MRUtilityKitEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMeshActor, AMeshActor::StaticClass, TEXT("AMeshActor"), &Z_Registration_Info_UClass_AMeshActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMeshActor), 1141039280U) },
	};
}; // Z_CompiledInDeferFile_FID_Target_MR_Claude_Plugins_MetaXR_Source_MRUtilityKitEditor_Private_MeshActor_h__Script_MRUtilityKitEditor_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Target_MR_Claude_Plugins_MetaXR_Source_MRUtilityKitEditor_Private_MeshActor_h__Script_MRUtilityKitEditor_1660842305{
	TEXT("/Script/MRUtilityKitEditor"),
	Z_CompiledInDeferFile_FID_Target_MR_Claude_Plugins_MetaXR_Source_MRUtilityKitEditor_Private_MeshActor_h__Script_MRUtilityKitEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Target_MR_Claude_Plugins_MetaXR_Source_MRUtilityKitEditor_Private_MeshActor_h__Script_MRUtilityKitEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
