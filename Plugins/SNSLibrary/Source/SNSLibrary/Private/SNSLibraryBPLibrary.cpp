// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "SNSLibraryBPLibrary.h"
#include "SNSLibrary.h"

#include "GenericPlatform/GenericPlatformHttp.h"

DEFINE_LOG_CATEGORY(LogSNSLib);


#if PLATFORM_ANDROID
#include "Android/AndroidApplication.h"
jmethodID USNSLibraryBPLibrary::CallIntentSNSMethod;
jmethodID USNSLibraryBPLibrary::CallIntentMediaScanMethod;
jmethodID USNSLibraryBPLibrary::GetPictureFolderPathMethod;

extern const FString &GetFileBasePath();
#endif


USNSLibraryBPLibrary::USNSLibraryBPLibrary(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

FString USNSLibraryBPLibrary::GetPictureFolderPath()
{
#if PLATFORM_ANDROID

	if (JNIEnv* Env = FAndroidApplication::GetJavaEnv())
	{
		GetPictureFolderPathMethod = FJavaWrapper::FindMethod(Env, 
			FJavaWrapper::GameActivityClassID, "AndroidThunkJava_GetPictureFolderPath", "()Ljava/lang/String;", false);
		jstring JavaString = (jstring)FJavaWrapper::CallObjectMethod(Env, FJavaWrapper::GameActivityThis, GetPictureFolderPathMethod);
		if (JavaString != NULL)
		{
			const char* JavaChars = Env->GetStringUTFChars(JavaString, 0);
			return FString(UTF8_TO_TCHAR(JavaChars));
		}
	}
#endif
	return FPaths::ScreenShotDir();
}


void USNSLibraryBPLibrary::SaveScreenShot(bool bInShowUI, const FString& FolderName, FString& OutFilePath)
{
	FScreenshotRequest SR = FScreenshotRequest();

	OutFilePath = GetPictureFolderPath() + FString(TEXT("/")) + FolderName + FString(TEXT("/")) + FString(TEXT("ScreenShot_")) + FDateTime::Now().ToString() + FString(TEXT(".png"));

#if PLATFORM_ANDROID

	FString relativePath;
	if (ConvertToAndroidRelativePath(OutFilePath, relativePath))
	{
		SR.RequestScreenshot(relativePath, bInShowUI, false);
	}
	else
	{
		UE_LOG(LogSNSLib, Warning, TEXT("Fail ConvertToAndroidRelativePath %s"), *OutFilePath);
	}

#else

	SR.RequestScreenshot(OutFilePath, bInShowUI, false);

#endif



}

void USNSLibraryBPLibrary::SendDataToSNS(const FString& Text, const FString& ImageFilePath)
{

#if PLATFORM_ANDROID

	if (JNIEnv* Env = FAndroidApplication::GetJavaEnv())
	{
		CallIntentSNSMethod = FJavaWrapper::FindMethod(Env, 
			FJavaWrapper::GameActivityClassID, "AndroidThunkJava_CallIntentSNS", "(Ljava/lang/String;Ljava/lang/String;)V", false);
		jstring TextJava = Env->NewStringUTF(TCHAR_TO_UTF8(*Text));

		jstring PathJava = nullptr;
		if (!ImageFilePath.IsEmpty())
		{
			PathJava = Env->NewStringUTF(TCHAR_TO_UTF8(*ImageFilePath));
		}
		FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, CallIntentSNSMethod, TextJava, PathJava);
	}
#else
	
	FPlatformProcess::LaunchURL( *(FString(TEXT("https://twitter.com/intent/tweet?text=")) + FGenericPlatformHttp::UrlEncode(Text)), nullptr, nullptr);
	if (!ImageFilePath.IsEmpty())
	{
		UE_LOG(LogSNSLib, Warning, TEXT("Tweet with images is not supported yet"));
	}

#endif

}

void USNSLibraryBPLibrary::CallAndroidMediaScan(const FString& FilePath)
{
#if PLATFORM_ANDROID
	if (JNIEnv* Env = FAndroidApplication::GetJavaEnv())
	{
		CallIntentMediaScanMethod = FJavaWrapper::FindMethod(Env, 
			FJavaWrapper::GameActivityClassID, "AndroidThunkJava_CallIntentMediaScan", "(Ljava/lang/String;)V", false);
		FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, CallIntentMediaScanMethod, Env->NewStringUTF(TCHAR_TO_UTF8(*FilePath)));
	}
#else

	UE_LOG(LogSNSLib, Warning, TEXT("CallAndroidMediaScan() is only for Android"));

#endif
}

#if PLATFORM_ANDROID
bool USNSLibraryBPLibrary::ConvertToAndroidRelativePath(FString InPath, FString& OutPath)
{
	auto Source = InPath;
	auto InRelativeTo = GetFileBasePath();
	auto Result = FPaths::MakePathRelativeTo(Source, *InRelativeTo);
	OutPath = FPaths::Combine(TEXT("."), *Source);

	UE_LOG(LogSNSLib, Log, TEXT("%s -> &s"), *InPath, *OutPath);

	return Result;
}
#endif