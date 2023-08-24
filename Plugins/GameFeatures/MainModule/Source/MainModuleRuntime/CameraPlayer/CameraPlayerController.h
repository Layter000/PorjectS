// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Player/LyraPlayerController.h"
#include "CameraPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class MAINMODULERUNTIME_API ACameraPlayerController : public ALyraPlayerController
{
	GENERATED_BODY()

public:
	ACameraPlayerController(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintCallable)
	virtual void SetGenericTeamId(const FGenericTeamId& NewTeamID) override;
	UFUNCTION(BlueprintCallable)
	virtual FGenericTeamId GetGenericTeamId() const override;
};
