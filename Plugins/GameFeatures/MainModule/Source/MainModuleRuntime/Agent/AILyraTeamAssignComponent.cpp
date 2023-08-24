// Fill out your copyright notice in the Description page of Project Settings.


#include "AILyraTeamAssignComponent.h"
#include "AIController.h"
#include "GameModes/LyraExperienceDefinition.h"
#include "GameModes/LyraExperienceManagerComponent.h"
#include "Teams/LyraTeamAgentInterface.h"


UAILyraTeamAssignComponent::UAILyraTeamAssignComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UAILyraTeamAssignComponent::BeginPlay()
{
	Super::BeginPlay();
	AGameStateBase* GameState = GetWorld()->GetGameState<AGameStateBase>();
	ULyraExperienceManagerComponent* ExperienceComponent = GameState->FindComponentByClass<ULyraExperienceManagerComponent>();
	check(ExperienceComponent);
	ExperienceComponent->CallOrRegister_OnExperienceLoaded_HighPriority(FOnLyraExperienceLoaded::FDelegate::CreateUObject(this, &ThisClass::OnExperienceLoaded));
}


void UAILyraTeamAssignComponent::SetTeamID(uint8 Id)
{
	if (AAIController* Controller = Cast<AAIController>(GetOwner()))
	{
		IGenericTeamAgentInterface* TeamAgent = Cast<IGenericTeamAgentInterface>(Controller);
		if (TeamAgent == nullptr)
		{
			TeamAgent = Cast<IGenericTeamAgentInterface>(Controller->GetPawn());
		}
		AITeamID = Id;
		if (TeamAgent != nullptr)
		{
			TeamAgent->SetGenericTeamId(AITeamID);
		}

		ILyraTeamAgentInterface* TeamAgentInterface = Cast<ILyraTeamAgentInterface>(Controller->GetPawn());
		if (TeamAgentInterface)
		{
			TeamAgentInterface ->SetGenericTeamId(AITeamID);
		}
	}
}


uint8 UAILyraTeamAssignComponent::GetTeamId()
{
	return AITeamID;
}

void UAILyraTeamAssignComponent::OnExperienceLoaded(const ULyraExperienceDefinition* Experience)
{
	if (AAIController* Controller = Cast<AAIController>(GetOwner()))
	{
		IGenericTeamAgentInterface* TeamAgent = Cast<IGenericTeamAgentInterface>(Controller);
		if (TeamAgent == nullptr)
		{
			TeamAgent = Cast<IGenericTeamAgentInterface>(Controller->GetPawn());
		}

		if (TeamAgent != nullptr)
		{
			TeamAgent->SetGenericTeamId(AITeamID);
		}
	}
}


