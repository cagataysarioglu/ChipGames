// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SavgaProject/SaveGameData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveGameData() {}
// Cross Module References
	SAVGAPROJECT_API UClass* Z_Construct_UClass_USaveGameData_NoRegister();
	SAVGAPROJECT_API UClass* Z_Construct_UClass_USaveGameData();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_SavgaProject();
// End Cross Module References
	void USaveGameData::StaticRegisterNativesUSaveGameData()
	{
	}
	UClass* Z_Construct_UClass_USaveGameData_NoRegister()
	{
		return USaveGameData::StaticClass();
	}
	struct Z_Construct_UClass_USaveGameData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveGameData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_SavgaProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SaveGameData.h" },
		{ "ModuleRelativePath", "SaveGameData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveGameData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveGameData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveGameData_Statics::ClassParams = {
		&USaveGameData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveGameData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveGameData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveGameData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveGameData, 1359938358);
	template<> SAVGAPROJECT_API UClass* StaticClass<USaveGameData>()
	{
		return USaveGameData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveGameData(Z_Construct_UClass_USaveGameData, &USaveGameData::StaticClass, TEXT("/Script/SavgaProject"), TEXT("USaveGameData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveGameData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
