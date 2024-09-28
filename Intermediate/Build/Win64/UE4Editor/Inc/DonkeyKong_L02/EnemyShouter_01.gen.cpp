// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_L02/EnemyShouter_01.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyShouter_01() {}
// Cross Module References
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_AEnemyShouter_01_NoRegister();
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_AEnemyShouter_01();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_L02();
// End Cross Module References
	void AEnemyShouter_01::StaticRegisterNativesAEnemyShouter_01()
	{
	}
	UClass* Z_Construct_UClass_AEnemyShouter_01_NoRegister()
	{
		return AEnemyShouter_01::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyShouter_01_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyShouter_01_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_L02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyShouter_01_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemyShouter_01.h" },
		{ "ModuleRelativePath", "EnemyShouter_01.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyShouter_01_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyShouter_01>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemyShouter_01_Statics::ClassParams = {
		&AEnemyShouter_01::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEnemyShouter_01_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyShouter_01_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyShouter_01()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemyShouter_01_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemyShouter_01, 3332623270);
	template<> DONKEYKONG_L02_API UClass* StaticClass<AEnemyShouter_01>()
	{
		return AEnemyShouter_01::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemyShouter_01(Z_Construct_UClass_AEnemyShouter_01, &AEnemyShouter_01::StaticClass, TEXT("/Script/DonkeyKong_L02"), TEXT("AEnemyShouter_01"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyShouter_01);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
