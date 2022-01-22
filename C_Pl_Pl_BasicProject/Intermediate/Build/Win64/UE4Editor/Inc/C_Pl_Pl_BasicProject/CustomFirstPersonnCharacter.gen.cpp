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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	C_PL_PL_BASICPROJECT_API UClass* Z_Construct_UClass_APistol_NoRegister();
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
	DEFINE_FUNCTION(ACustomFirstPersonnCharacter::execstopWeaponFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->stopWeaponFire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACustomFirstPersonnCharacter::execstartWeaponFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->startWeaponFire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACustomFirstPersonnCharacter::execspawnWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->spawnWeapon();
		P_NATIVE_END;
	}
	void ACustomFirstPersonnCharacter::StaticRegisterNativesACustomFirstPersonnCharacter()
	{
		UClass* Class = ACustomFirstPersonnCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "spawnWeapon", &ACustomFirstPersonnCharacter::execspawnWeapon },
			{ "startJump", &ACustomFirstPersonnCharacter::execstartJump },
			{ "startWeaponFire", &ACustomFirstPersonnCharacter::execstartWeaponFire },
			{ "stopJump", &ACustomFirstPersonnCharacter::execstopJump },
			{ "stopWeaponFire", &ACustomFirstPersonnCharacter::execstopWeaponFire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACustomFirstPersonnCharacter_spawnWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomFirstPersonnCharacter_spawnWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/CustomFirstPersonnCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomFirstPersonnCharacter_spawnWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomFirstPersonnCharacter, nullptr, "spawnWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACustomFirstPersonnCharacter_spawnWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomFirstPersonnCharacter_spawnWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACustomFirstPersonnCharacter_spawnWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACustomFirstPersonnCharacter_spawnWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
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
	struct Z_Construct_UFunction_ACustomFirstPersonnCharacter_startWeaponFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomFirstPersonnCharacter_startWeaponFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/CustomFirstPersonnCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomFirstPersonnCharacter_startWeaponFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomFirstPersonnCharacter, nullptr, "startWeaponFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACustomFirstPersonnCharacter_startWeaponFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomFirstPersonnCharacter_startWeaponFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACustomFirstPersonnCharacter_startWeaponFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACustomFirstPersonnCharacter_startWeaponFire_Statics::FuncParams);
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
	struct Z_Construct_UFunction_ACustomFirstPersonnCharacter_stopWeaponFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomFirstPersonnCharacter_stopWeaponFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/CustomFirstPersonnCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomFirstPersonnCharacter_stopWeaponFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomFirstPersonnCharacter, nullptr, "stopWeaponFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACustomFirstPersonnCharacter_stopWeaponFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomFirstPersonnCharacter_stopWeaponFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACustomFirstPersonnCharacter_stopWeaponFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACustomFirstPersonnCharacter_stopWeaponFire_Statics::FuncParams);
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pistol_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Pistol;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACustomFirstPersonnCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_C_Pl_Pl_BasicProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACustomFirstPersonnCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACustomFirstPersonnCharacter_spawnWeapon, "spawnWeapon" }, // 2513606000
		{ &Z_Construct_UFunction_ACustomFirstPersonnCharacter_startJump, "startJump" }, // 3231822406
		{ &Z_Construct_UFunction_ACustomFirstPersonnCharacter_startWeaponFire, "startWeaponFire" }, // 1616218465
		{ &Z_Construct_UFunction_ACustomFirstPersonnCharacter_stopJump, "stopJump" }, // 1714545956
		{ &Z_Construct_UFunction_ACustomFirstPersonnCharacter_stopWeaponFire, "stopWeaponFire" }, // 745319277
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomFirstPersonnCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CustomFirstPersonnCharacter.h" },
		{ "ModuleRelativePath", "Private/CustomFirstPersonnCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomFirstPersonnCharacter_Statics::NewProp_Pistol_MetaData[] = {
		{ "Category", "Guns" },
		{ "ModuleRelativePath", "Private/CustomFirstPersonnCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACustomFirstPersonnCharacter_Statics::NewProp_Pistol = { "Pistol", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACustomFirstPersonnCharacter, Pistol), Z_Construct_UClass_APistol_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACustomFirstPersonnCharacter_Statics::NewProp_Pistol_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomFirstPersonnCharacter_Statics::NewProp_Pistol_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACustomFirstPersonnCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomFirstPersonnCharacter_Statics::NewProp_Pistol,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACustomFirstPersonnCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACustomFirstPersonnCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACustomFirstPersonnCharacter_Statics::ClassParams = {
		&ACustomFirstPersonnCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACustomFirstPersonnCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACustomFirstPersonnCharacter_Statics::PropPointers),
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
	IMPLEMENT_CLASS(ACustomFirstPersonnCharacter, 1542761571);
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
