// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "GenericTeamAgentInterface.h"
#include "MyAIController.generated.h"

/**
 * 
 */
UCLASS()
class SP_001_API AMyAIController : public AAIController
{
	GENERATED_BODY()

	//AEnemyAIController::AEnemyAIController(const FObjectInitializer& ObjectInitializer): Super(ObjectInitializer)
	//{
	//	// Assign to Team 1
	//	SetGenericTeamId(FGenericTeamId(1));
	//}

	AMyAIController();

public:

	ETeamAttitude::Type GetTeamAttitudeTowards(const AActor& Other) const override;

};
