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
#ifdef DONKEYKONG_L02_projectile_generated_h
#error "projectile.generated.h already included, missing '#pragma once' in projectile.h"
#endif
#define DONKEYKONG_L02_projectile_generated_h

#define DonkeyKongExa_Source_DonkeyKong_L02_projectile_h_13_SPARSE_DATA
#define DonkeyKongExa_Source_DonkeyKong_L02_projectile_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define DonkeyKongExa_Source_DonkeyKong_L02_projectile_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define DonkeyKongExa_Source_DonkeyKong_L02_projectile_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAprojectile(); \
	friend struct Z_Construct_UClass_Aprojectile_Statics; \
public: \
	DECLARE_CLASS(Aprojectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DonkeyKong_L02"), NO_API) \
	DECLARE_SERIALIZER(Aprojectile)


#define DonkeyKongExa_Source_DonkeyKong_L02_projectile_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAprojectile(); \
	friend struct Z_Construct_UClass_Aprojectile_Statics; \
public: \
	DECLARE_CLASS(Aprojectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DonkeyKong_L02"), NO_API) \
	DECLARE_SERIALIZER(Aprojectile)


#define DonkeyKongExa_Source_DonkeyKong_L02_projectile_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Aprojectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Aprojectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Aprojectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Aprojectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Aprojectile(Aprojectile&&); \
	NO_API Aprojectile(const Aprojectile&); \
public:


#define DonkeyKongExa_Source_DonkeyKong_L02_projectile_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Aprojectile(Aprojectile&&); \
	NO_API Aprojectile(const Aprojectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Aprojectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Aprojectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Aprojectile)


#define DonkeyKongExa_Source_DonkeyKong_L02_projectile_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(Aprojectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(Aprojectile, ProjectileMovement); } \
	FORCEINLINE static uint32 __PPO__ProjectileMaterial() { return STRUCT_OFFSET(Aprojectile, ProjectileMaterial); }


#define DonkeyKongExa_Source_DonkeyKong_L02_projectile_h_10_PROLOG
#define DonkeyKongExa_Source_DonkeyKong_L02_projectile_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DonkeyKongExa_Source_DonkeyKong_L02_projectile_h_13_PRIVATE_PROPERTY_OFFSET \
	DonkeyKongExa_Source_DonkeyKong_L02_projectile_h_13_SPARSE_DATA \
	DonkeyKongExa_Source_DonkeyKong_L02_projectile_h_13_RPC_WRAPPERS \
	DonkeyKongExa_Source_DonkeyKong_L02_projectile_h_13_INCLASS \
	DonkeyKongExa_Source_DonkeyKong_L02_projectile_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DonkeyKongExa_Source_DonkeyKong_L02_projectile_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DonkeyKongExa_Source_DonkeyKong_L02_projectile_h_13_PRIVATE_PROPERTY_OFFSET \
	DonkeyKongExa_Source_DonkeyKong_L02_projectile_h_13_SPARSE_DATA \
	DonkeyKongExa_Source_DonkeyKong_L02_projectile_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DonkeyKongExa_Source_DonkeyKong_L02_projectile_h_13_INCLASS_NO_PURE_DECLS \
	DonkeyKongExa_Source_DonkeyKong_L02_projectile_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DONKEYKONG_L02_API UClass* StaticClass<class Aprojectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DonkeyKongExa_Source_DonkeyKong_L02_projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
