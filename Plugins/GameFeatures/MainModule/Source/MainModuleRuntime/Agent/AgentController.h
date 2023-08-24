// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AgentController.generated.h"

UCLASS()
class MAINMODULERUNTIME_API AAgentController : public AAIController
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AAgentController(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintCallable)
	virtual void SetGenericTeamId(const FGenericTeamId& NewTeamID) override;
	UFUNCTION(BlueprintCallable)
	virtual FGenericTeamId GetGenericTeamId() const override;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
