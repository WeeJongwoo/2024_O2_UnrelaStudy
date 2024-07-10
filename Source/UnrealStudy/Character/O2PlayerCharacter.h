// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/O2CharacterBase.h"
#include "O2PlayerCharacter.generated.h"

/**
 * 
 */
UCLASS()
class UNREALSTUDY_API AO2PlayerCharacter : public AO2CharacterBase
{
	GENERATED_BODY()

public:
	AO2PlayerCharacter();

public:
	virtual void BeginPlay() override;
	

protected:
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, Meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class USpringArmComponent> CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, Meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UCameraComponent> FollowCamera;

};