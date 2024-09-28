// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_L02/Enemy01.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy01() {}
// Cross Module References
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_AEnemy01_NoRegister();
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_AEnemy01();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_L02();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void AEnemy01::StaticRegisterNativesAEnemy01()
	{
	}
	UClass* Z_Construct_UClass_AEnemy01_NoRegister()
	{
		return AEnemy01::StaticClass();
	}
	struct Z_Construct_UClass_AEnemy01_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConoMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConoMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TiempoEntreDisparos_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TiempoEntreDisparos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProyectilClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProyectilClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemy01_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_L02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy01_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Enemy01.h" },
		{ "ModuleRelativePath", "Enemy01.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy01_Statics::NewProp_ConoMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "// Componente Static Mesh para la forma de cono\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy01.h" },
		{ "ToolTip", "Componente Static Mesh para la forma de cono" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy01_Statics::NewProp_ConoMesh = { "ConoMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy01, ConoMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemy01_Statics::NewProp_ConoMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy01_Statics::NewProp_ConoMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy01_Statics::NewProp_TiempoEntreDisparos_MetaData[] = {
		{ "Category", "Disparo" },
		{ "Comment", "// Tiempo entre disparos\n" },
		{ "ModuleRelativePath", "Enemy01.h" },
		{ "ToolTip", "Tiempo entre disparos" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy01_Statics::NewProp_TiempoEntreDisparos = { "TiempoEntreDisparos", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy01, TiempoEntreDisparos), METADATA_PARAMS(Z_Construct_UClass_AEnemy01_Statics::NewProp_TiempoEntreDisparos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy01_Statics::NewProp_TiempoEntreDisparos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy01_Statics::NewProp_ProyectilClass_MetaData[] = {
		{ "Category", "Disparo" },
		{ "Comment", "// Clase de los proyectiles\n" },
		{ "ModuleRelativePath", "Enemy01.h" },
		{ "ToolTip", "Clase de los proyectiles" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemy01_Statics::NewProp_ProyectilClass = { "ProyectilClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy01, ProyectilClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AEnemy01_Statics::NewProp_ProyectilClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy01_Statics::NewProp_ProyectilClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemy01_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy01_Statics::NewProp_ConoMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy01_Statics::NewProp_TiempoEntreDisparos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy01_Statics::NewProp_ProyectilClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemy01_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy01>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemy01_Statics::ClassParams = {
		&AEnemy01::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemy01_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy01_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemy01_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy01_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemy01()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemy01_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemy01, 3169208296);
	template<> DONKEYKONG_L02_API UClass* StaticClass<AEnemy01>()
	{
		return AEnemy01::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemy01(Z_Construct_UClass_AEnemy01, &AEnemy01::StaticClass, TEXT("/Script/DonkeyKong_L02"), TEXT("AEnemy01"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy01);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
