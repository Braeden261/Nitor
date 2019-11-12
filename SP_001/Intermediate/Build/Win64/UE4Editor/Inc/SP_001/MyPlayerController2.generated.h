// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SP_001_MyPlayerController2_generated_h
#error "MyPlayerController2.generated.h already included, missing '#pragma once' in MyPlayerController2.h"
#endif
#define SP_001_MyPlayerController2_generated_h

#define SP_001_Source_SP_001_MyPlayerController2_h_15_RPC_WRAPPERS
#define SP_001_Source_SP_001_MyPlayerController2_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define SP_001_Source_SP_001_MyPlayerController2_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPlayerController2(); \
	friend struct Z_Construct_UClass_AMyPlayerController2_Statics; \
public: \
	DECLARE_CLASS(AMyPlayerController2, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SP_001"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayerController2)


#define SP_001_Source_SP_001_MyPlayerController2_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMyPlayerController2(); \
	friend struct Z_Construct_UClass_AMyPlayerController2_Statics; \
public: \
	DECLARE_CLASS(AMyPlayerController2, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SP_001"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayerController2)


#define SP_001_Source_SP_001_MyPlayerController2_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPlayerController2(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPlayerController2) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayerController2); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayerController2); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPlayerController2(AMyPlayerController2&&); \
	NO_API AMyPlayerController2(const AMyPlayerController2&); \
public:


#define SP_001_Source_SP_001_MyPlayerController2_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPlayerController2(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPlayerController2(AMyPlayerController2&&); \
	NO_API AMyPlayerController2(const AMyPlayerController2&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayerController2); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayerController2); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPlayerController2)


#define SP_001_Source_SP_001_MyPlayerController2_h_15_PRIVATE_PROPERTY_OFFSET
#define SP_001_Source_SP_001_MyPlayerController2_h_12_PROLOG
#define SP_001_Source_SP_001_MyPlayerController2_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SP_001_Source_SP_001_MyPlayerController2_h_15_PRIVATE_PROPERTY_OFFSET \
	SP_001_Source_SP_001_MyPlayerController2_h_15_RPC_WRAPPERS \
	SP_001_Source_SP_001_MyPlayerController2_h_15_INCLASS \
	SP_001_Source_SP_001_MyPlayerController2_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SP_001_Source_SP_001_MyPlayerController2_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SP_001_Source_SP_001_MyPlayerController2_h_15_PRIVATE_PROPERTY_OFFSET \
	SP_001_Source_SP_001_MyPlayerController2_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SP_001_Source_SP_001_MyPlayerController2_h_15_INCLASS_NO_PURE_DECLS \
	SP_001_Source_SP_001_MyPlayerController2_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SP_001_API UClass* StaticClass<class AMyPlayerController2>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SP_001_Source_SP_001_MyPlayerController2_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
