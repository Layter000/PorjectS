// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/LyraCharacterWithAbilities.h"
#include "Agent.generated.h"

UCLASS()
class MAINMODULERUNTIME_API AAgent : public ALyraCharacterWithAbilities
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAgent(const FObjectInitializer& ObjectInitializer);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
	virtual void SetGenericTeamId(const FGenericTeamId& TeamID) override;
	UFUNCTION(BlueprintCallable)
	virtual FGenericTeamId GetGenericTeamId() const override;
	
};
