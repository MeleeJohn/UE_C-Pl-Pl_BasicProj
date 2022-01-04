// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "C_Pl_Pl_BasicProject/C_Pl_Pl_BasicProjectGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_Pl_Pl_BasicProjectGameMode() {}
// Cross Module References
	C_PL_PL_BASICPROJECT_API UClass* Z_Construct_UClass_AC_Pl_Pl_BasicProjectGameMode_NoRegister();
	C_PL_PL_BASICPROJECT_API UClass* Z_Construct_UClass_AC_Pl_Pl_BasicProjectGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_C_Pl_Pl_BasicProject();
// End Cross Module References
	void AC_Pl_Pl_BasicProjectGameMode::StaticRegisterNativesAC_Pl_Pl_BasicProjectGameMode()
	{
	}
	UClass* Z_Construct_UClass_AC_Pl_Pl_BasicProjectGameMode_NoRegister()
	{
		return AC_Pl_Pl_BasicProjectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AC_Pl_Pl_BasicProjectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC_Pl_Pl_BasicProjectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_C_Pl_Pl_BasicProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Pl_Pl_BasicProjectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "C_Pl_Pl_BasicProjectGameMode.h" },
		{ "ModuleRelativePath", "C_Pl_Pl_BasicProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC_Pl_Pl_BasicProjectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_Pl_Pl_BasicProjectGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AC_Pl_Pl_BasicProjectGameMode_Statics::ClassParams = {
		&AC_Pl_Pl_BasicProjectGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AC_Pl_Pl_BasicProjectGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Pl_Pl_BasicProjectGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC_Pl_Pl_BasicProjectGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AC_Pl_Pl_BasicProjectGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AC_Pl_Pl_BasicProjectGameMode, 4180853111);
	template<> C_PL_PL_BASICPROJECT_API UClass* StaticClass<AC_Pl_Pl_BasicProjectGameMode>()
	{
		return AC_Pl_Pl_BasicProjectGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AC_Pl_Pl_BasicProjectGameMode(Z_Construct_UClass_AC_Pl_Pl_BasicProjectGameMode, &AC_Pl_Pl_BasicProjectGameMode::StaticClass, TEXT("/Script/C_Pl_Pl_BasicProject"), TEXT("AC_Pl_Pl_BasicProjectGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC_Pl_Pl_BasicProjectGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
