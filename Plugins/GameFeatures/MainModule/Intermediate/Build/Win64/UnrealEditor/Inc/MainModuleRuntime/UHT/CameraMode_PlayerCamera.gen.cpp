// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MainModuleRuntime/CameraPlayer/CameraMode_PlayerCamera.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraMode_PlayerCamera() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraCameraMode();
	MAINMODULERUNTIME_API UClass* Z_Construct_UClass_UCameraMode_PlayerCamera();
	MAINMODULERUNTIME_API UClass* Z_Construct_UClass_UCameraMode_PlayerCamera_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MainModuleRuntime();
// End Cross Module References
	DEFINE_FUNCTION(UCameraMode_PlayerCamera::execUnFollowTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnFollowTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraMode_PlayerCamera::execFollowTarget)
	{
		P_GET_OBJECT(AActor,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FollowTarget(Z_Param_Target);
		P_NATIVE_END;
	}
	void UCameraMode_PlayerCamera::StaticRegisterNativesUCameraMode_PlayerCamera()
	{
		UClass* Class = UCameraMode_PlayerCamera::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FollowTarget", &UCameraMode_PlayerCamera::execFollowTarget },
			{ "UnFollowTarget", &UCameraMode_PlayerCamera::execUnFollowTarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCameraMode_PlayerCamera_FollowTarget_Statics
	{
		struct CameraMode_PlayerCamera_eventFollowTarget_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraMode_PlayerCamera_FollowTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraMode_PlayerCamera_eventFollowTarget_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraMode_PlayerCamera_FollowTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraMode_PlayerCamera_FollowTarget_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraMode_PlayerCamera_FollowTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "RTSCamera" },
		{ "ModuleRelativePath", "CameraPlayer/CameraMode_PlayerCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraMode_PlayerCamera_FollowTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraMode_PlayerCamera, nullptr, "FollowTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraMode_PlayerCamera_FollowTarget_Statics::CameraMode_PlayerCamera_eventFollowTarget_Parms), Z_Construct_UFunction_UCameraMode_PlayerCamera_FollowTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraMode_PlayerCamera_FollowTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraMode_PlayerCamera_FollowTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraMode_PlayerCamera_FollowTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraMode_PlayerCamera_FollowTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraMode_PlayerCamera_FollowTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraMode_PlayerCamera_UnFollowTarget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraMode_PlayerCamera_UnFollowTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "RTSCamera" },
		{ "ModuleRelativePath", "CameraPlayer/CameraMode_PlayerCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraMode_PlayerCamera_UnFollowTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraMode_PlayerCamera, nullptr, "UnFollowTarget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraMode_PlayerCamera_UnFollowTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraMode_PlayerCamera_UnFollowTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraMode_PlayerCamera_UnFollowTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraMode_PlayerCamera_UnFollowTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraMode_PlayerCamera);
	UClass* Z_Construct_UClass_UCameraMode_PlayerCamera_NoRegister()
	{
		return UCameraMode_PlayerCamera::StaticClass();
	}
	struct Z_Construct_UClass_UCameraMode_PlayerCamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumZoomLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumZoomLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumZoomLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumZoomLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoomCatchupSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomCatchupSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoomSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPivotRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultPivotRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartingHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartingHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotateSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotateSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DragExtent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DragExtent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableCameraLag_MetaData[];
#endif
		static void NewProp_EnableCameraLag_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableCameraLag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableCameraRotationLag_MetaData[];
#endif
		static void NewProp_EnableCameraRotationLag_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableCameraRotationLag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableDynamicCameraHeight_MetaData[];
#endif
		static void NewProp_EnableDynamicCameraHeight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableDynamicCameraHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FindGroundTraceLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FindGroundTraceLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBlockingVolumeTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CameraBlockingVolumeTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraFollowTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraFollowTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsCameraOutOfBoundsErrorAlreadyDisplayed_MetaData[];
#endif
		static void NewProp_IsCameraOutOfBoundsErrorAlreadyDisplayed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsCameraOutOfBoundsErrorAlreadyDisplayed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DragStartLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DragStartLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULyraCameraMode,
		(UObject* (*)())Z_Construct_UPackage__Script_MainModuleRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCameraMode_PlayerCamera_FollowTarget, "FollowTarget" }, // 1471453876
		{ &Z_Construct_UFunction_UCameraMode_PlayerCamera_UnFollowTarget, "UnFollowTarget" }, // 3294000422
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CameraPlayer/CameraMode_PlayerCamera.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "CameraPlayer/CameraMode_PlayerCamera.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_MinimumZoomLength_MetaData[] = {
		{ "Category", "RTSCamera - Zoom Settings" },
		{ "ModuleRelativePath", "CameraPlayer/CameraMode_PlayerCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_MinimumZoomLength = { "MinimumZoomLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraMode_PlayerCamera, MinimumZoomLength), METADATA_PARAMS(Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_MinimumZoomLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_MinimumZoomLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_MaximumZoomLength_MetaData[] = {
		{ "Category", "RTSCamera - Zoom Settings" },
		{ "ModuleRelativePath", "CameraPlayer/CameraMode_PlayerCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_MaximumZoomLength = { "MaximumZoomLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraMode_PlayerCamera, MaximumZoomLength), METADATA_PARAMS(Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_MaximumZoomLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_MaximumZoomLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_ZoomCatchupSpeed_MetaData[] = {
		{ "Category", "RTSCamera - Zoom Settings" },
		{ "ModuleRelativePath", "CameraPlayer/CameraMode_PlayerCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_ZoomCatchupSpeed = { "ZoomCatchupSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraMode_PlayerCamera, ZoomCatchupSpeed), METADATA_PARAMS(Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_ZoomCatchupSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_ZoomCatchupSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_ZoomSpeed_MetaData[] = {
		{ "Category", "RTSCamera - Zoom Settings" },
		{ "ModuleRelativePath", "CameraPlayer/CameraMode_PlayerCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_ZoomSpeed = { "ZoomSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraMode_PlayerCamera, ZoomSpeed), METADATA_PARAMS(Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_ZoomSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_ZoomSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_DefaultPivotRotation_MetaData[] = {
		{ "Category", "RTSCamera" },
		{ "ModuleRelativePath", "CameraPlayer/CameraMode_PlayerCamera.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_DefaultPivotRotation = { "DefaultPivotRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraMode_PlayerCamera, DefaultPivotRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_DefaultPivotRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_DefaultPivotRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_StartingHeight_MetaData[] = {
		{ "Category", "RTSCamera" },
		{ "ModuleRelativePath", "CameraPlayer/CameraMode_PlayerCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_StartingHeight = { "StartingHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraMode_PlayerCamera, StartingHeight), METADATA_PARAMS(Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_StartingHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_StartingHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "RTSCamera" },
		{ "ModuleRelativePath", "CameraPlayer/CameraMode_PlayerCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraMode_PlayerCamera, MoveSpeed), METADATA_PARAMS(Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_MoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_MoveSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_RotateSpeed_MetaData[] = {
		{ "Category", "RTSCamera" },
		{ "ModuleRelativePath", "CameraPlayer/CameraMode_PlayerCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_RotateSpeed = { "RotateSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraMode_PlayerCamera, RotateSpeed), METADATA_PARAMS(Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_RotateSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_RotateSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_DragExtent_MetaData[] = {
		{ "Category", "RTSCamera" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "CameraPlayer/CameraMode_PlayerCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_DragExtent = { "DragExtent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraMode_PlayerCamera, DragExtent), METADATA_PARAMS(Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_DragExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_DragExtent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_EnableCameraLag_MetaData[] = {
		{ "Category", "RTSCamera" },
		{ "ModuleRelativePath", "CameraPlayer/CameraMode_PlayerCamera.h" },
	};
#endif
	void Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_EnableCameraLag_SetBit(void* Obj)
	{
		((UCameraMode_PlayerCamera*)Obj)->EnableCameraLag = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_EnableCameraLag = { "EnableCameraLag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCameraMode_PlayerCamera), &Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_EnableCameraLag_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_EnableCameraLag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_EnableCameraLag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_EnableCameraRotationLag_MetaData[] = {
		{ "Category", "RTSCamera" },
		{ "ModuleRelativePath", "CameraPlayer/CameraMode_PlayerCamera.h" },
	};
#endif
	void Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_EnableCameraRotationLag_SetBit(void* Obj)
	{
		((UCameraMode_PlayerCamera*)Obj)->EnableCameraRotationLag = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_EnableCameraRotationLag = { "EnableCameraRotationLag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCameraMode_PlayerCamera), &Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_EnableCameraRotationLag_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_EnableCameraRotationLag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_EnableCameraRotationLag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_EnableDynamicCameraHeight_MetaData[] = {
		{ "Category", "RTSCamera - Dynamic Camera Height Settings" },
		{ "ModuleRelativePath", "CameraPlayer/CameraMode_PlayerCamera.h" },
	};
#endif
	void Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_EnableDynamicCameraHeight_SetBit(void* Obj)
	{
		((UCameraMode_PlayerCamera*)Obj)->EnableDynamicCameraHeight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_EnableDynamicCameraHeight = { "EnableDynamicCameraHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCameraMode_PlayerCamera), &Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_EnableDynamicCameraHeight_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_EnableDynamicCameraHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_EnableDynamicCameraHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_CollisionChannel_MetaData[] = {
		{ "Category", "RTSCamera - Dynamic Camera Height Settings" },
		{ "ModuleRelativePath", "CameraPlayer/CameraMode_PlayerCamera.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraMode_PlayerCamera, CollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_CollisionChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_CollisionChannel_MetaData)) }; // 727872708
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_FindGroundTraceLength_MetaData[] = {
		{ "Category", "RTSCamera - Dynamic Camera Height Settings" },
		{ "EditCondition", "EnableDynamicCameraHeight" },
		{ "ModuleRelativePath", "CameraPlayer/CameraMode_PlayerCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_FindGroundTraceLength = { "FindGroundTraceLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraMode_PlayerCamera, FindGroundTraceLength), METADATA_PARAMS(Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_FindGroundTraceLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_FindGroundTraceLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_CameraBlockingVolumeTag_MetaData[] = {
		{ "ModuleRelativePath", "CameraPlayer/CameraMode_PlayerCamera.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_CameraBlockingVolumeTag = { "CameraBlockingVolumeTag", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraMode_PlayerCamera, CameraBlockingVolumeTag), METADATA_PARAMS(Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_CameraBlockingVolumeTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_CameraBlockingVolumeTag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_CameraFollowTarget_MetaData[] = {
		{ "ModuleRelativePath", "CameraPlayer/CameraMode_PlayerCamera.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_CameraFollowTarget = { "CameraFollowTarget", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraMode_PlayerCamera, CameraFollowTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_CameraFollowTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_CameraFollowTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_DeltaSeconds_MetaData[] = {
		{ "ModuleRelativePath", "CameraPlayer/CameraMode_PlayerCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraMode_PlayerCamera, DeltaSeconds), METADATA_PARAMS(Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_DeltaSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_DeltaSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_IsCameraOutOfBoundsErrorAlreadyDisplayed_MetaData[] = {
		{ "ModuleRelativePath", "CameraPlayer/CameraMode_PlayerCamera.h" },
	};
#endif
	void Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_IsCameraOutOfBoundsErrorAlreadyDisplayed_SetBit(void* Obj)
	{
		((UCameraMode_PlayerCamera*)Obj)->IsCameraOutOfBoundsErrorAlreadyDisplayed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_IsCameraOutOfBoundsErrorAlreadyDisplayed = { "IsCameraOutOfBoundsErrorAlreadyDisplayed", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCameraMode_PlayerCamera), &Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_IsCameraOutOfBoundsErrorAlreadyDisplayed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_IsCameraOutOfBoundsErrorAlreadyDisplayed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_IsCameraOutOfBoundsErrorAlreadyDisplayed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_DragStartLocation_MetaData[] = {
		{ "ModuleRelativePath", "CameraPlayer/CameraMode_PlayerCamera.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_DragStartLocation = { "DragStartLocation", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraMode_PlayerCamera, DragStartLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_DragStartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_DragStartLocation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_MinimumZoomLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_MaximumZoomLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_ZoomCatchupSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_ZoomSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_DefaultPivotRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_StartingHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_MoveSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_RotateSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_DragExtent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_EnableCameraLag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_EnableCameraRotationLag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_EnableDynamicCameraHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_CollisionChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_FindGroundTraceLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_CameraBlockingVolumeTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_CameraFollowTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_DeltaSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_IsCameraOutOfBoundsErrorAlreadyDisplayed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::NewProp_DragStartLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraMode_PlayerCamera>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::ClassParams = {
		&UCameraMode_PlayerCamera::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraMode_PlayerCamera()
	{
		if (!Z_Registration_Info_UClass_UCameraMode_PlayerCamera.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraMode_PlayerCamera.OuterSingleton, Z_Construct_UClass_UCameraMode_PlayerCamera_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCameraMode_PlayerCamera.OuterSingleton;
	}
	template<> MAINMODULERUNTIME_API UClass* StaticClass<UCameraMode_PlayerCamera>()
	{
		return UCameraMode_PlayerCamera::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraMode_PlayerCamera);
	UCameraMode_PlayerCamera::~UCameraMode_PlayerCamera() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_PorjectS_Plugins_GameFeatures_MainModule_Source_MainModuleRuntime_CameraPlayer_CameraMode_PlayerCamera_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_PorjectS_Plugins_GameFeatures_MainModule_Source_MainModuleRuntime_CameraPlayer_CameraMode_PlayerCamera_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCameraMode_PlayerCamera, UCameraMode_PlayerCamera::StaticClass, TEXT("UCameraMode_PlayerCamera"), &Z_Registration_Info_UClass_UCameraMode_PlayerCamera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraMode_PlayerCamera), 3842058656U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_PorjectS_Plugins_GameFeatures_MainModule_Source_MainModuleRuntime_CameraPlayer_CameraMode_PlayerCamera_h_1560687287(TEXT("/Script/MainModuleRuntime"),
		Z_CompiledInDeferFile_FID_UnrealProjects_PorjectS_Plugins_GameFeatures_MainModule_Source_MainModuleRuntime_CameraPlayer_CameraMode_PlayerCamera_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_PorjectS_Plugins_GameFeatures_MainModule_Source_MainModuleRuntime_CameraPlayer_CameraMode_PlayerCamera_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
