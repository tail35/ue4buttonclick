// Fill out your copyright notice in the Description page of Project Settings.


#include "MyUserWidget.h"



UMyUserWidget::UMyUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {

	//PlayGameBtn = Cast<UButton>(GetWidgetFromName("play_button"));
	int k = 0;
	k++;
}

bool UMyUserWidget::Initialize() {
	PlayGameBtn = Cast<UButton>(GetWidgetFromName("mybutton"));
	return true;
}



