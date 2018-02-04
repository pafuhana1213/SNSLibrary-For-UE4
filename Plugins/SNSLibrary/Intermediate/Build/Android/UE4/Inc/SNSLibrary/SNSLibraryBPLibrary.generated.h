// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SNSLIBRARY_SNSLibraryBPLibrary_generated_h
#error "SNSLibraryBPLibrary.generated.h already included, missing '#pragma once' in SNSLibraryBPLibrary.h"
#endif
#define SNSLIBRARY_SNSLibraryBPLibrary_generated_h

#define SNSLibrary_For_UE4_Plugins_SNSLibrary_Source_SNSLibrary_Public_SNSLibraryBPLibrary_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSaveScreenShot) \
	{ \
		P_GET_UBOOL(Z_Param_bInShowUI); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FolderName); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutFilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USNSLibraryBPLibrary::SaveScreenShot(Z_Param_bInShowUI,Z_Param_FolderName,Z_Param_Out_OutFilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallAndroidMediaScan) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USNSLibraryBPLibrary::CallAndroidMediaScan(Z_Param_FilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendDataToSNS) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Text); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ImageFilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USNSLibraryBPLibrary::SendDataToSNS(Z_Param_Text,Z_Param_ImageFilePath); \
		P_NATIVE_END; \
	}


#define SNSLibrary_For_UE4_Plugins_SNSLibrary_Source_SNSLibrary_Public_SNSLibraryBPLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSaveScreenShot) \
	{ \
		P_GET_UBOOL(Z_Param_bInShowUI); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FolderName); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutFilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USNSLibraryBPLibrary::SaveScreenShot(Z_Param_bInShowUI,Z_Param_FolderName,Z_Param_Out_OutFilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallAndroidMediaScan) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USNSLibraryBPLibrary::CallAndroidMediaScan(Z_Param_FilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendDataToSNS) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Text); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ImageFilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USNSLibraryBPLibrary::SendDataToSNS(Z_Param_Text,Z_Param_ImageFilePath); \
		P_NATIVE_END; \
	}


#define SNSLibrary_For_UE4_Plugins_SNSLibrary_Source_SNSLibrary_Public_SNSLibraryBPLibrary_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSNSLibraryBPLibrary(); \
	friend SNSLIBRARY_API class UClass* Z_Construct_UClass_USNSLibraryBPLibrary(); \
public: \
	DECLARE_CLASS(USNSLibraryBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SNSLibrary"), NO_API) \
	DECLARE_SERIALIZER(USNSLibraryBPLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SNSLibrary_For_UE4_Plugins_SNSLibrary_Source_SNSLibrary_Public_SNSLibraryBPLibrary_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUSNSLibraryBPLibrary(); \
	friend SNSLIBRARY_API class UClass* Z_Construct_UClass_USNSLibraryBPLibrary(); \
public: \
	DECLARE_CLASS(USNSLibraryBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SNSLibrary"), NO_API) \
	DECLARE_SERIALIZER(USNSLibraryBPLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SNSLibrary_For_UE4_Plugins_SNSLibrary_Source_SNSLibrary_Public_SNSLibraryBPLibrary_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USNSLibraryBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USNSLibraryBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USNSLibraryBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USNSLibraryBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USNSLibraryBPLibrary(USNSLibraryBPLibrary&&); \
	NO_API USNSLibraryBPLibrary(const USNSLibraryBPLibrary&); \
public:


#define SNSLibrary_For_UE4_Plugins_SNSLibrary_Source_SNSLibrary_Public_SNSLibraryBPLibrary_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USNSLibraryBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USNSLibraryBPLibrary(USNSLibraryBPLibrary&&); \
	NO_API USNSLibraryBPLibrary(const USNSLibraryBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USNSLibraryBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USNSLibraryBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USNSLibraryBPLibrary)


#define SNSLibrary_For_UE4_Plugins_SNSLibrary_Source_SNSLibrary_Public_SNSLibraryBPLibrary_h_23_PRIVATE_PROPERTY_OFFSET
#define SNSLibrary_For_UE4_Plugins_SNSLibrary_Source_SNSLibrary_Public_SNSLibraryBPLibrary_h_20_PROLOG
#define SNSLibrary_For_UE4_Plugins_SNSLibrary_Source_SNSLibrary_Public_SNSLibraryBPLibrary_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SNSLibrary_For_UE4_Plugins_SNSLibrary_Source_SNSLibrary_Public_SNSLibraryBPLibrary_h_23_PRIVATE_PROPERTY_OFFSET \
	SNSLibrary_For_UE4_Plugins_SNSLibrary_Source_SNSLibrary_Public_SNSLibraryBPLibrary_h_23_RPC_WRAPPERS \
	SNSLibrary_For_UE4_Plugins_SNSLibrary_Source_SNSLibrary_Public_SNSLibraryBPLibrary_h_23_INCLASS \
	SNSLibrary_For_UE4_Plugins_SNSLibrary_Source_SNSLibrary_Public_SNSLibraryBPLibrary_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SNSLibrary_For_UE4_Plugins_SNSLibrary_Source_SNSLibrary_Public_SNSLibraryBPLibrary_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SNSLibrary_For_UE4_Plugins_SNSLibrary_Source_SNSLibrary_Public_SNSLibraryBPLibrary_h_23_PRIVATE_PROPERTY_OFFSET \
	SNSLibrary_For_UE4_Plugins_SNSLibrary_Source_SNSLibrary_Public_SNSLibraryBPLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	SNSLibrary_For_UE4_Plugins_SNSLibrary_Source_SNSLibrary_Public_SNSLibraryBPLibrary_h_23_INCLASS_NO_PURE_DECLS \
	SNSLibrary_For_UE4_Plugins_SNSLibrary_Source_SNSLibrary_Public_SNSLibraryBPLibrary_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SNSLibraryBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SNSLibrary_For_UE4_Plugins_SNSLibrary_Source_SNSLibrary_Public_SNSLibraryBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
