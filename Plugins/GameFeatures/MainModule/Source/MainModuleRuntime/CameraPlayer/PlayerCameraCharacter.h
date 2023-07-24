// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/LyraCharacter.h"
#include "GameplayCueInterface.h"
#include "GameplayTagAssetInterface.h"
#include "PlayerCameraCharacter.generated.h"

UCLASS(Blueprintable)
class MAINMODULERUNTIME_API APlayerCameraCharacter : public ALyraCharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCameraCharacter(const FObjectInitializer& ObjectInitializer);
	
};
