// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesertStrife/DesertStrifeGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDesertStrifeGameModeBase() {}
// Cross Module References
	DESERTSTRIFE_API UClass* Z_Construct_UClass_ADesertStrifeGameModeBase_NoRegister();
	DESERTSTRIFE_API UClass* Z_Construct_UClass_ADesertStrifeGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DesertStrife();
// End Cross Module References
	void ADesertStrifeGameModeBase::StaticRegisterNativesADesertStrifeGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ADesertStrifeGameModeBase_NoRegister()
	{
		return ADesertStrifeGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ADesertStrifeGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADesertStrifeGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DesertStrife,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADesertStrifeGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DesertStrifeGameModeBase.h" },
		{ "ModuleRelativePath", "DesertStrifeGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADesertStrifeGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADesertStrifeGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADesertStrifeGameModeBase_Statics::ClassParams = {
		&ADesertStrifeGameModeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_ADesertStrifeGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADesertStrifeGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADesertStrifeGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADesertStrifeGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADesertStrifeGameModeBase, 3938861757);
	template<> DESERTSTRIFE_API UClass* StaticClass<ADesertStrifeGameModeBase>()
	{
		return ADesertStrifeGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADesertStrifeGameModeBase(Z_Construct_UClass_ADesertStrifeGameModeBase, &ADesertStrifeGameModeBase::StaticClass, TEXT("/Script/DesertStrife"), TEXT("ADesertStrifeGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADesertStrifeGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
