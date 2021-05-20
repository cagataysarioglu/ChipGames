// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SavgaProject/SavgaSaveGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSavgaSaveGame() {}
// Cross Module References
	SAVGAPROJECT_API UClass* Z_Construct_UClass_USavgaSaveGame_NoRegister();
	SAVGAPROJECT_API UClass* Z_Construct_UClass_USavgaSaveGame();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_SavgaProject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void USavgaSaveGame::StaticRegisterNativesUSavgaSaveGame()
	{
	}
	UClass* Z_Construct_UClass_USavgaSaveGame_NoRegister()
	{
		return USavgaSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_USavgaSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_QuestText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthPack_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_HealthPack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_QuestItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USavgaSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_SavgaProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavgaSaveGame_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SavgaSaveGame.h" },
		{ "ModuleRelativePath", "SavgaSaveGame.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavgaSaveGame_Statics::NewProp_PlayerLocation_MetaData[] = {
		{ "Category", "SavgaSaveGame" },
		{ "ModuleRelativePath", "SavgaSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USavgaSaveGame_Statics::NewProp_PlayerLocation = { "PlayerLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USavgaSaveGame, PlayerLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USavgaSaveGame_Statics::NewProp_PlayerLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavgaSaveGame_Statics::NewProp_PlayerLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavgaSaveGame_Statics::NewProp_QuestText_MetaData[] = {
		{ "Category", "SavgaSaveGame" },
		{ "ModuleRelativePath", "SavgaSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USavgaSaveGame_Statics::NewProp_QuestText = { "QuestText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USavgaSaveGame, QuestText), METADATA_PARAMS(Z_Construct_UClass_USavgaSaveGame_Statics::NewProp_QuestText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavgaSaveGame_Statics::NewProp_QuestText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavgaSaveGame_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "SavgaSaveGame" },
		{ "ModuleRelativePath", "SavgaSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USavgaSaveGame_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USavgaSaveGame, Health), METADATA_PARAMS(Z_Construct_UClass_USavgaSaveGame_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavgaSaveGame_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavgaSaveGame_Statics::NewProp_HealthPack_MetaData[] = {
		{ "Category", "SavgaSaveGame" },
		{ "ModuleRelativePath", "SavgaSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USavgaSaveGame_Statics::NewProp_HealthPack = { "HealthPack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USavgaSaveGame, HealthPack), METADATA_PARAMS(Z_Construct_UClass_USavgaSaveGame_Statics::NewProp_HealthPack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavgaSaveGame_Statics::NewProp_HealthPack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavgaSaveGame_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "SavgaSaveGame" },
		{ "ModuleRelativePath", "SavgaSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USavgaSaveGame_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USavgaSaveGame, Key), METADATA_PARAMS(Z_Construct_UClass_USavgaSaveGame_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavgaSaveGame_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavgaSaveGame_Statics::NewProp_QuestItem_MetaData[] = {
		{ "Category", "SavgaSaveGame" },
		{ "ModuleRelativePath", "SavgaSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USavgaSaveGame_Statics::NewProp_QuestItem = { "QuestItem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USavgaSaveGame, QuestItem), METADATA_PARAMS(Z_Construct_UClass_USavgaSaveGame_Statics::NewProp_QuestItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavgaSaveGame_Statics::NewProp_QuestItem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USavgaSaveGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavgaSaveGame_Statics::NewProp_PlayerLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavgaSaveGame_Statics::NewProp_QuestText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavgaSaveGame_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavgaSaveGame_Statics::NewProp_HealthPack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavgaSaveGame_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavgaSaveGame_Statics::NewProp_QuestItem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USavgaSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USavgaSaveGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USavgaSaveGame_Statics::ClassParams = {
		&USavgaSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USavgaSaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USavgaSaveGame_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USavgaSaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USavgaSaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USavgaSaveGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USavgaSaveGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USavgaSaveGame, 1246501842);
	template<> SAVGAPROJECT_API UClass* StaticClass<USavgaSaveGame>()
	{
		return USavgaSaveGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USavgaSaveGame(Z_Construct_UClass_USavgaSaveGame, &USavgaSaveGame::StaticClass, TEXT("/Script/SavgaProject"), TEXT("USavgaSaveGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USavgaSaveGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
