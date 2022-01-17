// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "C_Pl_Pl_BasicProject/Public/Pistol.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePistol() {}
// Cross Module References
	C_PL_PL_BASICPROJECT_API UClass* Z_Construct_UClass_APistol_NoRegister();
	C_PL_PL_BASICPROJECT_API UClass* Z_Construct_UClass_APistol();
	C_PL_PL_BASICPROJECT_API UClass* Z_Construct_UClass_AGunParentClass();
	UPackage* Z_Construct_UPackage__Script_C_Pl_Pl_BasicProject();
// End Cross Module References
	void APistol::StaticRegisterNativesAPistol()
	{
	}
	UClass* Z_Construct_UClass_APistol_NoRegister()
	{
		return APistol::StaticClass();
	}
	struct Z_Construct_UClass_APistol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APistol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGunParentClass,
		(UObject* (*)())Z_Construct_UPackage__Script_C_Pl_Pl_BasicProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APistol_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Pistol.h" },
		{ "ModuleRelativePath", "Public/Pistol.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APistol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APistol>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APistol_Statics::ClassParams = {
		&APistol::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APistol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APistol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APistol()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APistol_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APistol, 4212599427);
	template<> C_PL_PL_BASICPROJECT_API UClass* StaticClass<APistol>()
	{
		return APistol::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APistol(Z_Construct_UClass_APistol, &APistol::StaticClass, TEXT("/Script/C_Pl_Pl_BasicProject"), TEXT("APistol"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APistol);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
