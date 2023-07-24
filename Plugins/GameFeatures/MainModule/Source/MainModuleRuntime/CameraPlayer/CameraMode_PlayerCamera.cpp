// Fill out your copyright notice in the Description page of Project Settings.


#include "CameraMode_PlayerCamera.h"

UCameraMode_PlayerCamera::UCameraMode_PlayerCamera()
{

}

void UCameraMode_PlayerCamera::UpdateView(float DeltaTime)
{
	FRotator PivotRotation = GetPivotRotation() + DefaultPivotRotation;
	const FVector PivotLocation = GetPivotLocation() + FVector::UpVector * StartingHeight;

	PivotRotation.Pitch = FMath::ClampAngle(PivotRotation.Pitch, ViewPitchMin, ViewPitchMax);

	View.Location = PivotLocation;
	View.Rotation = PivotRotation;
	View.ControlRotation = GetPivotRotation();
	View.FieldOfView = FieldOfView;
}

void UCameraMode_PlayerCamera::DrawDebug(UCanvas* Canvas) const
{
	Super::DrawDebug(Canvas);
}

void UCameraMode_PlayerCamera::FollowTarget(AActor* Target)
{
	CameraFollowTarget = Target;
}

void UCameraMode_PlayerCamera::UnFollowTarget()
{
	CameraFollowTarget = nullptr;
}

void UCameraMode_PlayerCamera::FollowTargetIfSet() const
{
}

void UCameraMode_PlayerCamera::SmoothTargetArmLengthToDesiredZoom() const
{
}

void UCameraMode_PlayerCamera::ConditionallyKeepCameraAtDesiredZoomAboveGround()
{
}

void UCameraMode_PlayerCamera::ConditionallyApplyCameraBounds() const
{
}

USceneComponent* UCameraMode_PlayerCamera::GetTargetRootComponent() const
{
	check(GetTargetActor())
	return Cast<USceneComponent>(GetTargetActor()->GetRootComponent());
}