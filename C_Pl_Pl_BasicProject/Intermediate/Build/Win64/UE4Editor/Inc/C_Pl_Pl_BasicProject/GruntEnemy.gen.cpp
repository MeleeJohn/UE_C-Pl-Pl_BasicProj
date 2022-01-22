// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "C_Pl_Pl_BasicProject/Private/GruntEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGruntEnemy() {}
// Cross Module References
	C_PL_PL_BASICPROJECT_API UClass* Z_Construct_UClass_AGruntEnemy_NoRegister();
	C_PL_PL_BASICPROJECT_API UClass* Z_Construct_UClass_AGruntEnemy();
	C_PL_PL_BASICPROJECT_API UClass* Z_Construct_UClass_AEnemyBase();
	UPackage* Z_Construct_UPackage__Script_C_Pl_Pl_BasicProject();
// End Cross Module References
	void AGruntEnemy::StaticRegisterNativesAGruntEnemy()
	{
	}
	UClass* Z_Construct_UClass_AGruntEnemy_NoRegister()
	{
		return AGruntEnemy::StaticClass();
	}
	struct Z_Construct_UClass_AGruntEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGruntEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_C_Pl_Pl_BasicProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGruntEnemy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GruntEnemy.h" },
		{ "ModuleRelativePath", "Private/GruntEnemy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGruntEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGruntEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGruntEnemy_Statics::ClassParams = {
		&AGruntEnemy::StaticClass,
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
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGruntEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGruntEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGruntEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGruntEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGruntEnemy, 1102583993);
	template<> C_PL_PL_BASICPROJECT_API UClass* StaticClass<AGruntEnemy>()
	{
		return AGruntEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGruntEnemy(Z_Construct_UClass_AGruntEnemy, &AGruntEnemy::StaticClass, TEXT("/Script/C_Pl_Pl_BasicProject"), TEXT("AGruntEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGruntEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
