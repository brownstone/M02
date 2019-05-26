// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonStructs.generated.h"
/**
 * 
 */
USTRUCT(BlueprintType)
struct FCardPlayer {
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PlayerID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsAI;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> HandCards;
};


