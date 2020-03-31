// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExBlueprintPure/MyActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActor() {}
// Cross Module References
	EXBLUEPRINTPURE_API UClass* Z_Construct_UClass_AMyActor_NoRegister();
	EXBLUEPRINTPURE_API UClass* Z_Construct_UClass_AMyActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ExBlueprintPure();
	EXBLUEPRINTPURE_API UFunction* Z_Construct_UFunction_AMyActor_MeuMetodoPuro();
// End Cross Module References
	void AMyActor::StaticRegisterNativesAMyActor()
	{
		UClass* Class = AMyActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MeuMetodoPuro", &AMyActor::execMeuMetodoPuro },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyActor_MeuMetodoPuro_Statics
	{
		struct MyActor_eventMeuMetodoPuro_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMyActor_MeuMetodoPuro_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MyActor_eventMeuMetodoPuro_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMyActor_MeuMetodoPuro_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MyActor_eventMeuMetodoPuro_Parms), &Z_Construct_UFunction_AMyActor_MeuMetodoPuro_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyActor_MeuMetodoPuro_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_MeuMetodoPuro_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActor_MeuMetodoPuro_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pure" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyActor_MeuMetodoPuro_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyActor, nullptr, "MeuMetodoPuro", sizeof(MyActor_eventMeuMetodoPuro_Parms), Z_Construct_UFunction_AMyActor_MeuMetodoPuro_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyActor_MeuMetodoPuro_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyActor_MeuMetodoPuro_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyActor_MeuMetodoPuro_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyActor_MeuMetodoPuro()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyActor_MeuMetodoPuro_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyActor_NoRegister()
	{
		return AMyActor::StaticClass();
	}
	struct Z_Construct_UClass_AMyActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMeuBool_MetaData[];
#endif
		static void NewProp_bMeuBool_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMeuBool;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ExBlueprintPure,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyActor_MeuMetodoPuro, "MeuMetodoPuro" }, // 962026538
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyActor.h" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_Statics::NewProp_bMeuBool_MetaData[] = {
		{ "Category", "Pure" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	void Z_Construct_UClass_AMyActor_Statics::NewProp_bMeuBool_SetBit(void* Obj)
	{
		((AMyActor*)Obj)->bMeuBool = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_bMeuBool = { "bMeuBool", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyActor), &Z_Construct_UClass_AMyActor_Statics::NewProp_bMeuBool_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyActor_Statics::NewProp_bMeuBool_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::NewProp_bMeuBool_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_bMeuBool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyActor_Statics::ClassParams = {
		&AMyActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMyActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyActor, 16670852);
	template<> EXBLUEPRINTPURE_API UClass* StaticClass<AMyActor>()
	{
		return AMyActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyActor(Z_Construct_UClass_AMyActor, &AMyActor::StaticClass, TEXT("/Script/ExBlueprintPure"), TEXT("AMyActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
