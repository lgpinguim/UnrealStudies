// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ManipulatingActors/ManipulatingActorsGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManipulatingActorsGameModeBase() {}
// Cross Module References
	MANIPULATINGACTORS_API UClass* Z_Construct_UClass_AManipulatingActorsGameModeBase_NoRegister();
	MANIPULATINGACTORS_API UClass* Z_Construct_UClass_AManipulatingActorsGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ManipulatingActors();
// End Cross Module References
	void AManipulatingActorsGameModeBase::StaticRegisterNativesAManipulatingActorsGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AManipulatingActorsGameModeBase_NoRegister()
	{
		return AManipulatingActorsGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AManipulatingActorsGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AManipulatingActorsGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ManipulatingActors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManipulatingActorsGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ManipulatingActorsGameModeBase.h" },
		{ "ModuleRelativePath", "ManipulatingActorsGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AManipulatingActorsGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AManipulatingActorsGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AManipulatingActorsGameModeBase_Statics::ClassParams = {
		&AManipulatingActorsGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AManipulatingActorsGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AManipulatingActorsGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AManipulatingActorsGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AManipulatingActorsGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AManipulatingActorsGameModeBase, 686314928);
	template<> MANIPULATINGACTORS_API UClass* StaticClass<AManipulatingActorsGameModeBase>()
	{
		return AManipulatingActorsGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AManipulatingActorsGameModeBase(Z_Construct_UClass_AManipulatingActorsGameModeBase, &AManipulatingActorsGameModeBase::StaticClass, TEXT("/Script/ManipulatingActors"), TEXT("AManipulatingActorsGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AManipulatingActorsGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
