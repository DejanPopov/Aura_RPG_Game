// Fill out your copyright notice in the Description page of Project Settings.


#include "AuraCharacterBase.h"

AAuraCharacterBase::AAuraCharacterBase()
{
	PrimaryActorTick.bCanEverTick = false; /* Changed to false because base charater doesnt need to tick */
}

void AAuraCharacterBase::BeginPlay()
{
	Super::BeginPlay();
}
