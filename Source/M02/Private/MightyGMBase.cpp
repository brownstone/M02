// Fill out your copyright notice in the Description page of Project Settings.


#include "MightyGMBase.h"

void AMightyGMBase::BeginPlay()
{
	Super::BeginPlay();
}

void AMightyGMBase::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	//if (Role == ROLE_Authority)
	//{

	//}
}

FCardPlayer* AMightyGMBase::GetCardPlayer(int32 playerID)
{
	// TODO: 여기에 반환 구문을 삽입합니다.

	return nullptr;
	
}
