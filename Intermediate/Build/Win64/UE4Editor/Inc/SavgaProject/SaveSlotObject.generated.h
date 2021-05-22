// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USaveSlotObject;
#ifdef SAVGAPROJECT_SaveSlotObject_generated_h
#error "SaveSlotObject.generated.h already included, missing '#pragma once' in SaveSlotObject.h"
#endif
#define SAVGAPROJECT_SaveSlotObject_generated_h

#define SavgaProject_Source_SavgaProject_SaveSlotObject_h_10_DELEGATE \
struct _Script_SavgaProject_eventOnSlotDeleted_Parms \
{ \
	USaveSlotObject* slot; \
}; \
static inline void FOnSlotDeleted_DelegateWrapper(const FMulticastScriptDelegate& OnSlotDeleted, USaveSlotObject* slot) \
{ \
	_Script_SavgaProject_eventOnSlotDeleted_Parms Parms; \
	Parms.slot=slot; \
	OnSlotDeleted.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define SavgaProject_Source_SavgaProject_SaveSlotObject_h_17_SPARSE_DATA
#define SavgaProject_Source_SavgaProject_SaveSlotObject_h_17_RPC_WRAPPERS
#define SavgaProject_Source_SavgaProject_SaveSlotObject_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define SavgaProject_Source_SavgaProject_SaveSlotObject_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSaveSlotObject(); \
	friend struct Z_Construct_UClass_USaveSlotObject_Statics; \
public: \
	DECLARE_CLASS(USaveSlotObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SavgaProject"), NO_API) \
	DECLARE_SERIALIZER(USaveSlotObject)


#define SavgaProject_Source_SavgaProject_SaveSlotObject_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSaveSlotObject(); \
	friend struct Z_Construct_UClass_USaveSlotObject_Statics; \
public: \
	DECLARE_CLASS(USaveSlotObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SavgaProject"), NO_API) \
	DECLARE_SERIALIZER(USaveSlotObject)


#define SavgaProject_Source_SavgaProject_SaveSlotObject_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveSlotObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveSlotObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveSlotObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveSlotObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveSlotObject(USaveSlotObject&&); \
	NO_API USaveSlotObject(const USaveSlotObject&); \
public:


#define SavgaProject_Source_SavgaProject_SaveSlotObject_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveSlotObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveSlotObject(USaveSlotObject&&); \
	NO_API USaveSlotObject(const USaveSlotObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveSlotObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveSlotObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveSlotObject)


#define SavgaProject_Source_SavgaProject_SaveSlotObject_h_17_PRIVATE_PROPERTY_OFFSET
#define SavgaProject_Source_SavgaProject_SaveSlotObject_h_14_PROLOG
#define SavgaProject_Source_SavgaProject_SaveSlotObject_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SavgaProject_Source_SavgaProject_SaveSlotObject_h_17_PRIVATE_PROPERTY_OFFSET \
	SavgaProject_Source_SavgaProject_SaveSlotObject_h_17_SPARSE_DATA \
	SavgaProject_Source_SavgaProject_SaveSlotObject_h_17_RPC_WRAPPERS \
	SavgaProject_Source_SavgaProject_SaveSlotObject_h_17_INCLASS \
	SavgaProject_Source_SavgaProject_SaveSlotObject_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SavgaProject_Source_SavgaProject_SaveSlotObject_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SavgaProject_Source_SavgaProject_SaveSlotObject_h_17_PRIVATE_PROPERTY_OFFSET \
	SavgaProject_Source_SavgaProject_SaveSlotObject_h_17_SPARSE_DATA \
	SavgaProject_Source_SavgaProject_SaveSlotObject_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	SavgaProject_Source_SavgaProject_SaveSlotObject_h_17_INCLASS_NO_PURE_DECLS \
	SavgaProject_Source_SavgaProject_SaveSlotObject_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAVGAPROJECT_API UClass* StaticClass<class USaveSlotObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SavgaProject_Source_SavgaProject_SaveSlotObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
