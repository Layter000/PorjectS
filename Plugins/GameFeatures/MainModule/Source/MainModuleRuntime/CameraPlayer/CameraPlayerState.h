// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Player/LyraPlayerState.h"
#include "CameraPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class MAINMODULERUNTIME_API ACameraPlayerState : public ALyraPlayerState
{
	GENERATED_BODY()

	ACameraPlayerState(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintCallable)
	virtual void SetGenericTeamId(const FGenericTeamId& NewTeamID) override;

};
