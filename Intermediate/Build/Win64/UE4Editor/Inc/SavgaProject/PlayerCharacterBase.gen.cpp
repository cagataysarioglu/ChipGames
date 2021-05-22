// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SavgaProject/PlayerCharacterBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCharacterBase() {}
// Cross Module References
	SAVGAPROJECT_API UClass* Z_Construct_UClass_APlayerCharacterBase_NoRegister();
	SAVGAPROJECT_API UClass* Z_Construct_UClass_APlayerCharacterBase();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_SavgaProject();
// End Cross Module References
	void APlayerCharacterBase::StaticRegisterNativesAPlayerCharacterBase()
	{
	}
	UClass* Z_Construct_UClass_APlayerCharacterBase_NoRegister()
	{
		return APlayerCharacterBase::StaticClass();
	}
	struct Z_Construct_UClass_APlayerCharacterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthPack_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_HealthPack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_DoorKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_QuestItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_QuestText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerCharacterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SavgaProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacterBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerCharacterBase.h" },
		{ "ModuleRelativePath", "PlayerCharacterBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "PlayerCharacterBase" },
		{ "Comment", "// The properties of player's status and inventory\n" },
		{ "ModuleRelativePath", "PlayerCharacterBase.h" },
		{ "ToolTip", "The properties of player's status and inventory" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerCharacterBase, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "PlayerCharacterBase" },
		{ "ModuleRelativePath", "PlayerCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerCharacterBase, CurrentHealth), METADATA_PARAMS(Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_CurrentHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_CurrentHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_HealthPack_MetaData[] = {
		{ "Category", "PlayerCharacterBase" },
		{ "ModuleRelativePath", "PlayerCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_HealthPack = { "HealthPack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerCharacterBase, HealthPack), METADATA_PARAMS(Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_HealthPack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_HealthPack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_DoorKey_MetaData[] = {
		{ "Category", "PlayerCharacterBase" },
		{ "ModuleRelativePath", "PlayerCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_DoorKey = { "DoorKey", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerCharacterBase, DoorKey), METADATA_PARAMS(Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_DoorKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_DoorKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_QuestItem_MetaData[] = {
		{ "Category", "PlayerCharacterBase" },
		{ "ModuleRelativePath", "PlayerCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_QuestItem = { "QuestItem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerCharacterBase, QuestItem), METADATA_PARAMS(Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_QuestItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_QuestItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_QuestText_MetaData[] = {
		{ "Category", "PlayerCharacterBase" },
		{ "ModuleRelativePath", "PlayerCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_QuestText = { "QuestText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerCharacterBase, QuestText), METADATA_PARAMS(Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_QuestText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_QuestText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerCharacterBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_CurrentHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_HealthPack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_DoorKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_QuestItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_QuestText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerCharacterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerCharacterBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerCharacterBase_Statics::ClassParams = {
		&APlayerCharacterBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlayerCharacterBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacterBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerCharacterBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacterBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerCharacterBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerCharacterBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerCharacterBase, 1372187042);
	template<> SAVGAPROJECT_API UClass* StaticClass<APlayerCharacterBase>()
	{
		return APlayerCharacterBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerCharacterBase(Z_Construct_UClass_APlayerCharacterBase, &APlayerCharacterBase::StaticClass, TEXT("/Script/SavgaProject"), TEXT("APlayerCharacterBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerCharacterBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
