// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SavgaProject/SaveInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveInterface() {}
// Cross Module References
	SAVGAPROJECT_API UClass* Z_Construct_UClass_USaveInterface_NoRegister();
	SAVGAPROJECT_API UClass* Z_Construct_UClass_USaveInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_SavgaProject();
// End Cross Module References
	DEFINE_FUNCTION(ISaveInterface::execOnBeforeSave)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeforeSave_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISaveInterface::execGetUniqueSaveName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetUniqueSaveName_Implementation();
		P_NATIVE_END;
	}
	FString ISaveInterface::GetUniqueSaveName()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetUniqueSaveName instead.");
		SaveInterface_eventGetUniqueSaveName_Parms Parms;
		return Parms.ReturnValue;
	}
	void ISaveInterface::OnBeforeSave()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnBeforeSave instead.");
	}
	void USaveInterface::StaticRegisterNativesUSaveInterface()
	{
		UClass* Class = USaveInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetUniqueSaveName", &ISaveInterface::execGetUniqueSaveName },
			{ "OnBeforeSave", &ISaveInterface::execOnBeforeSave },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USaveInterface_GetUniqueSaveName_Statics
	{
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveInterface_GetUniqueSaveName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveInterface_eventGetUniqueSaveName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveInterface_GetUniqueSaveName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveInterface_GetUniqueSaveName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveInterface_GetUniqueSaveName_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveInterface" },
		{ "Comment", "// Get a unique name to use when saving.\n" },
		{ "ModuleRelativePath", "SaveInterface.h" },
		{ "ToolTip", "Get a unique name to use when saving." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveInterface_GetUniqueSaveName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveInterface, nullptr, "GetUniqueSaveName", nullptr, nullptr, sizeof(SaveInterface_eventGetUniqueSaveName_Parms), Z_Construct_UFunction_USaveInterface_GetUniqueSaveName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_GetUniqueSaveName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveInterface_GetUniqueSaveName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_GetUniqueSaveName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveInterface_GetUniqueSaveName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveInterface_GetUniqueSaveName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveInterface_OnBeforeSave_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveInterface_OnBeforeSave_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveInterface" },
		{ "Comment", "// Called right before the owning actor is saved.\n" },
		{ "ModuleRelativePath", "SaveInterface.h" },
		{ "ToolTip", "Called right before the owning actor is saved." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveInterface_OnBeforeSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveInterface, nullptr, "OnBeforeSave", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveInterface_OnBeforeSave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_OnBeforeSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveInterface_OnBeforeSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveInterface_OnBeforeSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USaveInterface_NoRegister()
	{
		return USaveInterface::StaticClass();
	}
	struct Z_Construct_UClass_USaveInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_SavgaProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USaveInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveInterface_GetUniqueSaveName, "GetUniqueSaveName" }, // 1593060390
		{ &Z_Construct_UFunction_USaveInterface_OnBeforeSave, "OnBeforeSave" }, // 1205182749
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "SaveInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISaveInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveInterface_Statics::ClassParams = {
		&USaveInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_USaveInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveInterface, 4146383761);
	template<> SAVGAPROJECT_API UClass* StaticClass<USaveInterface>()
	{
		return USaveInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveInterface(Z_Construct_UClass_USaveInterface, &USaveInterface::StaticClass, TEXT("/Script/SavgaProject"), TEXT("USaveInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveInterface);
	static FName NAME_USaveInterface_GetUniqueSaveName = FName(TEXT("GetUniqueSaveName"));
	FString ISaveInterface::Execute_GetUniqueSaveName(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USaveInterface::StaticClass()));
		SaveInterface_eventGetUniqueSaveName_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USaveInterface_GetUniqueSaveName);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISaveInterface*)(O->GetNativeInterfaceAddress(USaveInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetUniqueSaveName_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_USaveInterface_OnBeforeSave = FName(TEXT("OnBeforeSave"));
	void ISaveInterface::Execute_OnBeforeSave(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USaveInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_USaveInterface_OnBeforeSave);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (ISaveInterface*)(O->GetNativeInterfaceAddress(USaveInterface::StaticClass())))
		{
			I->OnBeforeSave_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
