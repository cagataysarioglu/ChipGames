// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSaveMetadata;
#ifdef SAVGAPROJECT_SaveManager_generated_h
#error "SaveManager.generated.h already included, missing '#pragma once' in SaveManager.h"
#endif
#define SAVGAPROJECT_SaveManager_generated_h

#define SavgaProject_Source_SavgaProject_SaveManager_h_16_SPARSE_DATA
#define SavgaProject_Source_SavgaProject_SaveManager_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAllSaveMetadata); \
	DECLARE_FUNCTION(execGetCurrentSaveSlot); \
	DECLARE_FUNCTION(execSetCurrentSaveSlot); \
	DECLARE_FUNCTION(execGetNewSaveSlot); \
	DECLARE_FUNCTION(execDeleteSlot); \
	DECLARE_FUNCTION(execLoadGame); \
	DECLARE_FUNCTION(execSaveGame);


#define SavgaProject_Source_SavgaProject_SaveManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAllSaveMetadata); \
	DECLARE_FUNCTION(execGetCurrentSaveSlot); \
	DECLARE_FUNCTION(execSetCurrentSaveSlot); \
	DECLARE_FUNCTION(execGetNewSaveSlot); \
	DECLARE_FUNCTION(execDeleteSlot); \
	DECLARE_FUNCTION(execLoadGame); \
	DECLARE_FUNCTION(execSaveGame);


#define SavgaProject_Source_SavgaProject_SaveManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSaveManager(); \
	friend struct Z_Construct_UClass_USaveManager_Statics; \
public: \
	DECLARE_CLASS(USaveManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SavgaProject"), NO_API) \
	DECLARE_SERIALIZER(USaveManager)


#define SavgaProject_Source_SavgaProject_SaveManager_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSaveManager(); \
	friend struct Z_Construct_UClass_USaveManager_Statics; \
public: \
	DECLARE_CLASS(USaveManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SavgaProject"), NO_API) \
	DECLARE_SERIALIZER(USaveManager)


#define SavgaProject_Source_SavgaProject_SaveManager_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveManager(USaveManager&&); \
	NO_API USaveManager(const USaveManager&); \
public:


#define SavgaProject_Source_SavgaProject_SaveManager_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveManager(USaveManager&&); \
	NO_API USaveManager(const USaveManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveManager)


#define SavgaProject_Source_SavgaProject_SaveManager_h_16_PRIVATE_PROPERTY_OFFSET
#define SavgaProject_Source_SavgaProject_SaveManager_h_13_PROLOG
#define SavgaProject_Source_SavgaProject_SaveManager_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SavgaProject_Source_SavgaProject_SaveManager_h_16_PRIVATE_PROPERTY_OFFSET \
	SavgaProject_Source_SavgaProject_SaveManager_h_16_SPARSE_DATA \
	SavgaProject_Source_SavgaProject_SaveManager_h_16_RPC_WRAPPERS \
	SavgaProject_Source_SavgaProject_SaveManager_h_16_INCLASS \
	SavgaProject_Source_SavgaProject_SaveManager_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SavgaProject_Source_SavgaProject_SaveManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SavgaProject_Source_SavgaProject_SaveManager_h_16_PRIVATE_PROPERTY_OFFSET \
	SavgaProject_Source_SavgaProject_SaveManager_h_16_SPARSE_DATA \
	SavgaProject_Source_SavgaProject_SaveManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	SavgaProject_Source_SavgaProject_SaveManager_h_16_INCLASS_NO_PURE_DECLS \
	SavgaProject_Source_SavgaProject_SaveManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAVGAPROJECT_API UClass* StaticClass<class USaveManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SavgaProject_Source_SavgaProject_SaveManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
