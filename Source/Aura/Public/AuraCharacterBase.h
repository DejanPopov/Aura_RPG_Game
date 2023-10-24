// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AuraCharacterBase.generated.h"

UCLASS(Abstract) // Adding Abstract to UCLASS macro will prevent this class to be draged into level
class AURA_API AAuraCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	/* Constructors */
	AAuraCharacterBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
