// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAIController.h"

AMyAIController::AMyAIController()
{
	SetGenericTeamId(FGenericTeamId(5));
}


ETeamAttitude::Type AMyAIController::GetTeamAttitudeTowards(const AActor& Other) const
{

	if (const APawn * OtherPawn = Cast<APawn>(&Other)) {

		if (const IGenericTeamAgentInterface * TeamAgent = Cast<IGenericTeamAgentInterface>(OtherPawn->GetController()))
		{
			return Super::GetTeamAttitudeTowards(*OtherPawn->GetController());
		}
	}

	return ETeamAttitude::Neutral;
}