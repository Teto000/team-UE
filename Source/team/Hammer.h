// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Components/CapsuleComponent.h"
#include "Hammer.generated.h"

UCLASS()
class TEAM_API AHammer : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AHammer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//à⁄ìÆèàóù
	void MoveForward(float AxisValue);
	void MoveRight(float AxisValue);
};
