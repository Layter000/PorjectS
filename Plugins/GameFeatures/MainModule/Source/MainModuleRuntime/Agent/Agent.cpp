// Fill out your copyright notice in the Description page of Project Settings.


#include "Agent.h"

#include "Net/UnrealNetwork.h"


// Sets default values
AAgent::AAgent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AAgent::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAgent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AAgent::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AAgent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, AgentTeamID);
}

void AAgent::SetGenericTeamId(const FGenericTeamId& TeamID)
{
	if (HasAuthority())
	{
		const FGenericTeamId OldTeamID = AgentTeamID;
		AgentTeamID = TeamID;
		ConditionalBroadcastTeamChanged(this, OldTeamID, AgentTeamID);
	}
	//Super::SetGenericTeamId(TeamID);
}

FGenericTeamId AAgent::GetGenericTeamId() const
{
	return AgentTeamID;
}

void AAgent::OnRep_AgentTeamID(FGenericTeamId OldTeamID)
{
	ConditionalBroadcastTeamChanged(this, OldTeamID, AgentTeamID);
}

