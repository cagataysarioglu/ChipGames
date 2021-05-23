// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SAVGAPROJECT_SaveInterface_generated_h
#error "SaveInterface.generated.h already included, missing '#pragma once' in SaveInterface.h"
#endif
#define SAVGAPROJECT_SaveInterface_generated_h

#define SavgaProject_Source_SavgaProject_SaveInterface_h_13_SPARSE_DATA
#define SavgaProject_Source_SavgaProject_SaveInterface_h_13_RPC_WRAPPERS \
	virtual void OnBeforeSave_Implementation() {}; \
	virtual FString GetUniqueSaveName_Implementation() { return TEXT(""); }; \
 \
	DECLARE_FUNCTION(execOnBeforeSave); \
	DECLARE_FUNCTION(execGetUniqueSaveName);


#define SavgaProject_Source_SavgaProject_SaveInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnBeforeSave_Implementation() {}; \
	virtual FString GetUniqueSaveName_Implementation() { return TEXT(""); }; \
 \
	DECLARE_FUNCTION(execOnBeforeSave); \
	DECLARE_FUNCTION(execGetUniqueSaveName);


#define SavgaProject_Source_SavgaProject_SaveInterface_h_13_EVENT_PARMS \
	struct SaveInterface_eventGetUniqueSaveName_Parms \
	{ \
		FString ReturnValue; \
	};


#define SavgaProject_Source_SavgaProject_SaveInterface_h_13_CALLBACK_WRAPPERS
#define SavgaProject_Source_SavgaProject_SaveInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SAVGAPROJECT_API USaveInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SAVGAPROJECT_API, USaveInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SAVGAPROJECT_API USaveInterface(USaveInterface&&); \
	SAVGAPROJECT_API USaveInterface(const USaveInterface&); \
public:


#define SavgaProject_Source_SavgaProject_SaveInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SAVGAPROJECT_API USaveInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SAVGAPROJECT_API USaveInterface(USaveInterface&&); \
	SAVGAPROJECT_API USaveInterface(const USaveInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SAVGAPROJECT_API, USaveInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveInterface)


#define SavgaProject_Source_SavgaProject_SaveInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSaveInterface(); \
	friend struct Z_Construct_UClass_USaveInterface_Statics; \
public: \
	DECLARE_CLASS(USaveInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SavgaProject"), SAVGAPROJECT_API) \
	DECLARE_SERIALIZER(USaveInterface)


#define SavgaProject_Source_SavgaProject_SaveInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	SavgaProject_Source_SavgaProject_SaveInterface_h_13_GENERATED_UINTERFACE_BODY() \
	SavgaProject_Source_SavgaProject_SaveInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SavgaProject_Source_SavgaProject_SaveInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	SavgaProject_Source_SavgaProject_SaveInterface_h_13_GENERATED_UINTERFACE_BODY() \
	SavgaProject_Source_SavgaProject_SaveInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SavgaProject_Source_SavgaProject_SaveInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISaveInterface() {} \
public: \
	typedef USaveInterface UClassType; \
	typedef ISaveInterface ThisClass; \
	static FString Execute_GetUniqueSaveName(UObject* O); \
	static void Execute_OnBeforeSave(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define SavgaProject_Source_SavgaProject_SaveInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~ISaveInterface() {} \
public: \
	typedef USaveInterface UClassType; \
	typedef ISaveInterface ThisClass; \
	static FString Execute_GetUniqueSaveName(UObject* O); \
	static void Execute_OnBeforeSave(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define SavgaProject_Source_SavgaProject_SaveInterface_h_10_PROLOG \
	SavgaProject_Source_SavgaProject_SaveInterface_h_13_EVENT_PARMS


#define SavgaProject_Source_SavgaProject_SaveInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SavgaProject_Source_SavgaProject_SaveInterface_h_13_SPARSE_DATA \
	SavgaProject_Source_SavgaProject_SaveInterface_h_13_RPC_WRAPPERS \
	SavgaProject_Source_SavgaProject_SaveInterface_h_13_CALLBACK_WRAPPERS \
	SavgaProject_Source_SavgaProject_SaveInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SavgaProject_Source_SavgaProject_SaveInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SavgaProject_Source_SavgaProject_SaveInterface_h_13_SPARSE_DATA \
	SavgaProject_Source_SavgaProject_SaveInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	SavgaProject_Source_SavgaProject_SaveInterface_h_13_CALLBACK_WRAPPERS \
	SavgaProject_Source_SavgaProject_SaveInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAVGAPROJECT_API UClass* StaticClass<class USaveInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SavgaProject_Source_SavgaProject_SaveInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
