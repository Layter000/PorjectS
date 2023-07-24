// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MainModuleRuntime/CameraPlayer/PlayerCameraHeroComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCameraHeroComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ALyraCharacter_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraHeroComponent();
	MAINMODULERUNTIME_API UClass* Z_Construct_UClass_UPlayerCameraHeroComponent();
	MAINMODULERUNTIME_API UClass* Z_Construct_UClass_UPlayerCameraHeroComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MainModuleRuntime();
// End Cross Module References
	DEFINE_FUNCTION(UPlayerCameraHeroComponent::execGetLyraCharacter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ALyraCharacter**)Z_Param__Result=P_THIS->GetLyraCharacter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerCameraHeroComponent::execUnFollowTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnFollowTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerCameraHeroComponent::execFollowTarget)
	{
		P_GET_OBJECT(AActor,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FollowTarget(Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerCameraHeroComponent::execFindCameraInputComponent)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayerCameraHeroComponent**)Z_Param__Result=UPlayerCameraHeroComponent::FindCameraInputComponent(Z_Param_Actor);
		P_NATIVE_END;
	}
	void UPlayerCameraHeroComponent::StaticRegisterNativesUPlayerCameraHeroComponent()
	{
		UClass* Class = UPlayerCameraHeroComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindCameraInputComponent", &UPlayerCameraHeroComponent::execFindCameraInputComponent },
			{ "FollowTarget", &UPlayerCameraHeroComponent::execFollowTarget },
			{ "GetLyraCharacter", &UPlayerCameraHeroComponent::execGetLyraCharacter },
			{ "UnFollowTarget", &UPlayerCameraHeroComponent::execUnFollowTarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerCameraHeroComponent_FindCameraInputComponent_Statics
	{
		struct PlayerCameraHeroComponent_eventFindCameraInputComponent_Parms
		{
			const AActor* Actor;
			UPlayerCameraHeroComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCameraHeroComponent_FindCameraInputComponent_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerCameraHeroComponent_FindCameraInputComponent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCameraHeroComponent_eventFindCameraInputComponent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPlayerCameraHeroComponent_FindCameraInputComponent_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCameraHeroComponent_FindCameraInputComponent_Statics::NewProp_Actor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCameraHeroComponent_FindCameraInputComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerCameraHeroComponent_FindCameraInputComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCameraHeroComponent_eventFindCameraInputComponent_Parms, ReturnValue), Z_Construct_UClass_UPlayerCameraHeroComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPlayerCameraHeroComponent_FindCameraInputComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCameraHeroComponent_FindCameraInputComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerCameraHeroComponent_FindCameraInputComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerCameraHeroComponent_FindCameraInputComponent_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerCameraHeroComponent_FindCameraInputComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCameraHeroComponent_FindCameraInputComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "RTS" },
		{ "Comment", "/** Returns the hero component if one exists on the specified actor. */" },
		{ "ModuleRelativePath", "CameraPlayer/PlayerCameraHeroComponent.h" },
		{ "ToolTip", "Returns the hero component if one exists on the specified actor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCameraHeroComponent_FindCameraInputComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCameraHeroComponent, nullptr, "FindCameraInputComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerCameraHeroComponent_FindCameraInputComponent_Statics::PlayerCameraHeroComponent_eventFindCameraInputComponent_Parms), Z_Construct_UFunction_UPlayerCameraHeroComponent_FindCameraInputComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCameraHeroComponent_FindCameraInputComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerCameraHeroComponent_FindCameraInputComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCameraHeroComponent_FindCameraInputComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerCameraHeroComponent_FindCameraInputComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerCameraHeroComponent_FindCameraInputComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerCameraHeroComponent_FollowTarget_Statics
	{
		struct PlayerCameraHeroComponent_eventFollowTarget_Parms
		{
			AActor* Target;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerCameraHeroComponent_FollowTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCameraHeroComponent_eventFollowTarget_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerCameraHeroComponent_FollowTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerCameraHeroComponent_FollowTarget_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCameraHeroComponent_FollowTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "RTSCamera" },
		{ "ModuleRelativePath", "CameraPlayer/PlayerCameraHeroComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCameraHeroComponent_FollowTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCameraHeroComponent, nullptr, "FollowTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerCameraHeroComponent_FollowTarget_Statics::PlayerCameraHeroComponent_eventFollowTarget_Parms), Z_Construct_UFunction_UPlayerCameraHeroComponent_FollowTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCameraHeroComponent_FollowTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerCameraHeroComponent_FollowTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCameraHeroComponent_FollowTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerCameraHeroComponent_FollowTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerCameraHeroComponent_FollowTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerCameraHeroComponent_GetLyraCharacter_Statics
	{
		struct PlayerCameraHeroComponent_eventGetLyraCharacter_Parms
		{
			ALyraCharacter* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerCameraHeroComponent_GetLyraCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCameraHeroComponent_eventGetLyraCharacter_Parms, ReturnValue), Z_Construct_UClass_ALyraCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerCameraHeroComponent_GetLyraCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerCameraHeroComponent_GetLyraCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCameraHeroComponent_GetLyraCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra" },
		{ "ModuleRelativePath", "CameraPlayer/PlayerCameraHeroComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCameraHeroComponent_GetLyraCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCameraHeroComponent, nullptr, "GetLyraCharacter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerCameraHeroComponent_GetLyraCharacter_Statics::PlayerCameraHeroComponent_eventGetLyraCharacter_Parms), Z_Construct_UFunction_UPlayerCameraHeroComponent_GetLyraCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCameraHeroComponent_GetLyraCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerCameraHeroComponent_GetLyraCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCameraHeroComponent_GetLyraCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerCameraHeroComponent_GetLyraCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerCameraHeroComponent_GetLyraCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerCameraHeroComponent_UnFollowTarget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCameraHeroComponent_UnFollowTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "RTSCamera" },
		{ "ModuleRelativePath", "CameraPlayer/PlayerCameraHeroComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCameraHeroComponent_UnFollowTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCameraHeroComponent, nullptr, "UnFollowTarget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerCameraHeroComponent_UnFollowTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCameraHeroComponent_UnFollowTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerCameraHeroComponent_UnFollowTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerCameraHeroComponent_UnFollowTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerCameraHeroComponent);
	UClass* Z_Construct_UClass_UPlayerCameraHeroComponent_NoRegister()
	{
		return UPlayerCameraHeroComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerCameraHeroComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableEdgeScrolling_MetaData[];
#endif
		static void NewProp_EnableEdgeScrolling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableEdgeScrolling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EdgeScrollSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EdgeScrollSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFromEdgeThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceFromEdgeThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsDragging_MetaData[];
#endif
		static void NewProp_IsDragging_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDragging;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DragStartLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DragStartLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DragExtent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DragExtent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerCameraHeroComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULyraHeroComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MainModuleRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerCameraHeroComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerCameraHeroComponent_FindCameraInputComponent, "FindCameraInputComponent" }, // 717430815
		{ &Z_Construct_UFunction_UPlayerCameraHeroComponent_FollowTarget, "FollowTarget" }, // 3704203307
		{ &Z_Construct_UFunction_UPlayerCameraHeroComponent_GetLyraCharacter, "GetLyraCharacter" }, // 1367066327
		{ &Z_Construct_UFunction_UPlayerCameraHeroComponent_UnFollowTarget, "UnFollowTarget" }, // 337120862
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCameraHeroComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "CameraPlayer/PlayerCameraHeroComponent.h" },
		{ "ModuleRelativePath", "CameraPlayer/PlayerCameraHeroComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCameraHeroComponent_Statics::NewProp_EnableEdgeScrolling_MetaData[] = {
		{ "Category", "RTSCamera - Edge Scroll Settings" },
		{ "ModuleRelativePath", "CameraPlayer/PlayerCameraHeroComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerCameraHeroComponent_Statics::NewProp_EnableEdgeScrolling_SetBit(void* Obj)
	{
		((UPlayerCameraHeroComponent*)Obj)->EnableEdgeScrolling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerCameraHeroComponent_Statics::NewProp_EnableEdgeScrolling = { "EnableEdgeScrolling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPlayerCameraHeroComponent), &Z_Construct_UClass_UPlayerCameraHeroComponent_Statics::NewProp_EnableEdgeScrolling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerCameraHeroComponent_Statics::NewProp_EnableEdgeScrolling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCameraHeroComponent_Statics::NewProp_EnableEdgeScrolling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCameraHeroComponent_Statics::NewProp_EdgeScrollSpeed_MetaData[] = {
		{ "Category", "RTSCamera - Edge Scroll Settings" },
		{ "EditCondition", "EnableEdgeScrolling" },
		{ "ModuleRelativePath", "CameraPlayer/PlayerCameraHeroComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerCameraHeroComponent_Statics::NewProp_EdgeScrollSpeed = { "EdgeScrollSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerCameraHeroComponent, EdgeScrollSpeed), METADATA_PARAMS(Z_Construct_UClass_UPlayerCameraHeroComponent_Statics::NewProp_EdgeScrollSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCameraHeroComponent_Statics::NewProp_EdgeScrollSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCameraHeroComponent_Statics::NewProp_DistanceFromEdgeThreshold_MetaData[] = {
		{ "Category", "RTSCamera - Edge Scroll Settings" },
		{ "EditCondition", "EnableEdgeScrolling" },
		{ "ModuleRelativePath", "CameraPlayer/PlayerCameraHeroComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerCameraHeroComponent_Statics::NewProp_DistanceFromEdgeThreshold = { "DistanceFromEdgeThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerCameraHeroComponent, DistanceFromEdgeThreshold), METADATA_PARAMS(Z_Construct_UClass_UPlayerCameraHeroComponent_Statics::NewProp_DistanceFromEdgeThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCameraHeroComponent_Statics::NewProp_DistanceFromEdgeThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCameraHeroComponent_Statics::NewProp_DeltaSeconds_MetaData[] = {
		{ "ModuleRelativePath", "CameraPlayer/PlayerCameraHeroComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerCameraHeroComponent_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerCameraHeroComponent, DeltaSeconds), METADATA_PARAMS(Z_Construct_UClass_UPlayerCameraHeroComponent_Statics::NewProp_DeltaSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCameraHeroComponent_Statics::NewProp_DeltaSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCameraHeroComponent_Statics::NewProp_IsDragging_MetaData[] = {
		{ "ModuleRelativePath", "CameraPlayer/PlayerCameraHeroComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerCameraHeroComponent_Statics::NewProp_IsDragging_SetBit(void* Obj)
	{
		((UPlayerCameraHeroComponent*)Obj)->IsDragging = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerCameraHeroComponent_Statics::NewProp_IsDragging = { "IsDragging", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPlayerCameraHeroComponent), &Z_Construct_UClass_UPlayerCameraHeroComponent_Statics::NewProp_IsDragging_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerCameraHeroComponent_Statics::NewProp_IsDragging_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCameraHeroComponent_Statics::NewProp_IsDragging_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCameraHeroComponent_Statics::NewProp_DragStartLocation_MetaData[] = {
		{ "ModuleRelativePath", "CameraPlayer/PlayerCameraHeroComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerCameraHeroComponent_Statics::NewProp_DragStartLocation = { "DragStartLocation", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerCameraHeroComponent, DragStartLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UPlayerCameraHeroComponent_Statics::NewProp_DragStartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCameraHeroComponent_Statics::NewProp_DragStartLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCameraHeroComponent_Statics::NewProp_DragExtent_MetaData[] = {
		{ "ModuleRelativePath", "CameraPlayer/PlayerCameraHeroComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerCameraHeroComponent_Statics::NewProp_DragExtent = { "DragExtent", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerCameraHeroComponent, DragExtent), METADATA_PARAMS(Z_Construct_UClass_UPlayerCameraHeroComponent_Statics::NewProp_DragExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCameraHeroComponent_Statics::NewProp_DragExtent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerCameraHeroComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCameraHeroComponent_Statics::NewProp_EnableEdgeScrolling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCameraHeroComponent_Statics::NewProp_EdgeScrollSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCameraHeroComponent_Statics::NewProp_DistanceFromEdgeThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCameraHeroComponent_Statics::NewProp_DeltaSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCameraHeroComponent_Statics::NewProp_IsDragging,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCameraHeroComponent_Statics::NewProp_DragStartLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCameraHeroComponent_Statics::NewProp_DragExtent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerCameraHeroComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerCameraHeroComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerCameraHeroComponent_Statics::ClassParams = {
		&UPlayerCameraHeroComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayerCameraHeroComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCameraHeroComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerCameraHeroComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCameraHeroComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerCameraHeroComponent()
	{
		if (!Z_Registration_Info_UClass_UPlayerCameraHeroComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerCameraHeroComponent.OuterSingleton, Z_Construct_UClass_UPlayerCameraHeroComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerCameraHeroComponent.OuterSingleton;
	}
	template<> MAINMODULERUNTIME_API UClass* StaticClass<UPlayerCameraHeroComponent>()
	{
		return UPlayerCameraHeroComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerCameraHeroComponent);
	UPlayerCameraHeroComponent::~UPlayerCameraHeroComponent() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_PorjectS_Plugins_GameFeatures_MainModule_Source_MainModuleRuntime_CameraPlayer_PlayerCameraHeroComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_PorjectS_Plugins_GameFeatures_MainModule_Source_MainModuleRuntime_CameraPlayer_PlayerCameraHeroComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerCameraHeroComponent, UPlayerCameraHeroComponent::StaticClass, TEXT("UPlayerCameraHeroComponent"), &Z_Registration_Info_UClass_UPlayerCameraHeroComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerCameraHeroComponent), 1188953815U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_PorjectS_Plugins_GameFeatures_MainModule_Source_MainModuleRuntime_CameraPlayer_PlayerCameraHeroComponent_h_2150984756(TEXT("/Script/MainModuleRuntime"),
		Z_CompiledInDeferFile_FID_UnrealProjects_PorjectS_Plugins_GameFeatures_MainModule_Source_MainModuleRuntime_CameraPlayer_PlayerCameraHeroComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_PorjectS_Plugins_GameFeatures_MainModule_Source_MainModuleRuntime_CameraPlayer_PlayerCameraHeroComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
