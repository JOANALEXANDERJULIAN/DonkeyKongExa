// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_L02/Enemigo1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigo1() {}
// Cross Module References
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_AEnemigo1_NoRegister();
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_AEnemigo1();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_L02();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AEnemigo1::StaticRegisterNativesAEnemigo1()
	{
	}
	UClass* Z_Construct_UClass_AEnemigo1_NoRegister()
	{
		return AEnemigo1::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigo1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CubeMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CubeMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fire_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Fire;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigo1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_L02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigo1_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Enemigo1.h" },
		{ "ModuleRelativePath", "Enemigo1.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigo1_Statics::NewProp_CubeMesh_MetaData[] = {
		{ "Category", "Enemigo1" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemigo1.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemigo1_Statics::NewProp_CubeMesh = { "CubeMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemigo1, CubeMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemigo1_Statics::NewProp_CubeMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo1_Statics::NewProp_CubeMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigo1_Statics::NewProp_Fire_MetaData[] = {
		{ "Category", "Enemigo1" },
		{ "Comment", "//Para que dispare a la derecha\n" },
		{ "ModuleRelativePath", "Enemigo1.h" },
		{ "ToolTip", "Para que dispare a la derecha" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemigo1_Statics::NewProp_Fire = { "Fire", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemigo1, Fire), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AEnemigo1_Statics::NewProp_Fire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo1_Statics::NewProp_Fire_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemigo1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo1_Statics::NewProp_CubeMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo1_Statics::NewProp_Fire,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigo1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigo1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigo1_Statics::ClassParams = {
		&AEnemigo1::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemigo1_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo1_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemigo1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigo1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigo1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigo1, 2607584064);
	template<> DONKEYKONG_L02_API UClass* StaticClass<AEnemigo1>()
	{
		return AEnemigo1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigo1(Z_Construct_UClass_AEnemigo1, &AEnemigo1::StaticClass, TEXT("/Script/DonkeyKong_L02"), TEXT("AEnemigo1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigo1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
