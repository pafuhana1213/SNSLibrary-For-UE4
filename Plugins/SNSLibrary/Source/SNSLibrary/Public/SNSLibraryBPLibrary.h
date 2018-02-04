// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"

#if PLATFORM_ANDROID
#include "Android/AndroidJNI.h"
#include "Android/AndroidApplication.h"
#include <android_native_app_glue.h>
#endif

#include "EngineMinimal.h"
#include "Core.h"

#include "SNSLibraryBPLibrary.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogSNSLib, Log, All);

UCLASS()
class USNSLibraryBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

public:

	/** Send text and image files to specified SNS
	 *  Note: Other than Android sends forced to Twitter. And image is not supported yet
	 */
	UFUNCTION(BlueprintCallable, meta = (Category = "SNSLibrary"))
	static void SendDataToSNS(const FString& Text, const FString& ImageFilePath);

	/** call media scan to register the specified file in the gallery. 
	 *  Only for Android
	 */
	UFUNCTION(BlueprintCallable, meta = (Category = "SNSLibrary"))
	static void  CallAndroidMediaScan(const FString& FilePath);

	/** Output a screenshot to a specific path
	 *  It is specialized in SNSLibrary
	 */
	UFUNCTION(BlueprintCallable, meta = (Category = "SNSLibrary"))
	static void  SaveScreenShot(bool bInShowUI, const FString& FolderName, FString& OutFilePath);


private:

	static FString GetPictureFolderPath();

#if PLATFORM_ANDROID

	// detail https://qiita.com/shiena/items/9f380d6d026206653f52
	static bool ConvertToAndroidRelativePath(FString InPath, FString& OutPath);

	static jmethodID CallIntentSNSMethod;
	static jmethodID CallIntentMediaScanMethod;
	static jmethodID GetPictureFolderPathMethod;
#endif

};
