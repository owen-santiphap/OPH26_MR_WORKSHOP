// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRMovementAssetsFactories.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeOculusXRMovementAssetsFactories() {}

// ********** Begin Cross Module References ********************************************************
OCULUSXREDITOR_API UClass* Z_Construct_UClass_UOculusXRFaceVisemesRetargetAssetFactory();
OCULUSXREDITOR_API UClass* Z_Construct_UClass_UOculusXRFaceVisemesRetargetAssetFactory_NoRegister();
OCULUSXREDITOR_API UClass* Z_Construct_UClass_UOculusXRMetahumanBodyRetargetAssetFactory();
OCULUSXREDITOR_API UClass* Z_Construct_UClass_UOculusXRMetahumanBodyRetargetAssetFactory_NoRegister();
OCULUSXREDITOR_API UClass* Z_Construct_UClass_UOculusXRMetahumanFaceRetargetAssetFactory();
OCULUSXREDITOR_API UClass* Z_Construct_UClass_UOculusXRMetahumanFaceRetargetAssetFactory_NoRegister();
OCULUSXREDITOR_API UClass* Z_Construct_UClass_UOculusXRMetahumanRetargetAssetFactory();
OCULUSXREDITOR_API UClass* Z_Construct_UClass_UOculusXRMetahumanRetargetAssetFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UBlueprintFactory();
UPackage* Z_Construct_UPackage__Script_OculusXREditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOculusXRMetahumanRetargetAssetFactory ***********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRMetahumanRetargetAssetFactory;
UClass* UOculusXRMetahumanRetargetAssetFactory::GetPrivateStaticClass()
{
	using TClass = UOculusXRMetahumanRetargetAssetFactory;
	if (!Z_Registration_Info_UClass_UOculusXRMetahumanRetargetAssetFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OculusXRMetahumanRetargetAssetFactory"),
			Z_Registration_Info_UClass_UOculusXRMetahumanRetargetAssetFactory.InnerSingleton,
			StaticRegisterNativesUOculusXRMetahumanRetargetAssetFactory,
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
	return Z_Registration_Info_UClass_UOculusXRMetahumanRetargetAssetFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UOculusXRMetahumanRetargetAssetFactory_NoRegister()
{
	return UOculusXRMetahumanRetargetAssetFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOculusXRMetahumanRetargetAssetFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "OculusXRMovementAssetsFactories.h" },
		{ "ModuleRelativePath", "Private/OculusXRMovementAssetsFactories.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRMetahumanRetargetAssetFactory constinit property declarations ***
// ********** End Class UOculusXRMetahumanRetargetAssetFactory constinit property declarations *****
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRMetahumanRetargetAssetFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UOculusXRMetahumanRetargetAssetFactory_Statics
UObject* (*const Z_Construct_UClass_UOculusXRMetahumanRetargetAssetFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXREditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRMetahumanRetargetAssetFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRMetahumanRetargetAssetFactory_Statics::ClassParams = {
	&UOculusXRMetahumanRetargetAssetFactory::StaticClass,
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
	0x000820A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRMetahumanRetargetAssetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRMetahumanRetargetAssetFactory_Statics::Class_MetaDataParams)
};
void UOculusXRMetahumanRetargetAssetFactory::StaticRegisterNativesUOculusXRMetahumanRetargetAssetFactory()
{
}
UClass* Z_Construct_UClass_UOculusXRMetahumanRetargetAssetFactory()
{
	if (!Z_Registration_Info_UClass_UOculusXRMetahumanRetargetAssetFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRMetahumanRetargetAssetFactory.OuterSingleton, Z_Construct_UClass_UOculusXRMetahumanRetargetAssetFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRMetahumanRetargetAssetFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRMetahumanRetargetAssetFactory);
UOculusXRMetahumanRetargetAssetFactory::~UOculusXRMetahumanRetargetAssetFactory() {}
// ********** End Class UOculusXRMetahumanRetargetAssetFactory *************************************

// ********** Begin Class UOculusXRMetahumanFaceRetargetAssetFactory *******************************
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRMetahumanFaceRetargetAssetFactory;
UClass* UOculusXRMetahumanFaceRetargetAssetFactory::GetPrivateStaticClass()
{
	using TClass = UOculusXRMetahumanFaceRetargetAssetFactory;
	if (!Z_Registration_Info_UClass_UOculusXRMetahumanFaceRetargetAssetFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OculusXRMetahumanFaceRetargetAssetFactory"),
			Z_Registration_Info_UClass_UOculusXRMetahumanFaceRetargetAssetFactory.InnerSingleton,
			StaticRegisterNativesUOculusXRMetahumanFaceRetargetAssetFactory,
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
	return Z_Registration_Info_UClass_UOculusXRMetahumanFaceRetargetAssetFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UOculusXRMetahumanFaceRetargetAssetFactory_NoRegister()
{
	return UOculusXRMetahumanFaceRetargetAssetFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOculusXRMetahumanFaceRetargetAssetFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "OculusXRMovementAssetsFactories.h" },
		{ "ModuleRelativePath", "Private/OculusXRMovementAssetsFactories.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRMetahumanFaceRetargetAssetFactory constinit property declarations 
// ********** End Class UOculusXRMetahumanFaceRetargetAssetFactory constinit property declarations *
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRMetahumanFaceRetargetAssetFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UOculusXRMetahumanFaceRetargetAssetFactory_Statics
UObject* (*const Z_Construct_UClass_UOculusXRMetahumanFaceRetargetAssetFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOculusXRMetahumanRetargetAssetFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXREditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRMetahumanFaceRetargetAssetFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRMetahumanFaceRetargetAssetFactory_Statics::ClassParams = {
	&UOculusXRMetahumanFaceRetargetAssetFactory::StaticClass,
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
	0x000820A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRMetahumanFaceRetargetAssetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRMetahumanFaceRetargetAssetFactory_Statics::Class_MetaDataParams)
};
void UOculusXRMetahumanFaceRetargetAssetFactory::StaticRegisterNativesUOculusXRMetahumanFaceRetargetAssetFactory()
{
}
UClass* Z_Construct_UClass_UOculusXRMetahumanFaceRetargetAssetFactory()
{
	if (!Z_Registration_Info_UClass_UOculusXRMetahumanFaceRetargetAssetFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRMetahumanFaceRetargetAssetFactory.OuterSingleton, Z_Construct_UClass_UOculusXRMetahumanFaceRetargetAssetFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRMetahumanFaceRetargetAssetFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRMetahumanFaceRetargetAssetFactory);
UOculusXRMetahumanFaceRetargetAssetFactory::~UOculusXRMetahumanFaceRetargetAssetFactory() {}
// ********** End Class UOculusXRMetahumanFaceRetargetAssetFactory *********************************

// ********** Begin Class UOculusXRFaceVisemesRetargetAssetFactory *********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRFaceVisemesRetargetAssetFactory;
UClass* UOculusXRFaceVisemesRetargetAssetFactory::GetPrivateStaticClass()
{
	using TClass = UOculusXRFaceVisemesRetargetAssetFactory;
	if (!Z_Registration_Info_UClass_UOculusXRFaceVisemesRetargetAssetFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OculusXRFaceVisemesRetargetAssetFactory"),
			Z_Registration_Info_UClass_UOculusXRFaceVisemesRetargetAssetFactory.InnerSingleton,
			StaticRegisterNativesUOculusXRFaceVisemesRetargetAssetFactory,
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
	return Z_Registration_Info_UClass_UOculusXRFaceVisemesRetargetAssetFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UOculusXRFaceVisemesRetargetAssetFactory_NoRegister()
{
	return UOculusXRFaceVisemesRetargetAssetFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOculusXRFaceVisemesRetargetAssetFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "OculusXRMovementAssetsFactories.h" },
		{ "ModuleRelativePath", "Private/OculusXRMovementAssetsFactories.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRFaceVisemesRetargetAssetFactory constinit property declarations *
// ********** End Class UOculusXRFaceVisemesRetargetAssetFactory constinit property declarations ***
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRFaceVisemesRetargetAssetFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UOculusXRFaceVisemesRetargetAssetFactory_Statics
UObject* (*const Z_Construct_UClass_UOculusXRFaceVisemesRetargetAssetFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOculusXRMetahumanRetargetAssetFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXREditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRFaceVisemesRetargetAssetFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRFaceVisemesRetargetAssetFactory_Statics::ClassParams = {
	&UOculusXRFaceVisemesRetargetAssetFactory::StaticClass,
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
	0x000820A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRFaceVisemesRetargetAssetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRFaceVisemesRetargetAssetFactory_Statics::Class_MetaDataParams)
};
void UOculusXRFaceVisemesRetargetAssetFactory::StaticRegisterNativesUOculusXRFaceVisemesRetargetAssetFactory()
{
}
UClass* Z_Construct_UClass_UOculusXRFaceVisemesRetargetAssetFactory()
{
	if (!Z_Registration_Info_UClass_UOculusXRFaceVisemesRetargetAssetFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRFaceVisemesRetargetAssetFactory.OuterSingleton, Z_Construct_UClass_UOculusXRFaceVisemesRetargetAssetFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRFaceVisemesRetargetAssetFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRFaceVisemesRetargetAssetFactory);
UOculusXRFaceVisemesRetargetAssetFactory::~UOculusXRFaceVisemesRetargetAssetFactory() {}
// ********** End Class UOculusXRFaceVisemesRetargetAssetFactory ***********************************

// ********** Begin Class UOculusXRMetahumanBodyRetargetAssetFactory *******************************
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRMetahumanBodyRetargetAssetFactory;
UClass* UOculusXRMetahumanBodyRetargetAssetFactory::GetPrivateStaticClass()
{
	using TClass = UOculusXRMetahumanBodyRetargetAssetFactory;
	if (!Z_Registration_Info_UClass_UOculusXRMetahumanBodyRetargetAssetFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OculusXRMetahumanBodyRetargetAssetFactory"),
			Z_Registration_Info_UClass_UOculusXRMetahumanBodyRetargetAssetFactory.InnerSingleton,
			StaticRegisterNativesUOculusXRMetahumanBodyRetargetAssetFactory,
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
	return Z_Registration_Info_UClass_UOculusXRMetahumanBodyRetargetAssetFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UOculusXRMetahumanBodyRetargetAssetFactory_NoRegister()
{
	return UOculusXRMetahumanBodyRetargetAssetFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOculusXRMetahumanBodyRetargetAssetFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "OculusXRMovementAssetsFactories.h" },
		{ "ModuleRelativePath", "Private/OculusXRMovementAssetsFactories.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRMetahumanBodyRetargetAssetFactory constinit property declarations 
// ********** End Class UOculusXRMetahumanBodyRetargetAssetFactory constinit property declarations *
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRMetahumanBodyRetargetAssetFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UOculusXRMetahumanBodyRetargetAssetFactory_Statics
UObject* (*const Z_Construct_UClass_UOculusXRMetahumanBodyRetargetAssetFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOculusXRMetahumanRetargetAssetFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXREditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRMetahumanBodyRetargetAssetFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRMetahumanBodyRetargetAssetFactory_Statics::ClassParams = {
	&UOculusXRMetahumanBodyRetargetAssetFactory::StaticClass,
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
	0x000820A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRMetahumanBodyRetargetAssetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRMetahumanBodyRetargetAssetFactory_Statics::Class_MetaDataParams)
};
void UOculusXRMetahumanBodyRetargetAssetFactory::StaticRegisterNativesUOculusXRMetahumanBodyRetargetAssetFactory()
{
}
UClass* Z_Construct_UClass_UOculusXRMetahumanBodyRetargetAssetFactory()
{
	if (!Z_Registration_Info_UClass_UOculusXRMetahumanBodyRetargetAssetFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRMetahumanBodyRetargetAssetFactory.OuterSingleton, Z_Construct_UClass_UOculusXRMetahumanBodyRetargetAssetFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRMetahumanBodyRetargetAssetFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRMetahumanBodyRetargetAssetFactory);
UOculusXRMetahumanBodyRetargetAssetFactory::~UOculusXRMetahumanBodyRetargetAssetFactory() {}
// ********** End Class UOculusXRMetahumanBodyRetargetAssetFactory *********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Target_MR_Claude_Plugins_MetaXR_Source_OculusXREditor_Private_OculusXRMovementAssetsFactories_h__Script_OculusXREditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRMetahumanRetargetAssetFactory, UOculusXRMetahumanRetargetAssetFactory::StaticClass, TEXT("UOculusXRMetahumanRetargetAssetFactory"), &Z_Registration_Info_UClass_UOculusXRMetahumanRetargetAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRMetahumanRetargetAssetFactory), 241219900U) },
		{ Z_Construct_UClass_UOculusXRMetahumanFaceRetargetAssetFactory, UOculusXRMetahumanFaceRetargetAssetFactory::StaticClass, TEXT("UOculusXRMetahumanFaceRetargetAssetFactory"), &Z_Registration_Info_UClass_UOculusXRMetahumanFaceRetargetAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRMetahumanFaceRetargetAssetFactory), 1029395898U) },
		{ Z_Construct_UClass_UOculusXRFaceVisemesRetargetAssetFactory, UOculusXRFaceVisemesRetargetAssetFactory::StaticClass, TEXT("UOculusXRFaceVisemesRetargetAssetFactory"), &Z_Registration_Info_UClass_UOculusXRFaceVisemesRetargetAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRFaceVisemesRetargetAssetFactory), 2800807641U) },
		{ Z_Construct_UClass_UOculusXRMetahumanBodyRetargetAssetFactory, UOculusXRMetahumanBodyRetargetAssetFactory::StaticClass, TEXT("UOculusXRMetahumanBodyRetargetAssetFactory"), &Z_Registration_Info_UClass_UOculusXRMetahumanBodyRetargetAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRMetahumanBodyRetargetAssetFactory), 1075594333U) },
	};
}; // Z_CompiledInDeferFile_FID_Target_MR_Claude_Plugins_MetaXR_Source_OculusXREditor_Private_OculusXRMovementAssetsFactories_h__Script_OculusXREditor_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Target_MR_Claude_Plugins_MetaXR_Source_OculusXREditor_Private_OculusXRMovementAssetsFactories_h__Script_OculusXREditor_2250529006{
	TEXT("/Script/OculusXREditor"),
	Z_CompiledInDeferFile_FID_Target_MR_Claude_Plugins_MetaXR_Source_OculusXREditor_Private_OculusXRMovementAssetsFactories_h__Script_OculusXREditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Target_MR_Claude_Plugins_MetaXR_Source_OculusXREditor_Private_OculusXRMovementAssetsFactories_h__Script_OculusXREditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
