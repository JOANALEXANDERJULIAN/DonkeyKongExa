// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_L02/MuroMetalico.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMuroMetalico() {}
// Cross Module References
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_AMuroMetalico_NoRegister();
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_AMuroMetalico();
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_AMuro();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_L02();
// End Cross Module References
	void AMuroMetalico::StaticRegisterNativesAMuroMetalico()
	{
	}
	UClass* Z_Construct_UClass_AMuroMetalico_NoRegister()
	{
		return AMuroMetalico::StaticClass();
	}
	struct Z_Construct_UClass_AMuroMetalico_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMuroMetalico_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMuro,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_L02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroMetalico_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MuroMetalico.h" },
		{ "ModuleRelativePath", "MuroMetalico.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMuroMetalico_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMuroMetalico>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMuroMetalico_Statics::ClassParams = {
		&AMuroMetalico::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMuroMetalico_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroMetalico_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMuroMetalico()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMuroMetalico_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMuroMetalico, 40477276);
	template<> DONKEYKONG_L02_API UClass* StaticClass<AMuroMetalico>()
	{
		return AMuroMetalico::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMuroMetalico(Z_Construct_UClass_AMuroMetalico, &AMuroMetalico::StaticClass, TEXT("/Script/DonkeyKong_L02"), TEXT("AMuroMetalico"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMuroMetalico);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
