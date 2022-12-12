// Fill out your copyright notice in the Description page of Project Settings.


#include "Hammer.h"

// Sets default values
AHammer::AHammer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHammer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHammer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AHammer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//----------------------------
	// �ړ�
	//----------------------------
	// MoveForward�̓��͒l��MoveForward�֐��փo�C���h����
	InputComponent->BindAxis("MoveForward", this, &AHammer::MoveForward);

	// MoveRight�̓��͒l��MoveRight�֐��փo�C���h����
	InputComponent->BindAxis("MoveRight", this, &AHammer::MoveRight);
}

