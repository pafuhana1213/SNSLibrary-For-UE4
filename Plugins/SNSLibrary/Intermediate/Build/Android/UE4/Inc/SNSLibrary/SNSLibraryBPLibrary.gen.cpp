// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SNSLibraryBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSNSLibraryBPLibrary() {}
// Cross Module References
	SNSLIBRARY_API UClass* Z_Construct_UClass_USNSLibraryBPLibrary_NoRegister();
	SNSLIBRARY_API UClass* Z_Construct_UClass_USNSLibraryBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_SNSLibrary();
	SNSLIBRARY_API UFunction* Z_Construct_UFunction_USNSLibraryBPLibrary_CallAndroidMediaScan();
	SNSLIBRARY_API UFunction* Z_Construct_UFunction_USNSLibraryBPLibrary_SaveScreenShot();
	SNSLIBRARY_API UFunction* Z_Construct_UFunction_USNSLibraryBPLibrary_SendDataToSNS();
// End Cross Module References
	void USNSLibraryBPLibrary::StaticRegisterNativesUSNSLibraryBPLibrary()
	{
		UClass* Class = USNSLibraryBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallAndroidMediaScan", (Native)&USNSLibraryBPLibrary::execCallAndroidMediaScan },
			{ "SaveScreenShot", (Native)&USNSLibraryBPLibrary::execSaveScreenShot },
			{ "SendDataToSNS", (Native)&USNSLibraryBPLibrary::execSendDataToSNS },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_USNSLibraryBPLibrary_CallAndroidMediaScan()
	{
		struct SNSLibraryBPLibrary_eventCallAndroidMediaScan_Parms
		{
			FString FilePath;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath = { UE4CodeGen_Private::EPropertyClass::Str, "FilePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SNSLibraryBPLibrary_eventCallAndroidMediaScan_Parms, FilePath), METADATA_PARAMS(NewProp_FilePath_MetaData, ARRAY_COUNT(NewProp_FilePath_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FilePath,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SNSLibrary" },
				{ "ModuleRelativePath", "Public/SNSLibraryBPLibrary.h" },
				{ "ToolTip", "call media scan to register the specified file in the gallery.\nOnly for Android" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USNSLibraryBPLibrary, "CallAndroidMediaScan", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(SNSLibraryBPLibrary_eventCallAndroidMediaScan_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USNSLibraryBPLibrary_SaveScreenShot()
	{
		struct SNSLibraryBPLibrary_eventSaveScreenShot_Parms
		{
			bool bInShowUI;
			FString FolderName;
			FString OutFilePath;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutFilePath = { UE4CodeGen_Private::EPropertyClass::Str, "OutFilePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(SNSLibraryBPLibrary_eventSaveScreenShot_Parms, OutFilePath), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FolderName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_FolderName = { UE4CodeGen_Private::EPropertyClass::Str, "FolderName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SNSLibraryBPLibrary_eventSaveScreenShot_Parms, FolderName), METADATA_PARAMS(NewProp_FolderName_MetaData, ARRAY_COUNT(NewProp_FolderName_MetaData)) };
			auto NewProp_bInShowUI_SetBit = [](void* Obj){ ((SNSLibraryBPLibrary_eventSaveScreenShot_Parms*)Obj)->bInShowUI = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInShowUI = { UE4CodeGen_Private::EPropertyClass::Bool, "bInShowUI", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SNSLibraryBPLibrary_eventSaveScreenShot_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInShowUI_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutFilePath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FolderName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInShowUI,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SNSLibrary" },
				{ "ModuleRelativePath", "Public/SNSLibraryBPLibrary.h" },
				{ "ToolTip", "Output a screenshot to a specific path\nIt is specialized in SNSLibrary" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USNSLibraryBPLibrary, "SaveScreenShot", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(SNSLibraryBPLibrary_eventSaveScreenShot_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USNSLibraryBPLibrary_SendDataToSNS()
	{
		struct SNSLibraryBPLibrary_eventSendDataToSNS_Parms
		{
			FString Text;
			FString ImageFilePath;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageFilePath_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ImageFilePath = { UE4CodeGen_Private::EPropertyClass::Str, "ImageFilePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SNSLibraryBPLibrary_eventSendDataToSNS_Parms, ImageFilePath), METADATA_PARAMS(NewProp_ImageFilePath_MetaData, ARRAY_COUNT(NewProp_ImageFilePath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text = { UE4CodeGen_Private::EPropertyClass::Str, "Text", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SNSLibraryBPLibrary_eventSendDataToSNS_Parms, Text), METADATA_PARAMS(NewProp_Text_MetaData, ARRAY_COUNT(NewProp_Text_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImageFilePath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Text,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SNSLibrary" },
				{ "ModuleRelativePath", "Public/SNSLibraryBPLibrary.h" },
				{ "ToolTip", "Send text and image files to specified SNS\nNote: Other than Android sends forced to Twitter. And image is not supported yet" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USNSLibraryBPLibrary, "SendDataToSNS", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(SNSLibraryBPLibrary_eventSendDataToSNS_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USNSLibraryBPLibrary_NoRegister()
	{
		return USNSLibraryBPLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_USNSLibraryBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_SNSLibrary,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_USNSLibraryBPLibrary_CallAndroidMediaScan, "CallAndroidMediaScan" }, // 15451259
				{ &Z_Construct_UFunction_USNSLibraryBPLibrary_SaveScreenShot, "SaveScreenShot" }, // 3599027888
				{ &Z_Construct_UFunction_USNSLibraryBPLibrary_SendDataToSNS, "SendDataToSNS" }, // 819673285
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "SNSLibraryBPLibrary.h" },
				{ "ModuleRelativePath", "Public/SNSLibraryBPLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USNSLibraryBPLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USNSLibraryBPLibrary::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USNSLibraryBPLibrary, 3533178742);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USNSLibraryBPLibrary(Z_Construct_UClass_USNSLibraryBPLibrary, &USNSLibraryBPLibrary::StaticClass, TEXT("/Script/SNSLibrary"), TEXT("USNSLibraryBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USNSLibraryBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
