// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "C_Pl_Pl_BasicProject/Private/CustomFirstPersonnCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomFirstPersonnCharacter() {}
// Cross Module References
	C_PL_PL_BASICPROJECT_API UClass* Z_Construct_UClass_ACustomFirstPersonnCharacter_NoRegister();
	C_PL_PL_BASICPROJECT_API UClass* Z_Construct_UClass_ACustomFirstPersonnCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_C_Pl_Pl_BasicProject();
// End Cross Module References
	DEFINE_FUNCTION(ACustomFirstPersonnCharacter::execstopJump)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->stopJump();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACustomFirstPersonnCharacter::execstartJump)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->startJump();
		P_NATIVE_END;
	}
	void ACustomFirstPersonnCharacter::StaticRegisterNativesACustomFirstPersonnCharacter()
	{
		UClass* Class = ACustomFirstPersonnCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "startJump", &ACustomFirstPersonnCharacter::execstartJump },
			{ "stopJump", &ACustomFirstPersonnCharacter::execstopJump },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACustomFirstPersonnCharacter_startJump_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomFirstPersonnCharacter_startJump_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/CustomFirstPersonnCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomFirstPersonnCharacter_startJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomFirstPersonnCharacter, nullptr, "startJump", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACustomFirstPersonnCharacter_startJump_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomFirstPersonnCharacter_startJump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACustomFirstPersonnCharacter_startJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACustomFirstPersonnCharacter_startJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACustomFirstPersonnCharacter_stopJump_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomFirstPersonnCharacter_stopJump_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/CustomFirstPersonnCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomFirstPersonnCharacter_stopJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomFirstPersonnCharacter, nullptr, "stopJump", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACustomFirstPersonnCharacter_stopJump_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomFirstPersonnCharacter_stopJump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACustomFirstPersonnCharacter_stopJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACustomFirstPersonnCharacter_stopJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACustomFirstPersonnCharacter_NoRegister()
	{
		return ACustomFirstPersonnCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ACustomFirstPersonnCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACustomFirstPersonnCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_C_Pl_Pl_BasicProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACustomFirstPersonnCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACustomFirstPersonnCharacter_startJump, "startJump" }, // 3231822406
		{ &Z_Construct_UFunction_ACustomFirstPersonnCharacter_stopJump, "stopJump" }, // 1714545956
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomFirstPersonnCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CustomFirstPersonnCharacter.h" },
		{ "ModuleRelativePath", "Private/CustomFirstPersonnCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACustomFirstPersonnCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACustomFirstPersonnCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACustomFirstPersonnCharacter_Statics::ClassParams = {
		&ACustomFirstPersonnCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACustomFirstPersonnCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomFirstPersonnCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACustomFirstPersonnCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACustomFirstPersonnCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACustomFirstPersonnCharacter, 4235684431);
	template<> C_PL_PL_BASICPROJECT_API UClass* StaticClass<ACustomFirstPersonnCharacter>()
	{
		return ACustomFirstPersonnCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACustomFirstPersonnCharacter(Z_Construct_UClass_ACustomFirstPersonnCharacter, &ACustomFirstPersonnCharacter::StaticClass, TEXT("/Script/C_Pl_Pl_BasicProject"), TEXT("ACustomFirstPersonnCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACustomFirstPersonnCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
