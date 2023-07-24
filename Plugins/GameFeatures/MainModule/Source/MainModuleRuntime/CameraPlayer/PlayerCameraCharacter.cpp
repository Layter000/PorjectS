// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCameraCharacter.h"


// Sets default values
APlayerCameraCharacter::APlayerCameraCharacter(const FObjectInitializer& ObjectInitializer)
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = true;
	bUseControllerRotationRoll = false;
}
