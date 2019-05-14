// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HORROR2D_Horror2DCharacter_generated_h
#error "Horror2DCharacter.generated.h already included, missing '#pragma once' in Horror2DCharacter.h"
#endif
#define HORROR2D_Horror2DCharacter_generated_h

#define Horror2D_Source_Horror2D_Horror2DCharacter_h_22_RPC_WRAPPERS
#define Horror2D_Source_Horror2D_Horror2DCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define Horror2D_Source_Horror2D_Horror2DCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHorror2DCharacter(); \
	friend struct Z_Construct_UClass_AHorror2DCharacter_Statics; \
public: \
	DECLARE_CLASS(AHorror2DCharacter, APaperCharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Horror2D"), NO_API) \
	DECLARE_SERIALIZER(AHorror2DCharacter) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Horror2D_Source_Horror2D_Horror2DCharacter_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAHorror2DCharacter(); \
	friend struct Z_Construct_UClass_AHorror2DCharacter_Statics; \
public: \
	DECLARE_CLASS(AHorror2DCharacter, APaperCharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Horror2D"), NO_API) \
	DECLARE_SERIALIZER(AHorror2DCharacter) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Horror2D_Source_Horror2D_Horror2DCharacter_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHorror2DCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHorror2DCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHorror2DCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHorror2DCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHorror2DCharacter(AHorror2DCharacter&&); \
	NO_API AHorror2DCharacter(const AHorror2DCharacter&); \
public:


#define Horror2D_Source_Horror2D_Horror2DCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHorror2DCharacter(AHorror2DCharacter&&); \
	NO_API AHorror2DCharacter(const AHorror2DCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHorror2DCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHorror2DCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHorror2DCharacter)


#define Horror2D_Source_Horror2D_Horror2DCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SideViewCameraComponent() { return STRUCT_OFFSET(AHorror2DCharacter, SideViewCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AHorror2DCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__RunningAnimation() { return STRUCT_OFFSET(AHorror2DCharacter, RunningAnimation); } \
	FORCEINLINE static uint32 __PPO__IdleAnimation() { return STRUCT_OFFSET(AHorror2DCharacter, IdleAnimation); }


#define Horror2D_Source_Horror2D_Horror2DCharacter_h_19_PROLOG
#define Horror2D_Source_Horror2D_Horror2DCharacter_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Horror2D_Source_Horror2D_Horror2DCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	Horror2D_Source_Horror2D_Horror2DCharacter_h_22_RPC_WRAPPERS \
	Horror2D_Source_Horror2D_Horror2DCharacter_h_22_INCLASS \
	Horror2D_Source_Horror2D_Horror2DCharacter_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Horror2D_Source_Horror2D_Horror2DCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Horror2D_Source_Horror2D_Horror2DCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	Horror2D_Source_Horror2D_Horror2DCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Horror2D_Source_Horror2D_Horror2DCharacter_h_22_INCLASS_NO_PURE_DECLS \
	Horror2D_Source_Horror2D_Horror2DCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HORROR2D_API UClass* StaticClass<class AHorror2DCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Horror2D_Source_Horror2D_Horror2DCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
