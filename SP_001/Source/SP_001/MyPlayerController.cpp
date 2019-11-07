// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"

AMyPlayerController::AMyPlayerController()
{
	PrimaryActorTick.bCanEverTick = true;
	TeamId = FGenericTeamId(10);
}

FGenericTeamId AMyPlayerController::GetGenericTeamId() const
{
	return TeamId;
}