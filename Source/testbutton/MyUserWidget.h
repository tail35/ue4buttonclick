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
	virtual void NativeConstruct() override;
	UPROPERTY(Meta = (BindWidget))
	class  UButton* play_button;
	UFUNCTION()
		void OnBtn_Play();

	UPROPERTY(Meta = (BindWidget))
	class  UButton* stop_Button;
	UFUNCTION()
		void OnBtn_Stop();

	UPROPERTY(Meta = (BindWidget))
	class  UButton* pause_Button;
	UFUNCTION()
		void OnBtn_Pause();

	UPROPERTY(Meta = (BindWidget))
	class  UButton* resume_Button;
	UFUNCTION()
		void OnBtn_Resume();



protected:	
	
	
	
};
