// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_L02/ComponentPlataforma.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponentPlataforma() {}
// Cross Module References
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_AComponentPlataforma_NoRegister();
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_AComponentPlataforma();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_L02();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AComponentPlataforma::StaticRegisterNativesAComponentPlataforma()
	{
	}
	UClass* Z_Construct_UClass_AComponentPlataforma_NoRegister()
	{
		return AComponentPlataforma::StaticClass();
	}
	struct Z_Construct_UClass_AComponentPlataforma_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_meshPlataforma_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_meshPlataforma;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AComponentPlataforma_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_L02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AComponentPlataforma_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ComponentPlataforma.h" },
		{ "ModuleRelativePath", "ComponentPlataforma.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AComponentPlataforma_Statics::NewProp_meshPlataforma_MetaData[] = {
		{ "Category", "ComponentPlataforma" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ComponentPlataforma.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AComponentPlataforma_Statics::NewProp_meshPlataforma = { "meshPlataforma", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AComponentPlataforma, meshPlataforma), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AComponentPlataforma_Statics::NewProp_meshPlataforma_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AComponentPlataforma_Statics::NewProp_meshPlataforma_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AComponentPlataforma_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AComponentPlataforma_Statics::NewProp_meshPlataforma,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AComponentPlataforma_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AComponentPlataforma>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AComponentPlataforma_Statics::ClassParams = {
		&AComponentPlataforma::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AComponentPlataforma_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AComponentPlataforma_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AComponentPlataforma_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AComponentPlataforma_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AComponentPlataforma()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AComponentPlataforma_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AComponentPlataforma, 3343194472);
	template<> DONKEYKONG_L02_API UClass* StaticClass<AComponentPlataforma>()
	{
		return AComponentPlataforma::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AComponentPlataforma(Z_Construct_UClass_AComponentPlataforma, &AComponentPlataforma::StaticClass, TEXT("/Script/DonkeyKong_L02"), TEXT("AComponentPlataforma"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AComponentPlataforma);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
