// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SavgaProject/SaveManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveManager() {}
// Cross Module References
	SAVGAPROJECT_API UClass* Z_Construct_UClass_USaveManager_NoRegister();
	SAVGAPROJECT_API UClass* Z_Construct_UClass_USaveManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SavgaProject();
	SAVGAPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSaveMetadata();
// End Cross Module References
	DEFINE_FUNCTION(USaveManager::execGetAllSaveMetadata)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSaveMetadata>*)Z_Param__Result=USaveManager::GetAllSaveMetadata();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveManager::execGetCurrentSaveSlot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USaveManager::GetCurrentSaveSlot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveManager::execSetCurrentSaveSlot)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_slot);
		P_FINISH;
		P_NATIVE_BEGIN;
		USaveManager::SetCurrentSaveSlot(Z_Param_slot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveManager::execGetNewSaveSlot)
	{
		P_GET_UBOOL_REF(Z_Param_Out_slot_found);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USaveManager::GetNewSaveSlot(Z_Param_Out_slot_found);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveManager::execDeleteSlot)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_slot);
		P_FINISH;
		P_NATIVE_BEGIN;
		USaveManager::DeleteSlot(Z_Param_slot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveManager::execLoadGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		USaveManager::LoadGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveManager::execSaveGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		USaveManager::SaveGame();
		P_NATIVE_END;
	}
	void USaveManager::StaticRegisterNativesUSaveManager()
	{
		UClass* Class = USaveManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeleteSlot", &USaveManager::execDeleteSlot },
			{ "GetAllSaveMetadata", &USaveManager::execGetAllSaveMetadata },
			{ "GetCurrentSaveSlot", &USaveManager::execGetCurrentSaveSlot },
			{ "GetNewSaveSlot", &USaveManager::execGetNewSaveSlot },
			{ "LoadGame", &USaveManager::execLoadGame },
			{ "SaveGame", &USaveManager::execSaveGame },
			{ "SetCurrentSaveSlot", &USaveManager::execSetCurrentSaveSlot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USaveManager_DeleteSlot_Statics
	{
		struct SaveManager_eventDeleteSlot_Parms
		{
			FString slot;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_slot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_slot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_DeleteSlot_Statics::NewProp_slot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveManager_DeleteSlot_Statics::NewProp_slot = { "slot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveManager_eventDeleteSlot_Parms, slot), METADATA_PARAMS(Z_Construct_UFunction_USaveManager_DeleteSlot_Statics::NewProp_slot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_DeleteSlot_Statics::NewProp_slot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_DeleteSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_DeleteSlot_Statics::NewProp_slot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_DeleteSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveAndLoad" },
		{ "Comment", "// Deletes the specified slot.\n" },
		{ "ModuleRelativePath", "SaveManager.h" },
		{ "ToolTip", "Deletes the specified slot." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_DeleteSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "DeleteSlot", nullptr, nullptr, sizeof(SaveManager_eventDeleteSlot_Parms), Z_Construct_UFunction_USaveManager_DeleteSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_DeleteSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_DeleteSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_DeleteSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveManager_DeleteSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveManager_DeleteSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveManager_GetAllSaveMetadata_Statics
	{
		struct SaveManager_eventGetAllSaveMetadata_Parms
		{
			TArray<FSaveMetadata> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveManager_GetAllSaveMetadata_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSaveMetadata, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveManager_GetAllSaveMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveManager_eventGetAllSaveMetadata_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_GetAllSaveMetadata_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_GetAllSaveMetadata_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_GetAllSaveMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_GetAllSaveMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveAndLoad" },
		{ "Comment", "// Gets all the saved games.\n" },
		{ "ModuleRelativePath", "SaveManager.h" },
		{ "ToolTip", "Gets all the saved games." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_GetAllSaveMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "GetAllSaveMetadata", nullptr, nullptr, sizeof(SaveManager_eventGetAllSaveMetadata_Parms), Z_Construct_UFunction_USaveManager_GetAllSaveMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_GetAllSaveMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_GetAllSaveMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_GetAllSaveMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveManager_GetAllSaveMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveManager_GetAllSaveMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveManager_GetCurrentSaveSlot_Statics
	{
		struct SaveManager_eventGetCurrentSaveSlot_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveManager_GetCurrentSaveSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveManager_eventGetCurrentSaveSlot_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_GetCurrentSaveSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_GetCurrentSaveSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_GetCurrentSaveSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveAndLoad" },
		{ "Comment", "// Gets the current save slot to the specified value.\n" },
		{ "ModuleRelativePath", "SaveManager.h" },
		{ "ToolTip", "Gets the current save slot to the specified value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_GetCurrentSaveSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "GetCurrentSaveSlot", nullptr, nullptr, sizeof(SaveManager_eventGetCurrentSaveSlot_Parms), Z_Construct_UFunction_USaveManager_GetCurrentSaveSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_GetCurrentSaveSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_GetCurrentSaveSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_GetCurrentSaveSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveManager_GetCurrentSaveSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveManager_GetCurrentSaveSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveManager_GetNewSaveSlot_Statics
	{
		struct SaveManager_eventGetNewSaveSlot_Parms
		{
			bool slot_found;
			FString ReturnValue;
		};
		static void NewProp_slot_found_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_slot_found;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveManager_GetNewSaveSlot_Statics::NewProp_slot_found_SetBit(void* Obj)
	{
		((SaveManager_eventGetNewSaveSlot_Parms*)Obj)->slot_found = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveManager_GetNewSaveSlot_Statics::NewProp_slot_found = { "slot_found", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveManager_eventGetNewSaveSlot_Parms), &Z_Construct_UFunction_USaveManager_GetNewSaveSlot_Statics::NewProp_slot_found_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_GetNewSaveSlot_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Slot" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveManager_GetNewSaveSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveManager_eventGetNewSaveSlot_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_USaveManager_GetNewSaveSlot_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_GetNewSaveSlot_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_GetNewSaveSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_GetNewSaveSlot_Statics::NewProp_slot_found,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_GetNewSaveSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_GetNewSaveSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveAndLoad" },
		{ "Comment", "// Get a new, unused slot.\n" },
		{ "ModuleRelativePath", "SaveManager.h" },
		{ "ToolTip", "Get a new, unused slot." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_GetNewSaveSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "GetNewSaveSlot", nullptr, nullptr, sizeof(SaveManager_eventGetNewSaveSlot_Parms), Z_Construct_UFunction_USaveManager_GetNewSaveSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_GetNewSaveSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_GetNewSaveSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_GetNewSaveSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveManager_GetNewSaveSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveManager_GetNewSaveSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveManager_LoadGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_LoadGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveAndLoad" },
		{ "Comment", "// Loads the current state of the game.\n" },
		{ "ModuleRelativePath", "SaveManager.h" },
		{ "ToolTip", "Loads the current state of the game." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_LoadGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "LoadGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_LoadGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_LoadGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveManager_LoadGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveManager_LoadGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveManager_SaveGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_SaveGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveAndLoad" },
		{ "Comment", "// Saves the current state of the game.\n" },
		{ "ModuleRelativePath", "SaveManager.h" },
		{ "ToolTip", "Saves the current state of the game." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_SaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "SaveGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_SaveGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_SaveGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveManager_SaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveManager_SaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveManager_SetCurrentSaveSlot_Statics
	{
		struct SaveManager_eventSetCurrentSaveSlot_Parms
		{
			FString slot;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_slot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_slot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_SetCurrentSaveSlot_Statics::NewProp_slot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveManager_SetCurrentSaveSlot_Statics::NewProp_slot = { "slot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveManager_eventSetCurrentSaveSlot_Parms, slot), METADATA_PARAMS(Z_Construct_UFunction_USaveManager_SetCurrentSaveSlot_Statics::NewProp_slot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_SetCurrentSaveSlot_Statics::NewProp_slot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_SetCurrentSaveSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_SetCurrentSaveSlot_Statics::NewProp_slot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_SetCurrentSaveSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveAndLoad" },
		{ "Comment", "// Sets the current save slot to the specified value.\n" },
		{ "ModuleRelativePath", "SaveManager.h" },
		{ "ToolTip", "Sets the current save slot to the specified value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_SetCurrentSaveSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "SetCurrentSaveSlot", nullptr, nullptr, sizeof(SaveManager_eventSetCurrentSaveSlot_Parms), Z_Construct_UFunction_USaveManager_SetCurrentSaveSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_SetCurrentSaveSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_SetCurrentSaveSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_SetCurrentSaveSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveManager_SetCurrentSaveSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveManager_SetCurrentSaveSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USaveManager_NoRegister()
	{
		return USaveManager::StaticClass();
	}
	struct Z_Construct_UClass_USaveManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SavgaProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USaveManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveManager_DeleteSlot, "DeleteSlot" }, // 1712627227
		{ &Z_Construct_UFunction_USaveManager_GetAllSaveMetadata, "GetAllSaveMetadata" }, // 895629326
		{ &Z_Construct_UFunction_USaveManager_GetCurrentSaveSlot, "GetCurrentSaveSlot" }, // 3124230348
		{ &Z_Construct_UFunction_USaveManager_GetNewSaveSlot, "GetNewSaveSlot" }, // 2860207998
		{ &Z_Construct_UFunction_USaveManager_LoadGame, "LoadGame" }, // 3564630701
		{ &Z_Construct_UFunction_USaveManager_SaveGame, "SaveGame" }, // 3025116510
		{ &Z_Construct_UFunction_USaveManager_SetCurrentSaveSlot, "SetCurrentSaveSlot" }, // 1920837067
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SaveManager.h" },
		{ "ModuleRelativePath", "SaveManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveManager_Statics::ClassParams = {
		&USaveManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveManager, 84523666);
	template<> SAVGAPROJECT_API UClass* StaticClass<USaveManager>()
	{
		return USaveManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveManager(Z_Construct_UClass_USaveManager, &USaveManager::StaticClass, TEXT("/Script/SavgaProject"), TEXT("USaveManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
