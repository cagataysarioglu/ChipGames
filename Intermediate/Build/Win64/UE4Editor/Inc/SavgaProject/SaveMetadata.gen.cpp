// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SavgaProject/SaveMetadata.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveMetadata() {}
// Cross Module References
	SAVGAPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSaveMetadata();
	UPackage* Z_Construct_UPackage__Script_SavgaProject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FSaveMetadata::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SAVGAPROJECT_API uint32 Get_Z_Construct_UScriptStruct_FSaveMetadata_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSaveMetadata, Z_Construct_UPackage__Script_SavgaProject(), TEXT("SaveMetadata"), sizeof(FSaveMetadata), Get_Z_Construct_UScriptStruct_FSaveMetadata_Hash());
	}
	return Singleton;
}
template<> SAVGAPROJECT_API UScriptStruct* StaticStruct<FSaveMetadata>()
{
	return FSaveMetadata::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSaveMetadata(FSaveMetadata::StaticStruct, TEXT("/Script/SavgaProject"), TEXT("SaveMetadata"), false, nullptr, nullptr);
static struct FScriptStruct_SavgaProject_StaticRegisterNativesFSaveMetadata
{
	FScriptStruct_SavgaProject_StaticRegisterNativesFSaveMetadata()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SaveMetadata")),new UScriptStruct::TCppStructOps<FSaveMetadata>);
	}
} ScriptStruct_SavgaProject_StaticRegisterNativesFSaveMetadata;
	struct Z_Construct_UScriptStruct_FSaveMetadata_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SlotName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Date_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Date;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveMetadata_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SaveMetadata.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSaveMetadata_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSaveMetadata>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveMetadata_Statics::NewProp_SlotName_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// The name of the slot\n" },
		{ "ModuleRelativePath", "SaveMetadata.h" },
		{ "ToolTip", "The name of the slot" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSaveMetadata_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveMetadata, SlotName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveMetadata_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveMetadata_Statics::NewProp_SlotName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveMetadata_Statics::NewProp_Date_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// The date that the slot was created or the game was saved\n" },
		{ "ModuleRelativePath", "SaveMetadata.h" },
		{ "ToolTip", "The date that the slot was created or the game was saved" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSaveMetadata_Statics::NewProp_Date = { "Date", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveMetadata, Date), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveMetadata_Statics::NewProp_Date_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveMetadata_Statics::NewProp_Date_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSaveMetadata_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveMetadata_Statics::NewProp_SlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveMetadata_Statics::NewProp_Date,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSaveMetadata_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SavgaProject,
		nullptr,
		&NewStructOps,
		"SaveMetadata",
		sizeof(FSaveMetadata),
		alignof(FSaveMetadata),
		Z_Construct_UScriptStruct_FSaveMetadata_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveMetadata_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveMetadata_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveMetadata_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSaveMetadata()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSaveMetadata_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SavgaProject();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SaveMetadata"), sizeof(FSaveMetadata), Get_Z_Construct_UScriptStruct_FSaveMetadata_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSaveMetadata_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSaveMetadata_Hash() { return 2408904817U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
