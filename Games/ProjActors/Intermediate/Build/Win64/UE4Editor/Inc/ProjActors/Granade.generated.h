// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJACTORS_Granade_generated_h
#error "Granade.generated.h already included, missing '#pragma once' in Granade.h"
#endif
#define PROJACTORS_Granade_generated_h

#define ProjActors_Source_ProjActors_Granade_h_12_RPC_WRAPPERS
#define ProjActors_Source_ProjActors_Granade_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define ProjActors_Source_ProjActors_Granade_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGranade(); \
	friend struct Z_Construct_UClass_AGranade_Statics; \
public: \
	DECLARE_CLASS(AGranade, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjActors"), NO_API) \
	DECLARE_SERIALIZER(AGranade)


#define ProjActors_Source_ProjActors_Granade_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGranade(); \
	friend struct Z_Construct_UClass_AGranade_Statics; \
public: \
	DECLARE_CLASS(AGranade, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjActors"), NO_API) \
	DECLARE_SERIALIZER(AGranade)


#define ProjActors_Source_ProjActors_Granade_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGranade(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGranade) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGranade); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGranade); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGranade(AGranade&&); \
	NO_API AGranade(const AGranade&); \
public:


#define ProjActors_Source_ProjActors_Granade_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGranade(AGranade&&); \
	NO_API AGranade(const AGranade&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGranade); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGranade); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGranade)


#define ProjActors_Source_ProjActors_Granade_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ActorMesh() { return STRUCT_OFFSET(AGranade, ActorMesh); }


#define ProjActors_Source_ProjActors_Granade_h_9_PROLOG
#define ProjActors_Source_ProjActors_Granade_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjActors_Source_ProjActors_Granade_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjActors_Source_ProjActors_Granade_h_12_RPC_WRAPPERS \
	ProjActors_Source_ProjActors_Granade_h_12_INCLASS \
	ProjActors_Source_ProjActors_Granade_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjActors_Source_ProjActors_Granade_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjActors_Source_ProjActors_Granade_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjActors_Source_ProjActors_Granade_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjActors_Source_ProjActors_Granade_h_12_INCLASS_NO_PURE_DECLS \
	ProjActors_Source_ProjActors_Granade_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJACTORS_API UClass* StaticClass<class AGranade>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjActors_Source_ProjActors_Granade_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
