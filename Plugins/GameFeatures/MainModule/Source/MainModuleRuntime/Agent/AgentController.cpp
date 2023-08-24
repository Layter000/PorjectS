// Fill out your copyright notice in the Description page of Project Settings.


#include "AgentController.h"


// Sets default values
AAgentController::AAgentController(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void AAgentController::SetGenericTeamId(const FGenericTeamId& NewTeamID)
{
	Super::SetGenericTeamId(NewTeamID);
}

FGenericTeamId AAgentController::GetGenericTeamId() const
{
	return Super::GetGenericTeamId();
}

// Called when the game starts or when spawned
void AAgentController::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAgentController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
}

