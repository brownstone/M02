// Fill out your copyright notice in the Description page of Project Settings.


#include "MightyGMBase.h"
#include "..\Public\MightyGMBase.h"

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

void AMightyGMBase::PostLogin(APlayerController * NewPlayer)
{

	Super::PostLogin(NewPlayer);
	CardPlayerControllers.Add(NewPlayer);


}

//FCardPlayer * AMightyGMBase::GetCardPlayer(int32 playerID)
//{
//	// TODO: ���⿡ ��ȯ ������ �����մϴ�.
//	TArray<FCardPlayer> Players;
//	FCardPlayer p;
//	Players.Add(p);
//
//	return &Players[0];
//
//}
