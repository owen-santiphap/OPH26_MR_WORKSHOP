// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRAnchorComponents.h"
#include "OculusXRAnchorTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeOculusXRAnchorComponents() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRBaseAnchorComponent();
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRBaseAnchorComponent_NoRegister();
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRLocatableAnchorComponent();
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRLocatableAnchorComponent_NoRegister();
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRSharableAnchorComponent();
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRSharableAnchorComponent_NoRegister();
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent();
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent_NoRegister();
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRStorableAnchorComponent();
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRStorableAnchorComponent_NoRegister();
OCULUSXRANCHORS_API UEnum* Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceComponentType();
OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRUUID();
UPackage* Z_Construct_UPackage__Script_OculusXRAnchors();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOculusXRBaseAnchorComponent Function GetType ****************************
struct Z_Construct_UFunction_UOculusXRBaseAnchorComponent_GetType_Statics
{
	struct OculusXRBaseAnchorComponent_eventGetType_Parms
	{
		EOculusXRSpaceComponentType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorComponents.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetType constinit property declarations *******************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetType constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetType Property Definitions ******************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusXRBaseAnchorComponent_GetType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusXRBaseAnchorComponent_GetType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRBaseAnchorComponent_eventGetType_Parms, ReturnValue), Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceComponentType, METADATA_PARAMS(0, nullptr) }; // 428507294
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRBaseAnchorComponent_GetType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRBaseAnchorComponent_GetType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRBaseAnchorComponent_GetType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRBaseAnchorComponent_GetType_Statics::PropPointers) < 2048);
// ********** End Function GetType Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRBaseAnchorComponent_GetType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOculusXRBaseAnchorComponent, nullptr, "GetType", 	Z_Construct_UFunction_UOculusXRBaseAnchorComponent_GetType_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRBaseAnchorComponent_GetType_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOculusXRBaseAnchorComponent_GetType_Statics::OculusXRBaseAnchorComponent_eventGetType_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRBaseAnchorComponent_GetType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRBaseAnchorComponent_GetType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOculusXRBaseAnchorComponent_GetType_Statics::OculusXRBaseAnchorComponent_eventGetType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRBaseAnchorComponent_GetType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRBaseAnchorComponent_GetType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOculusXRBaseAnchorComponent::execGetType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EOculusXRSpaceComponentType*)Z_Param__Result=P_THIS->GetType();
	P_NATIVE_END;
}
// ********** End Class UOculusXRBaseAnchorComponent Function GetType ******************************

// ********** Begin Class UOculusXRBaseAnchorComponent Function IsComponentEnabled *****************
struct Z_Construct_UFunction_UOculusXRBaseAnchorComponent_IsComponentEnabled_Statics
{
	struct OculusXRBaseAnchorComponent_eventIsComponentEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorComponents.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsComponentEnabled constinit property declarations ********************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsComponentEnabled constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsComponentEnabled Property Definitions *******************************
void Z_Construct_UFunction_UOculusXRBaseAnchorComponent_IsComponentEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OculusXRBaseAnchorComponent_eventIsComponentEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRBaseAnchorComponent_IsComponentEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRBaseAnchorComponent_eventIsComponentEnabled_Parms), &Z_Construct_UFunction_UOculusXRBaseAnchorComponent_IsComponentEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRBaseAnchorComponent_IsComponentEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRBaseAnchorComponent_IsComponentEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRBaseAnchorComponent_IsComponentEnabled_Statics::PropPointers) < 2048);
// ********** End Function IsComponentEnabled Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRBaseAnchorComponent_IsComponentEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOculusXRBaseAnchorComponent, nullptr, "IsComponentEnabled", 	Z_Construct_UFunction_UOculusXRBaseAnchorComponent_IsComponentEnabled_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRBaseAnchorComponent_IsComponentEnabled_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOculusXRBaseAnchorComponent_IsComponentEnabled_Statics::OculusXRBaseAnchorComponent_eventIsComponentEnabled_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRBaseAnchorComponent_IsComponentEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRBaseAnchorComponent_IsComponentEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOculusXRBaseAnchorComponent_IsComponentEnabled_Statics::OculusXRBaseAnchorComponent_eventIsComponentEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRBaseAnchorComponent_IsComponentEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRBaseAnchorComponent_IsComponentEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOculusXRBaseAnchorComponent::execIsComponentEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsComponentEnabled();
	P_NATIVE_END;
}
// ********** End Class UOculusXRBaseAnchorComponent Function IsComponentEnabled *******************

// ********** Begin Class UOculusXRBaseAnchorComponent *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRBaseAnchorComponent;
UClass* UOculusXRBaseAnchorComponent::GetPrivateStaticClass()
{
	using TClass = UOculusXRBaseAnchorComponent;
	if (!Z_Registration_Info_UClass_UOculusXRBaseAnchorComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OculusXRBaseAnchorComponent"),
			Z_Registration_Info_UClass_UOculusXRBaseAnchorComponent.InnerSingleton,
			StaticRegisterNativesUOculusXRBaseAnchorComponent,
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
	return Z_Registration_Info_UClass_UOculusXRBaseAnchorComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UOculusXRBaseAnchorComponent_NoRegister()
{
	return UOculusXRBaseAnchorComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOculusXRBaseAnchorComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OculusXRAnchorComponents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorComponents.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRBaseAnchorComponent constinit property declarations *************
// ********** End Class UOculusXRBaseAnchorComponent constinit property declarations ***************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetType"), .Pointer = &UOculusXRBaseAnchorComponent::execGetType },
		{ .NameUTF8 = UTF8TEXT("IsComponentEnabled"), .Pointer = &UOculusXRBaseAnchorComponent::execIsComponentEnabled },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRBaseAnchorComponent_GetType, "GetType" }, // 3760342110
		{ &Z_Construct_UFunction_UOculusXRBaseAnchorComponent_IsComponentEnabled, "IsComponentEnabled" }, // 3480355099
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRBaseAnchorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UOculusXRBaseAnchorComponent_Statics
UObject* (*const Z_Construct_UClass_UOculusXRBaseAnchorComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXRAnchors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRBaseAnchorComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRBaseAnchorComponent_Statics::ClassParams = {
	&UOculusXRBaseAnchorComponent::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRBaseAnchorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRBaseAnchorComponent_Statics::Class_MetaDataParams)
};
void UOculusXRBaseAnchorComponent::StaticRegisterNativesUOculusXRBaseAnchorComponent()
{
	UClass* Class = UOculusXRBaseAnchorComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UOculusXRBaseAnchorComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UOculusXRBaseAnchorComponent()
{
	if (!Z_Registration_Info_UClass_UOculusXRBaseAnchorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRBaseAnchorComponent.OuterSingleton, Z_Construct_UClass_UOculusXRBaseAnchorComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRBaseAnchorComponent.OuterSingleton;
}
UOculusXRBaseAnchorComponent::UOculusXRBaseAnchorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRBaseAnchorComponent);
UOculusXRBaseAnchorComponent::~UOculusXRBaseAnchorComponent() {}
// ********** End Class UOculusXRBaseAnchorComponent ***********************************************

// ********** Begin Class UOculusXRLocatableAnchorComponent Function GetTransform ******************
struct Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform_Statics
{
	struct OculusXRLocatableAnchorComponent_eventGetTransform_Parms
	{
		FTransform outTransform;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorComponents.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetTransform constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_outTransform;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTransform constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTransform Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform_Statics::NewProp_outTransform = { "outTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRLocatableAnchorComponent_eventGetTransform_Parms, outTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OculusXRLocatableAnchorComponent_eventGetTransform_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRLocatableAnchorComponent_eventGetTransform_Parms), &Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform_Statics::NewProp_outTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform_Statics::PropPointers) < 2048);
// ********** End Function GetTransform Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOculusXRLocatableAnchorComponent, nullptr, "GetTransform", 	Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform_Statics::OculusXRLocatableAnchorComponent_eventGetTransform_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform_Statics::OculusXRLocatableAnchorComponent_eventGetTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOculusXRLocatableAnchorComponent::execGetTransform)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_outTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetTransform(Z_Param_Out_outTransform);
	P_NATIVE_END;
}
// ********** End Class UOculusXRLocatableAnchorComponent Function GetTransform ********************

// ********** Begin Class UOculusXRLocatableAnchorComponent ****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRLocatableAnchorComponent;
UClass* UOculusXRLocatableAnchorComponent::GetPrivateStaticClass()
{
	using TClass = UOculusXRLocatableAnchorComponent;
	if (!Z_Registration_Info_UClass_UOculusXRLocatableAnchorComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OculusXRLocatableAnchorComponent"),
			Z_Registration_Info_UClass_UOculusXRLocatableAnchorComponent.InnerSingleton,
			StaticRegisterNativesUOculusXRLocatableAnchorComponent,
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
	return Z_Registration_Info_UClass_UOculusXRLocatableAnchorComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UOculusXRLocatableAnchorComponent_NoRegister()
{
	return UOculusXRLocatableAnchorComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOculusXRLocatableAnchorComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OculusXRAnchorComponents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorComponents.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRLocatableAnchorComponent constinit property declarations ********
// ********** End Class UOculusXRLocatableAnchorComponent constinit property declarations **********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetTransform"), .Pointer = &UOculusXRLocatableAnchorComponent::execGetTransform },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform, "GetTransform" }, // 1627966355
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRLocatableAnchorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UOculusXRLocatableAnchorComponent_Statics
UObject* (*const Z_Construct_UClass_UOculusXRLocatableAnchorComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOculusXRBaseAnchorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXRAnchors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRLocatableAnchorComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRLocatableAnchorComponent_Statics::ClassParams = {
	&UOculusXRLocatableAnchorComponent::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRLocatableAnchorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRLocatableAnchorComponent_Statics::Class_MetaDataParams)
};
void UOculusXRLocatableAnchorComponent::StaticRegisterNativesUOculusXRLocatableAnchorComponent()
{
	UClass* Class = UOculusXRLocatableAnchorComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UOculusXRLocatableAnchorComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UOculusXRLocatableAnchorComponent()
{
	if (!Z_Registration_Info_UClass_UOculusXRLocatableAnchorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRLocatableAnchorComponent.OuterSingleton, Z_Construct_UClass_UOculusXRLocatableAnchorComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRLocatableAnchorComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRLocatableAnchorComponent);
UOculusXRLocatableAnchorComponent::~UOculusXRLocatableAnchorComponent() {}
// ********** End Class UOculusXRLocatableAnchorComponent ******************************************

// ********** Begin Class UOculusXRSpaceContainerAnchorComponent Function GetUUIDs *****************
struct Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics
{
	struct OculusXRSpaceContainerAnchorComponent_eventGetUUIDs_Parms
	{
		TArray<FOculusXRUUID> outUUIDs;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorComponents.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetUUIDs constinit property declarations ******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_outUUIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_outUUIDs;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetUUIDs constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetUUIDs Property Definitions *****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::NewProp_outUUIDs_Inner = { "outUUIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(0, nullptr) }; // 520639859
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::NewProp_outUUIDs = { "outUUIDs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRSpaceContainerAnchorComponent_eventGetUUIDs_Parms, outUUIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 520639859
void Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OculusXRSpaceContainerAnchorComponent_eventGetUUIDs_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRSpaceContainerAnchorComponent_eventGetUUIDs_Parms), &Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::NewProp_outUUIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::NewProp_outUUIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::PropPointers) < 2048);
// ********** End Function GetUUIDs Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent, nullptr, "GetUUIDs", 	Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::OculusXRSpaceContainerAnchorComponent_eventGetUUIDs_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::OculusXRSpaceContainerAnchorComponent_eventGetUUIDs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOculusXRSpaceContainerAnchorComponent::execGetUUIDs)
{
	P_GET_TARRAY_REF(FOculusXRUUID,Z_Param_Out_outUUIDs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetUUIDs(Z_Param_Out_outUUIDs);
	P_NATIVE_END;
}
// ********** End Class UOculusXRSpaceContainerAnchorComponent Function GetUUIDs *******************

// ********** Begin Class UOculusXRSpaceContainerAnchorComponent ***********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRSpaceContainerAnchorComponent;
UClass* UOculusXRSpaceContainerAnchorComponent::GetPrivateStaticClass()
{
	using TClass = UOculusXRSpaceContainerAnchorComponent;
	if (!Z_Registration_Info_UClass_UOculusXRSpaceContainerAnchorComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OculusXRSpaceContainerAnchorComponent"),
			Z_Registration_Info_UClass_UOculusXRSpaceContainerAnchorComponent.InnerSingleton,
			StaticRegisterNativesUOculusXRSpaceContainerAnchorComponent,
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
	return Z_Registration_Info_UClass_UOculusXRSpaceContainerAnchorComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent_NoRegister()
{
	return UOculusXRSpaceContainerAnchorComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OculusXRAnchorComponents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorComponents.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRSpaceContainerAnchorComponent constinit property declarations ***
// ********** End Class UOculusXRSpaceContainerAnchorComponent constinit property declarations *****
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetUUIDs"), .Pointer = &UOculusXRSpaceContainerAnchorComponent::execGetUUIDs },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs, "GetUUIDs" }, // 721673559
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRSpaceContainerAnchorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent_Statics
UObject* (*const Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOculusXRBaseAnchorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXRAnchors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent_Statics::ClassParams = {
	&UOculusXRSpaceContainerAnchorComponent::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent_Statics::Class_MetaDataParams)
};
void UOculusXRSpaceContainerAnchorComponent::StaticRegisterNativesUOculusXRSpaceContainerAnchorComponent()
{
	UClass* Class = UOculusXRSpaceContainerAnchorComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent()
{
	if (!Z_Registration_Info_UClass_UOculusXRSpaceContainerAnchorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRSpaceContainerAnchorComponent.OuterSingleton, Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRSpaceContainerAnchorComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRSpaceContainerAnchorComponent);
UOculusXRSpaceContainerAnchorComponent::~UOculusXRSpaceContainerAnchorComponent() {}
// ********** End Class UOculusXRSpaceContainerAnchorComponent *************************************

// ********** Begin Class UOculusXRSharableAnchorComponent *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRSharableAnchorComponent;
UClass* UOculusXRSharableAnchorComponent::GetPrivateStaticClass()
{
	using TClass = UOculusXRSharableAnchorComponent;
	if (!Z_Registration_Info_UClass_UOculusXRSharableAnchorComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OculusXRSharableAnchorComponent"),
			Z_Registration_Info_UClass_UOculusXRSharableAnchorComponent.InnerSingleton,
			StaticRegisterNativesUOculusXRSharableAnchorComponent,
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
	return Z_Registration_Info_UClass_UOculusXRSharableAnchorComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UOculusXRSharableAnchorComponent_NoRegister()
{
	return UOculusXRSharableAnchorComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOculusXRSharableAnchorComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OculusXRAnchorComponents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorComponents.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRSharableAnchorComponent constinit property declarations *********
// ********** End Class UOculusXRSharableAnchorComponent constinit property declarations ***********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRSharableAnchorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UOculusXRSharableAnchorComponent_Statics
UObject* (*const Z_Construct_UClass_UOculusXRSharableAnchorComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOculusXRBaseAnchorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXRAnchors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRSharableAnchorComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRSharableAnchorComponent_Statics::ClassParams = {
	&UOculusXRSharableAnchorComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRSharableAnchorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRSharableAnchorComponent_Statics::Class_MetaDataParams)
};
void UOculusXRSharableAnchorComponent::StaticRegisterNativesUOculusXRSharableAnchorComponent()
{
}
UClass* Z_Construct_UClass_UOculusXRSharableAnchorComponent()
{
	if (!Z_Registration_Info_UClass_UOculusXRSharableAnchorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRSharableAnchorComponent.OuterSingleton, Z_Construct_UClass_UOculusXRSharableAnchorComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRSharableAnchorComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRSharableAnchorComponent);
UOculusXRSharableAnchorComponent::~UOculusXRSharableAnchorComponent() {}
// ********** End Class UOculusXRSharableAnchorComponent *******************************************

// ********** Begin Class UOculusXRStorableAnchorComponent *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRStorableAnchorComponent;
UClass* UOculusXRStorableAnchorComponent::GetPrivateStaticClass()
{
	using TClass = UOculusXRStorableAnchorComponent;
	if (!Z_Registration_Info_UClass_UOculusXRStorableAnchorComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OculusXRStorableAnchorComponent"),
			Z_Registration_Info_UClass_UOculusXRStorableAnchorComponent.InnerSingleton,
			StaticRegisterNativesUOculusXRStorableAnchorComponent,
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
	return Z_Registration_Info_UClass_UOculusXRStorableAnchorComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UOculusXRStorableAnchorComponent_NoRegister()
{
	return UOculusXRStorableAnchorComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOculusXRStorableAnchorComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OculusXRAnchorComponents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorComponents.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOculusXRStorableAnchorComponent constinit property declarations *********
// ********** End Class UOculusXRStorableAnchorComponent constinit property declarations ***********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRStorableAnchorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UOculusXRStorableAnchorComponent_Statics
UObject* (*const Z_Construct_UClass_UOculusXRStorableAnchorComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOculusXRBaseAnchorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXRAnchors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRStorableAnchorComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRStorableAnchorComponent_Statics::ClassParams = {
	&UOculusXRStorableAnchorComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRStorableAnchorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRStorableAnchorComponent_Statics::Class_MetaDataParams)
};
void UOculusXRStorableAnchorComponent::StaticRegisterNativesUOculusXRStorableAnchorComponent()
{
}
UClass* Z_Construct_UClass_UOculusXRStorableAnchorComponent()
{
	if (!Z_Registration_Info_UClass_UOculusXRStorableAnchorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRStorableAnchorComponent.OuterSingleton, Z_Construct_UClass_UOculusXRStorableAnchorComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRStorableAnchorComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOculusXRStorableAnchorComponent);
UOculusXRStorableAnchorComponent::~UOculusXRStorableAnchorComponent() {}
// ********** End Class UOculusXRStorableAnchorComponent *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Target_MR_Claude_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h__Script_OculusXRAnchors_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRBaseAnchorComponent, UOculusXRBaseAnchorComponent::StaticClass, TEXT("UOculusXRBaseAnchorComponent"), &Z_Registration_Info_UClass_UOculusXRBaseAnchorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRBaseAnchorComponent), 606446536U) },
		{ Z_Construct_UClass_UOculusXRLocatableAnchorComponent, UOculusXRLocatableAnchorComponent::StaticClass, TEXT("UOculusXRLocatableAnchorComponent"), &Z_Registration_Info_UClass_UOculusXRLocatableAnchorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRLocatableAnchorComponent), 3026338524U) },
		{ Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent, UOculusXRSpaceContainerAnchorComponent::StaticClass, TEXT("UOculusXRSpaceContainerAnchorComponent"), &Z_Registration_Info_UClass_UOculusXRSpaceContainerAnchorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRSpaceContainerAnchorComponent), 1030474971U) },
		{ Z_Construct_UClass_UOculusXRSharableAnchorComponent, UOculusXRSharableAnchorComponent::StaticClass, TEXT("UOculusXRSharableAnchorComponent"), &Z_Registration_Info_UClass_UOculusXRSharableAnchorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRSharableAnchorComponent), 1596203190U) },
		{ Z_Construct_UClass_UOculusXRStorableAnchorComponent, UOculusXRStorableAnchorComponent::StaticClass, TEXT("UOculusXRStorableAnchorComponent"), &Z_Registration_Info_UClass_UOculusXRStorableAnchorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRStorableAnchorComponent), 2166353033U) },
	};
}; // Z_CompiledInDeferFile_FID_Target_MR_Claude_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h__Script_OculusXRAnchors_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Target_MR_Claude_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h__Script_OculusXRAnchors_213831078{
	TEXT("/Script/OculusXRAnchors"),
	Z_CompiledInDeferFile_FID_Target_MR_Claude_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h__Script_OculusXRAnchors_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Target_MR_Claude_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h__Script_OculusXRAnchors_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
