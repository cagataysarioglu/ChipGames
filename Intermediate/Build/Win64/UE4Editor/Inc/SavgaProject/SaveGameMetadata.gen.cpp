// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SavgaProject/SaveGameMetadata.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveGameMetadata() {}
// Cross Module References
	SAVGAPROJECT_API UClass* Z_Construct_UClass_USaveGameMetadata_NoRegister();
	SAVGAPROJECT_API UClass* Z_Construct_UClass_USaveGameMetadata();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_SavgaProject();
	SAVGAPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSaveMetadata();
// End Cross Module References
	void USaveGameMetadata::StaticRegisterNativesUSaveGameMetadata()
	{
	}
	UClass* Z_Construct_UClass_USaveGameMetadata_NoRegister()
	{
		return USaveGameMetadata::StaticClass();
	}
	struct Z_Construct_UClass_USaveGameMetadata_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SavedGamesMetadata_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SavedGamesMetadata_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SavedGamesMetadata_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SavedGamesMetadata;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveGameMetadata_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_SavgaProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameMetadata_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SaveGameMetadata.h" },
		{ "ModuleRelativePath", "SaveGameMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveGameMetadata_Statics::NewProp_SavedGamesMetadata_ValueProp = { "SavedGamesMetadata", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSaveMetadata, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USaveGameMetadata_Statics::NewProp_SavedGamesMetadata_Key_KeyProp = { "SavedGamesMetadata_Key", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameMetadata_Statics::NewProp_SavedGamesMetadata_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "SaveGameMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USaveGameMetadata_Statics::NewProp_SavedGamesMetadata = { "SavedGamesMetadata", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveGameMetadata, SavedGamesMetadata), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USaveGameMetadata_Statics::NewProp_SavedGamesMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameMetadata_Statics::NewProp_SavedGamesMetadata_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveGameMetadata_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameMetadata_Statics::NewProp_SavedGamesMetadata_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameMetadata_Statics::NewProp_SavedGamesMetadata_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameMetadata_Statics::NewProp_SavedGamesMetadata,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveGameMetadata_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveGameMetadata>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveGameMetadata_Statics::ClassParams = {
		&USaveGameMetadata::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USaveGameMetadata_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameMetadata_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveGameMetadata_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameMetadata_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveGameMetadata()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveGameMetadata_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveGameMetadata, 3026631472);
	template<> SAVGAPROJECT_API UClass* StaticClass<USaveGameMetadata>()
	{
		return USaveGameMetadata::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveGameMetadata(Z_Construct_UClass_USaveGameMetadata, &USaveGameMetadata::StaticClass, TEXT("/Script/SavgaProject"), TEXT("USaveGameMetadata"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveGameMetadata);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
