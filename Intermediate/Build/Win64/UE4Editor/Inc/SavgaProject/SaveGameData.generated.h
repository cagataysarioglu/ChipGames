// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SAVGAPROJECT_SaveGameData_generated_h
#error "SaveGameData.generated.h already included, missing '#pragma once' in SaveGameData.h"
#endif
#define SAVGAPROJECT_SaveGameData_generated_h

#define SavgaProject_Source_SavgaProject_SaveGameData_h_10_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSaveData_Statics; \
	SAVGAPROJECT_API static class UScriptStruct* StaticStruct();


template<> SAVGAPROJECT_API UScriptStruct* StaticStruct<struct FSaveData>();

#define SavgaProject_Source_SavgaProject_SaveGameData_h_19_SPARSE_DATA
#define SavgaProject_Source_SavgaProject_SaveGameData_h_19_RPC_WRAPPERS
#define SavgaProject_Source_SavgaProject_SaveGameData_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define SavgaProject_Source_SavgaProject_SaveGameData_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSaveGameData(); \
	friend struct Z_Construct_UClass_USaveGameData_Statics; \
public: \
	DECLARE_CLASS(USaveGameData, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SavgaProject"), NO_API) \
	DECLARE_SERIALIZER(USaveGameData)


#define SavgaProject_Source_SavgaProject_SaveGameData_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUSaveGameData(); \
	friend struct Z_Construct_UClass_USaveGameData_Statics; \
public: \
	DECLARE_CLASS(USaveGameData, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SavgaProject"), NO_API) \
	DECLARE_SERIALIZER(USaveGameData)


#define SavgaProject_Source_SavgaProject_SaveGameData_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveGameData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveGameData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveGameData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveGameData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveGameData(USaveGameData&&); \
	NO_API USaveGameData(const USaveGameData&); \
public:


#define SavgaProject_Source_SavgaProject_SaveGameData_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveGameData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveGameData(USaveGameData&&); \
	NO_API USaveGameData(const USaveGameData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveGameData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveGameData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveGameData)


#define SavgaProject_Source_SavgaProject_SaveGameData_h_19_PRIVATE_PROPERTY_OFFSET
#define SavgaProject_Source_SavgaProject_SaveGameData_h_16_PROLOG
#define SavgaProject_Source_SavgaProject_SaveGameData_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SavgaProject_Source_SavgaProject_SaveGameData_h_19_PRIVATE_PROPERTY_OFFSET \
	SavgaProject_Source_SavgaProject_SaveGameData_h_19_SPARSE_DATA \
	SavgaProject_Source_SavgaProject_SaveGameData_h_19_RPC_WRAPPERS \
	SavgaProject_Source_SavgaProject_SaveGameData_h_19_INCLASS \
	SavgaProject_Source_SavgaProject_SaveGameData_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SavgaProject_Source_SavgaProject_SaveGameData_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SavgaProject_Source_SavgaProject_SaveGameData_h_19_PRIVATE_PROPERTY_OFFSET \
	SavgaProject_Source_SavgaProject_SaveGameData_h_19_SPARSE_DATA \
	SavgaProject_Source_SavgaProject_SaveGameData_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	SavgaProject_Source_SavgaProject_SaveGameData_h_19_INCLASS_NO_PURE_DECLS \
	SavgaProject_Source_SavgaProject_SaveGameData_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAVGAPROJECT_API UClass* StaticClass<class USaveGameData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SavgaProject_Source_SavgaProject_SaveGameData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
