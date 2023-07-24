// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/LyraCameraMode.h"
#include "UObject/Object.h"
#include "CameraMode_PlayerCamera.generated.h"

/**
 * 
 */
UCLASS(Abstract, Blueprintable)
class MAINMODULERUNTIME_API UCameraMode_PlayerCamera : public ULyraCameraMode
{
	GENERATED_BODY()

public:
	UCameraMode_PlayerCamera();
	
protected:
	virtual void UpdateView(float DeltaTime) override;
	virtual void DrawDebug(UCanvas* Canvas) const override;

public:
	UFUNCTION(BlueprintCallable, Category = "RTSCamera")
		void FollowTarget(AActor* Target);

	UFUNCTION(BlueprintCallable, Category = "RTSCamera")
		void UnFollowTarget();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "RTSCamera - Zoom Settings")
	float MinimumZoomLength = 500;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "RTSCamera - Zoom Settings")
	float MaximumZoomLength = 5000;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "RTSCamera - Zoom Settings")
	float ZoomCatchupSpeed = 4;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "RTSCamera - Zoom Settings")
	float ZoomSpeed = -200;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "RTSCamera")
	FRotator DefaultPivotRotation;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "RTSCamera")
	float StartingHeight = 10000;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "RTSCamera")
	float MoveSpeed = 50;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "RTSCamera")
	float RotateSpeed = 45;

	UPROPERTY(
	BlueprintReadWrite,
	EditAnywhere,
	Category = "RTSCamera",
	meta = (ClampMin = "0.0", ClampMax = "1.0"))
	
	float DragExtent = 0.6f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "RTSCamera")
	bool EnableCameraLag = true;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "RTSCamera")
	bool EnableCameraRotationLag = true;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "RTSCamera - Dynamic Camera Height Settings")
	bool EnableDynamicCameraHeight = true;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "RTSCamera - Dynamic Camera Height Settings")
	TEnumAsByte<ECollisionChannel> CollisionChannel;
	UPROPERTY(
		BlueprintReadWrite,
		EditAnywhere,
		Category = "RTSCamera - Dynamic Camera Height Settings",
		meta = (EditCondition = "EnableDynamicCameraHeight")
	)
	float FindGroundTraceLength = 100000;


private:

	void FollowTargetIfSet() const;
	void SmoothTargetArmLengthToDesiredZoom() const;
	void ConditionallyKeepCameraAtDesiredZoomAboveGround();
	void ConditionallyApplyCameraBounds() const;

	USceneComponent* GetTargetRootComponent() const;

	UPROPERTY()
	FName CameraBlockingVolumeTag;
	UPROPERTY()
	AActor* CameraFollowTarget;
	UPROPERTY()
	float DeltaSeconds;
	UPROPERTY()
	bool IsCameraOutOfBoundsErrorAlreadyDisplayed;
	UPROPERTY()
	FVector2D DragStartLocation;
};