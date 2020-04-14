// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJACTORS_MyGameMode_generated_h
#error "MyGameMode.generated.h already included, missing '#pragma once' in MyGameMode.h"
#endif
#define PROJACTORS_MyGameMode_generated_h

#define ProjActors_Source_ProjActors_MyGameMode_h_15_RPC_WRAPPERS
#define ProjActors_Source_ProjActors_MyGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define ProjActors_Source_ProjActors_MyGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyGameMode(); \
	friend struct Z_Construct_UClass_AMyGameMode_Statics; \
public: \
	DECLARE_CLASS(AMyGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ProjActors"), NO_API) \
	DECLARE_SERIALIZER(AMyGameMode)


#define ProjActors_Source_ProjActors_MyGameMode_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMyGameMode(); \
	friend struct Z_Construct_UClass_AMyGameMode_Statics; \
public: \
	DECLARE_CLASS(AMyGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ProjActors"), NO_API) \
	DECLARE_SERIALIZER(AMyGameMode)


#define ProjActors_Source_ProjActors_MyGameMode_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyGameMode(AMyGameMode&&); \
	NO_API AMyGameMode(const AMyGameMode&); \
public:


#define ProjActors_Source_ProjActors_MyGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyGameMode(AMyGameMode&&); \
	NO_API AMyGameMode(const AMyGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyGameMode)


#define ProjActors_Source_ProjActors_MyGameMode_h_15_PRIVATE_PROPERTY_OFFSET
#define ProjActors_Source_ProjActors_MyGameMode_h_12_PROLOG
#define ProjActors_Source_ProjActors_MyGameMode_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjActors_Source_ProjActors_MyGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	ProjActors_Source_ProjActors_MyGameMode_h_15_RPC_WRAPPERS \
	ProjActors_Source_ProjActors_MyGameMode_h_15_INCLASS \
	ProjActors_Source_ProjActors_MyGameMode_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjActors_Source_ProjActors_MyGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjActors_Source_ProjActors_MyGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	ProjActors_Source_ProjActors_MyGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjActors_Source_ProjActors_MyGameMode_h_15_INCLASS_NO_PURE_DECLS \
	ProjActors_Source_ProjActors_MyGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJACTORS_API UClass* StaticClass<class AMyGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjActors_Source_ProjActors_MyGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
