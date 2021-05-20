// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SavgaProject/SavgaGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSavgaGameInstance() {}
// Cross Module References
	SAVGAPROJECT_API UClass* Z_Construct_UClass_USavgaGameInstance_NoRegister();
	SAVGAPROJECT_API UClass* Z_Construct_UClass_USavgaGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_SavgaProject();
// End Cross Module References
	void USavgaGameInstance::StaticRegisterNativesUSavgaGameInstance()
	{
	}
	UClass* Z_Construct_UClass_USavgaGameInstance_NoRegister()
	{
		return USavgaGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_USavgaGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USavgaGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_SavgaProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavgaGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SavgaGameInstance.h" },
		{ "ModuleRelativePath", "SavgaGameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USavgaGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USavgaGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USavgaGameInstance_Statics::ClassParams = {
		&USavgaGameInstance::StaticClass,
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
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USavgaGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USavgaGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USavgaGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USavgaGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USavgaGameInstance, 1919919447);
	template<> SAVGAPROJECT_API UClass* StaticClass<USavgaGameInstance>()
	{
		return USavgaGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USavgaGameInstance(Z_Construct_UClass_USavgaGameInstance, &USavgaGameInstance::StaticClass, TEXT("/Script/SavgaProject"), TEXT("USavgaGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USavgaGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
