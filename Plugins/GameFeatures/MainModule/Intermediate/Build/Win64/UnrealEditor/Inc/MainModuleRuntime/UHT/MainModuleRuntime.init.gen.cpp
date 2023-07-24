// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainModuleRuntime_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MainModuleRuntime;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MainModuleRuntime()
	{
		if (!Z_Registration_Info_UPackage__Script_MainModuleRuntime.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MainModuleRuntime",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x894152B6,
				0x65EE41FE,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MainModuleRuntime.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MainModuleRuntime.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MainModuleRuntime(Z_Construct_UPackage__Script_MainModuleRuntime, TEXT("/Script/MainModuleRuntime"), Z_Registration_Info_UPackage__Script_MainModuleRuntime, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x894152B6, 0x65EE41FE));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
