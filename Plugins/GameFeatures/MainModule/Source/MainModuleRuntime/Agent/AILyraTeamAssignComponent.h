// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AILyraTeamAssignComponent.generated.h"

class ULyraExperienceDefinition;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), Config = Game, defaultconfig)
class MAINMODULERUNTIME_API UAILyraTeamAssignComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UAILyraTeamAssignComponent();

	void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	void SetTeamID(uint8 Id);

	UFUNCTION(BlueprintCallable)
	uint8 GetTeamId();

private:
	void OnExperienceLoaded(const ULyraExperienceDefinition* Experience);

	UPROPERTY(Config)
	int32 AITeamID;
};
