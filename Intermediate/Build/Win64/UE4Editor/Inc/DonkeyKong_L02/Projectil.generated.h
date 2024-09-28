// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef DONKEYKONG_L02_Projectil_generated_h
#error "Projectil.generated.h already included, missing '#pragma once' in Projectil.h"
#endif
#define DONKEYKONG_L02_Projectil_generated_h

#define DonkeyKongExa_Source_DonkeyKong_L02_Projectil_h_13_SPARSE_DATA
#define DonkeyKongExa_Source_DonkeyKong_L02_Projectil_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define DonkeyKongExa_Source_DonkeyKong_L02_Projectil_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define DonkeyKongExa_Source_DonkeyKong_L02_Projectil_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectil(); \
	friend struct Z_Construct_UClass_AProjectil_Statics; \
public: \
	DECLARE_CLASS(AProjectil, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DonkeyKong_L02"), NO_API) \
	DECLARE_SERIALIZER(AProjectil)


#define DonkeyKongExa_Source_DonkeyKong_L02_Projectil_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAProjectil(); \
	friend struct Z_Construct_UClass_AProjectil_Statics; \
public: \
	DECLARE_CLASS(AProjectil, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DonkeyKong_L02"), NO_API) \
	DECLARE_SERIALIZER(AProjectil)


#define DonkeyKongExa_Source_DonkeyKong_L02_Projectil_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectil(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectil) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectil); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectil); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectil(AProjectil&&); \
	NO_API AProjectil(const AProjectil&); \
public:


#define DonkeyKongExa_Source_DonkeyKong_L02_Projectil_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectil(AProjectil&&); \
	NO_API AProjectil(const AProjectil&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectil); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectil); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectil)


#define DonkeyKongExa_Source_DonkeyKong_L02_Projectil_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(AProjectil, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AProjectil, ProjectileMovement); } \
	FORCEINLINE static uint32 __PPO__ProjectileMaterial() { return STRUCT_OFFSET(AProjectil, ProjectileMaterial); }


#define DonkeyKongExa_Source_DonkeyKong_L02_Projectil_h_10_PROLOG
#define DonkeyKongExa_Source_DonkeyKong_L02_Projectil_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DonkeyKongExa_Source_DonkeyKong_L02_Projectil_h_13_PRIVATE_PROPERTY_OFFSET \
	DonkeyKongExa_Source_DonkeyKong_L02_Projectil_h_13_SPARSE_DATA \
	DonkeyKongExa_Source_DonkeyKong_L02_Projectil_h_13_RPC_WRAPPERS \
	DonkeyKongExa_Source_DonkeyKong_L02_Projectil_h_13_INCLASS \
	DonkeyKongExa_Source_DonkeyKong_L02_Projectil_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DonkeyKongExa_Source_DonkeyKong_L02_Projectil_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DonkeyKongExa_Source_DonkeyKong_L02_Projectil_h_13_PRIVATE_PROPERTY_OFFSET \
	DonkeyKongExa_Source_DonkeyKong_L02_Projectil_h_13_SPARSE_DATA \
	DonkeyKongExa_Source_DonkeyKong_L02_Projectil_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DonkeyKongExa_Source_DonkeyKong_L02_Projectil_h_13_INCLASS_NO_PURE_DECLS \
	DonkeyKongExa_Source_DonkeyKong_L02_Projectil_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DONKEYKONG_L02_API UClass* StaticClass<class AProjectil>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DonkeyKongExa_Source_DonkeyKong_L02_Projectil_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
