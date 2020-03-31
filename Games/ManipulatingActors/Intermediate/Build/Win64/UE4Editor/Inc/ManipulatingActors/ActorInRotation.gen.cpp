// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ManipulatingActors/ActorInRotation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorInRotation() {}
// Cross Module References
	MANIPULATINGACTORS_API UClass* Z_Construct_UClass_AActorInRotation_NoRegister();
	MANIPULATINGACTORS_API UClass* Z_Construct_UClass_AActorInRotation();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ManipulatingActors();
// End Cross Module References
	void AActorInRotation::StaticRegisterNativesAActorInRotation()
	{
	}
	UClass* Z_Construct_UClass_AActorInRotation_NoRegister()
	{
		return AActorInRotation::StaticClass();
	}
	struct Z_Construct_UClass_AActorInRotation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AActorInRotation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ManipulatingActors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorInRotation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ActorInRotation.h" },
		{ "ModuleRelativePath", "ActorInRotation.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorInRotation_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Rotation Speed" },
		{ "ModuleRelativePath", "ActorInRotation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AActorInRotation_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActorInRotation, Speed), METADATA_PARAMS(Z_Construct_UClass_AActorInRotation_Statics::NewProp_Speed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AActorInRotation_Statics::NewProp_Speed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AActorInRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorInRotation_Statics::NewProp_Speed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AActorInRotation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActorInRotation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AActorInRotation_Statics::ClassParams = {
		&AActorInRotation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AActorInRotation_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AActorInRotation_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AActorInRotation_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AActorInRotation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AActorInRotation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AActorInRotation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AActorInRotation, 734010177);
	template<> MANIPULATINGACTORS_API UClass* StaticClass<AActorInRotation>()
	{
		return AActorInRotation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AActorInRotation(Z_Construct_UClass_AActorInRotation, &AActorInRotation::StaticClass, TEXT("/Script/ManipulatingActors"), TEXT("AActorInRotation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AActorInRotation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
