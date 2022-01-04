// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "C_Pl_Pl_BasicProject/C_Pl_Pl_BasicProjectHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_Pl_Pl_BasicProjectHUD() {}
// Cross Module References
	C_PL_PL_BASICPROJECT_API UClass* Z_Construct_UClass_AC_Pl_Pl_BasicProjectHUD_NoRegister();
	C_PL_PL_BASICPROJECT_API UClass* Z_Construct_UClass_AC_Pl_Pl_BasicProjectHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_C_Pl_Pl_BasicProject();
// End Cross Module References
	void AC_Pl_Pl_BasicProjectHUD::StaticRegisterNativesAC_Pl_Pl_BasicProjectHUD()
	{
	}
	UClass* Z_Construct_UClass_AC_Pl_Pl_BasicProjectHUD_NoRegister()
	{
		return AC_Pl_Pl_BasicProjectHUD::StaticClass();
	}
	struct Z_Construct_UClass_AC_Pl_Pl_BasicProjectHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC_Pl_Pl_BasicProjectHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_C_Pl_Pl_BasicProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Pl_Pl_BasicProjectHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "C_Pl_Pl_BasicProjectHUD.h" },
		{ "ModuleRelativePath", "C_Pl_Pl_BasicProjectHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC_Pl_Pl_BasicProjectHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_Pl_Pl_BasicProjectHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AC_Pl_Pl_BasicProjectHUD_Statics::ClassParams = {
		&AC_Pl_Pl_BasicProjectHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AC_Pl_Pl_BasicProjectHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Pl_Pl_BasicProjectHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC_Pl_Pl_BasicProjectHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AC_Pl_Pl_BasicProjectHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AC_Pl_Pl_BasicProjectHUD, 1967372045);
	template<> C_PL_PL_BASICPROJECT_API UClass* StaticClass<AC_Pl_Pl_BasicProjectHUD>()
	{
		return AC_Pl_Pl_BasicProjectHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AC_Pl_Pl_BasicProjectHUD(Z_Construct_UClass_AC_Pl_Pl_BasicProjectHUD, &AC_Pl_Pl_BasicProjectHUD::StaticClass, TEXT("/Script/C_Pl_Pl_BasicProject"), TEXT("AC_Pl_Pl_BasicProjectHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC_Pl_Pl_BasicProjectHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
