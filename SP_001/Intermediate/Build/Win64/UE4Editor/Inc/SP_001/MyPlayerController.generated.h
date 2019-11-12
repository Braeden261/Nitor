// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SP_001_MyPlayerController_generated_h
#error "MyPlayerController.generated.h already included, missing '#pragma once' in MyPlayerController.h"
#endif
#define SP_001_MyPlayerController_generated_h

#define SP_001_Source_SP_001_MyPlayerController_h_16_RPC_WRAPPERS
#define SP_001_Source_SP_001_MyPlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define SP_001_Source_SP_001_MyPlayerController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPlayerController(); \
	friend struct Z_Construct_UClass_AMyPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMyPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SP_001"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayerController)


#define SP_001_Source_SP_001_MyPlayerController_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAMyPlayerController(); \
	friend struct Z_Construct_UClass_AMyPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMyPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SP_001"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayerController)


#define SP_001_Source_SP_001_MyPlayerController_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPlayerController(AMyPlayerController&&); \
	NO_API AMyPlayerController(const AMyPlayerController&); \
public:


#define SP_001_Source_SP_001_MyPlayerController_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPlayerController(AMyPlayerController&&); \
	NO_API AMyPlayerController(const AMyPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyPlayerController)


#define SP_001_Source_SP_001_MyPlayerController_h_16_PRIVATE_PROPERTY_OFFSET
#define SP_001_Source_SP_001_MyPlayerController_h_13_PROLOG
#define SP_001_Source_SP_001_MyPlayerController_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SP_001_Source_SP_001_MyPlayerController_h_16_PRIVATE_PROPERTY_OFFSET \
	SP_001_Source_SP_001_MyPlayerController_h_16_RPC_WRAPPERS \
	SP_001_Source_SP_001_MyPlayerController_h_16_INCLASS \
	SP_001_Source_SP_001_MyPlayerController_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SP_001_Source_SP_001_MyPlayerController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SP_001_Source_SP_001_MyPlayerController_h_16_PRIVATE_PROPERTY_OFFSET \
	SP_001_Source_SP_001_MyPlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	SP_001_Source_SP_001_MyPlayerController_h_16_INCLASS_NO_PURE_DECLS \
	SP_001_Source_SP_001_MyPlayerController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SP_001_API UClass* StaticClass<class AMyPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SP_001_Source_SP_001_MyPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
