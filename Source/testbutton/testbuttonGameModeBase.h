// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "testbuttonGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class TESTBUTTON_API AtestbuttonGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	AtestbuttonGameModeBase();
protected:
	virtual void BeginPlay() override;
};
