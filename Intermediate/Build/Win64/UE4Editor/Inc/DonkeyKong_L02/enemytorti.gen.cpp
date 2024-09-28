// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_L02/enemytorti.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeenemytorti() {}
// Cross Module References
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_Aenemytorti_NoRegister();
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_Aenemytorti();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_L02();
// End Cross Module References
	void Aenemytorti::StaticRegisterNativesAenemytorti()
	{
	}
	UClass* Z_Construct_UClass_Aenemytorti_NoRegister()
	{
		return Aenemytorti::StaticClass();
	}
	struct Z_Construct_UClass_Aenemytorti_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aenemytorti_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_L02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemytorti_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "enemytorti.h" },
		{ "ModuleRelativePath", "enemytorti.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aenemytorti_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aenemytorti>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Aenemytorti_Statics::ClassParams = {
		&Aenemytorti::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_Aenemytorti_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemytorti_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aenemytorti()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Aenemytorti_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Aenemytorti, 1377594907);
	template<> DONKEYKONG_L02_API UClass* StaticClass<Aenemytorti>()
	{
		return Aenemytorti::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Aenemytorti(Z_Construct_UClass_Aenemytorti, &Aenemytorti::StaticClass, TEXT("/Script/DonkeyKong_L02"), TEXT("Aenemytorti"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aenemytorti);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
