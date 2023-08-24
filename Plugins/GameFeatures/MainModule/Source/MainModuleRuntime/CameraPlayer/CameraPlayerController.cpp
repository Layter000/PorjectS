// Fill out your copyright notice in the Description page of Project Settings.


#include "CameraPlayerController.h"

ACameraPlayerController::ACameraPlayerController(const FObjectInitializer& ObjectInitializer)
{
}

void ACameraPlayerController::SetGenericTeamId(const FGenericTeamId& NewTeamID)
{
	Super::SetGenericTeamId(NewTeamID);
}

FGenericTeamId ACameraPlayerController::GetGenericTeamId() const
{
	return Super::GetGenericTeamId();
}
