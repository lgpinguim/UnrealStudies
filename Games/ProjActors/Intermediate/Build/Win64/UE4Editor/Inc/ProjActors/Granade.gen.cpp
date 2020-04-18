// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjActors/Granade.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGranade() {}
// Cross Module References
	PROJACTORS_API UClass* Z_Construct_UClass_AGranade_NoRegister();
	PROJACTORS_API UClass* Z_Construct_UClass_AGranade();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ProjActors();
	PROJACTORS_API UFunction* Z_Construct_UFunction_AGranade_BlowupGranade();
	PROJACTORS_API UFunction* Z_Construct_UFunction_AGranade_RestoreTime();
	PROJACTORS_API UFunction* Z_Construct_UFunction_AGranade_SlowTime();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AGranade::StaticRegisterNativesAGranade()
	{
		UClass* Class = AGranade::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BlowupGranade", &AGranade::execBlowupGranade },
			{ "RestoreTime", &AGranade::execRestoreTime },
			{ "SlowTime", &AGranade::execSlowTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGranade_BlowupGranade_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGranade_BlowupGranade_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Granade.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGranade_BlowupGranade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGranade, nullptr, "BlowupGranade", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGranade_BlowupGranade_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGranade_BlowupGranade_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGranade_BlowupGranade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGranade_BlowupGranade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGranade_RestoreTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGranade_RestoreTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Granade.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGranade_RestoreTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGranade, nullptr, "RestoreTime", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGranade_RestoreTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGranade_RestoreTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGranade_RestoreTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGranade_RestoreTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGranade_SlowTime_Statics
	{
		struct Granade_eventSlowTime_Parms
		{
			float TimeDilatation;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeDilatation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGranade_SlowTime_Statics::NewProp_TimeDilatation = { "TimeDilatation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Granade_eventSlowTime_Parms, TimeDilatation), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGranade_SlowTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGranade_SlowTime_Statics::NewProp_TimeDilatation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGranade_SlowTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Granade.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGranade_SlowTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGranade, nullptr, "SlowTime", sizeof(Granade_eventSlowTime_Parms), Z_Construct_UFunction_AGranade_SlowTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGranade_SlowTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGranade_SlowTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGranade_SlowTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGranade_SlowTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGranade_SlowTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGranade_NoRegister()
	{
		return AGranade::StaticClass();
	}
	struct Z_Construct_UClass_AGranade_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGranade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjActors,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGranade_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGranade_BlowupGranade, "BlowupGranade" }, // 4199091114
		{ &Z_Construct_UFunction_AGranade_RestoreTime, "RestoreTime" }, // 1774266462
		{ &Z_Construct_UFunction_AGranade_SlowTime, "SlowTime" }, // 2434295055
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGranade_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Granade.h" },
		{ "ModuleRelativePath", "Granade.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGranade_Statics::NewProp_ActorMesh_MetaData[] = {
		{ "Category", "Granade" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Granade.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGranade_Statics::NewProp_ActorMesh = { "ActorMesh", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGranade, ActorMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGranade_Statics::NewProp_ActorMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGranade_Statics::NewProp_ActorMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGranade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGranade_Statics::NewProp_ActorMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGranade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGranade>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGranade_Statics::ClassParams = {
		&AGranade::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGranade_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AGranade_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AGranade_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGranade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGranade()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGranade_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGranade, 2155564036);
	template<> PROJACTORS_API UClass* StaticClass<AGranade>()
	{
		return AGranade::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGranade(Z_Construct_UClass_AGranade, &AGranade::StaticClass, TEXT("/Script/ProjActors"), TEXT("AGranade"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGranade);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
