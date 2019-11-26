// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "MyUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class TESTBUTTON_API UMyUserWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	UMyUserWidget(const FObjectInitializer& ObjectInitializer);	
public:
	UPROPERTY(Meta = (BindWidget))
	UButton* PlayGameBtn;
	virtual bool Initialize();
protected:	
	
	
	
};
