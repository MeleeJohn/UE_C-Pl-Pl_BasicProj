// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "C_Pl_Pl_BasicProject/Private/GunParentClass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGunParentClass() {}
// Cross Module References
	C_PL_PL_BASICPROJECT_API UClass* Z_Construct_UClass_AGunParentClass_NoRegister();
	C_PL_PL_BASICPROJECT_API UClass* Z_Construct_UClass_AGunParentClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_C_Pl_Pl_BasicProject();
// End Cross Module References
	void AGunParentClass::StaticRegisterNativesAGunParentClass()
	{
	}
	UClass* Z_Construct_UClass_AGunParentClass_NoRegister()
	{
		return AGunParentClass::StaticClass();
	}
	struct Z_Construct_UClass_AGunParentClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGunParentClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_C_Pl_Pl_BasicProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunParentClass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GunParentClass.h" },
		{ "ModuleRelativePath", "Private/GunParentClass.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGunParentClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGunParentClass>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGunParentClass_Statics::ClassParams = {
		&AGunParentClass::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_AGunParentClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGunParentClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGunParentClass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGunParentClass_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGunParentClass, 2330751134);
	template<> C_PL_PL_BASICPROJECT_API UClass* StaticClass<AGunParentClass>()
	{
		return AGunParentClass::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGunParentClass(Z_Construct_UClass_AGunParentClass, &AGunParentClass::StaticClass, TEXT("/Script/C_Pl_Pl_BasicProject"), TEXT("AGunParentClass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGunParentClass);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
