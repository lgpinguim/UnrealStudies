// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjActors/InsertGranades.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInsertGranades() {}
// Cross Module References
	PROJACTORS_API UClass* Z_Construct_UClass_AInsertGranades_NoRegister();
	PROJACTORS_API UClass* Z_Construct_UClass_AInsertGranades();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ProjActors();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PROJACTORS_API UClass* Z_Construct_UClass_AGranade_NoRegister();
// End Cross Module References
	void AInsertGranades::StaticRegisterNativesAInsertGranades()
	{
	}
	UClass* Z_Construct_UClass_AInsertGranades_NoRegister()
	{
		return AInsertGranades::StaticClass();
	}
	struct Z_Construct_UClass_AInsertGranades_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BpGranade_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BpGranade;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInsertGranades_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjActors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInsertGranades_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InsertGranades.h" },
		{ "ModuleRelativePath", "InsertGranades.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInsertGranades_Statics::NewProp_BpGranade_MetaData[] = {
		{ "Category", "Granade Type" },
		{ "ModuleRelativePath", "InsertGranades.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AInsertGranades_Statics::NewProp_BpGranade = { "BpGranade", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInsertGranades, BpGranade), Z_Construct_UClass_AGranade_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AInsertGranades_Statics::NewProp_BpGranade_MetaData, ARRAY_COUNT(Z_Construct_UClass_AInsertGranades_Statics::NewProp_BpGranade_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInsertGranades_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInsertGranades_Statics::NewProp_BpGranade,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInsertGranades_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInsertGranades>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInsertGranades_Statics::ClassParams = {
		&AInsertGranades::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AInsertGranades_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AInsertGranades_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AInsertGranades_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AInsertGranades_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInsertGranades()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInsertGranades_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInsertGranades, 963010462);
	template<> PROJACTORS_API UClass* StaticClass<AInsertGranades>()
	{
		return AInsertGranades::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInsertGranades(Z_Construct_UClass_AInsertGranades, &AInsertGranades::StaticClass, TEXT("/Script/ProjActors"), TEXT("AInsertGranades"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInsertGranades);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
