// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CommonStructs.h"
#include "MightyGMBase.generated.h"

/**
 * 
 */
UCLASS()
class M02_API AMightyGMBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaSeconds) override;

	virtual void PostLogin(APlayerController* NewPlayer) override;

public:

	//UFUNCTION()
	//FCardPlayer * GetCardPlayer(int32 playerID);



protected:
	//UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = GM, meta = (BlueprintProtected = "true"))
	//TSubclassOf<FCardPlayer> PlayerInfo;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = GM, meta = (BlueprintProtected = "true"))
	TArray<FCardPlayer> PlayerInfo;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = GM, meta = (BlueprintProtected = "true"))
	TArray<APlayerController*> CardPlayerControllers;
};
