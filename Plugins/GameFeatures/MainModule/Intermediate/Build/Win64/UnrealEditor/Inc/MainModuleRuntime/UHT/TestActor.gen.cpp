// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MainModuleRuntime/TestActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	MAINMODULERUNTIME_API UClass* Z_Construct_UClass_ATestActor();
	MAINMODULERUNTIME_API UClass* Z_Construct_UClass_ATestActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MainModuleRuntime();
// End Cross Module References
	void ATestActor::StaticRegisterNativesATestActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestActor);
	UClass* Z_Construct_UClass_ATestActor_NoRegister()
	{
		return ATestActor::StaticClass();
	}
	struct Z_Construct_UClass_ATestActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MainModuleRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TestActor.h" },
		{ "ModuleRelativePath", "TestActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestActor_Statics::ClassParams = {
		&ATestActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATestActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATestActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestActor()
	{
		if (!Z_Registration_Info_UClass_ATestActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestActor.OuterSingleton, Z_Construct_UClass_ATestActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATestActor.OuterSingleton;
	}
	template<> MAINMODULERUNTIME_API UClass* StaticClass<ATestActor>()
	{
		return ATestActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestActor);
	ATestActor::~ATestActor() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_PorjectS_Plugins_GameFeatures_MainModule_Source_MainModuleRuntime_TestActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_PorjectS_Plugins_GameFeatures_MainModule_Source_MainModuleRuntime_TestActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATestActor, ATestActor::StaticClass, TEXT("ATestActor"), &Z_Registration_Info_UClass_ATestActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestActor), 3117737036U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_PorjectS_Plugins_GameFeatures_MainModule_Source_MainModuleRuntime_TestActor_h_4154354843(TEXT("/Script/MainModuleRuntime"),
		Z_CompiledInDeferFile_FID_UnrealProjects_PorjectS_Plugins_GameFeatures_MainModule_Source_MainModuleRuntime_TestActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_PorjectS_Plugins_GameFeatures_MainModule_Source_MainModuleRuntime_TestActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
