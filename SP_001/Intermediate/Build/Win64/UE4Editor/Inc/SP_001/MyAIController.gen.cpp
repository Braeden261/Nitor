// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SP_001/MyAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyAIController() {}
// Cross Module References
	SP_001_API UClass* Z_Construct_UClass_AMyAIController_NoRegister();
	SP_001_API UClass* Z_Construct_UClass_AMyAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_SP_001();
// End Cross Module References
	void AMyAIController::StaticRegisterNativesAMyAIController()
	{
	}
	UClass* Z_Construct_UClass_AMyAIController_NoRegister()
	{
		return AMyAIController::StaticClass();
	}
	struct Z_Construct_UClass_AMyAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_SP_001,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MyAIController.h" },
		{ "ModuleRelativePath", "MyAIController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyAIController_Statics::ClassParams = {
		&AMyAIController::StaticClass,
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
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMyAIController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMyAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyAIController, 691456680);
	template<> SP_001_API UClass* StaticClass<AMyAIController>()
	{
		return AMyAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyAIController(Z_Construct_UClass_AMyAIController, &AMyAIController::StaticClass, TEXT("/Script/SP_001"), TEXT("AMyAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
