// Fill out your copyright notice in the Description page of Project Settings.


#include "MyUserWidget.h"
#include "ffmpegBPLibrary.h"


UMyUserWidget::UMyUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {

	//PlayGameBtn = Cast<UButton>(GetWidgetFromName("play_button"));
	int k = 0;
	k++;
}

//bool UMyUserWidget::Initialize() {
//	PlayGameBtn = Cast<UButton>(GetWidgetFromName("mybutton"));
//	return true;
//}

void UMyUserWidget::NativeConstruct()
{
	Super::NativeConstruct();
	if (play_button != nullptr)
	{
		play_button->OnClicked.AddDynamic(this, &UMyUserWidget::OnBtn_Play);
	}
	if (stop_Button != nullptr)
	{
		stop_Button->OnClicked.AddDynamic(this, &UMyUserWidget::OnBtn_Stop);
	}
	if (pause_Button != nullptr)
	{
		pause_Button->OnClicked.AddDynamic(this, &UMyUserWidget::OnBtn_Pause);
	}
	if (resume_Button != nullptr)
	{
		resume_Button->OnClicked.AddDynamic(this, &UMyUserWidget::OnBtn_Resume);
	}
	UE_LOG(LogTemp, Warning, TEXT("NativeConstruct"));
}


void UMyUserWidget::OnBtn_Play() {

	UffmpegBPLibrary::MyTest();
	//UE_LOG(LogTemp, Warning, TEXT("ProblemPlay!"));
}

void UMyUserWidget::OnBtn_Stop(){
	UE_LOG(LogTemp, Warning, TEXT("ProblemStop!"));
}

void UMyUserWidget::OnBtn_Pause(){
	UE_LOG(LogTemp, Warning, TEXT("ProblemPause!"));
}

void UMyUserWidget::OnBtn_Resume(){
	UE_LOG(LogTemp, Warning, TEXT("ProblemResume!"));
}