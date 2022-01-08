// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomFirstPersonnCharacter.h"

// Sets default values
ACustomFirstPersonnCharacter::ACustomFirstPersonnCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACustomFirstPersonnCharacter::BeginPlay()
{
	Super::BeginPlay();
	check(GEngine != nullptr);

	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("We are using CustomFPSCharacter"));
}

// Called every frame
void ACustomFirstPersonnCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACustomFirstPersonnCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	//Binds the movement keys
	PlayerInputComponent->BindAxis("MoveForward", this, &ACustomFirstPersonnCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ACustomFirstPersonnCharacter::MoveRight);

	//Binds the looking keys
	PlayerInputComponent->BindAxis("Turn", this, &ACustomFirstPersonnCharacter::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &ACustomFirstPersonnCharacter::AddControllerPitchInput);

	//Jump bindings
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACustomFirstPersonnCharacter::startJump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACustomFirstPersonnCharacter::stopJump);

}

void ACustomFirstPersonnCharacter::MoveForward(float value)
{
	//Find "Forwards" and move that way
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::X);
	AddMovementInput(Direction, value);
}

void ACustomFirstPersonnCharacter::MoveRight(float value)
{
	//Find "right" and move that way
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::Y);
	AddMovementInput(Direction, value);
}

void ACustomFirstPersonnCharacter::startJump()
{
	bPressedJump = true;
}

void ACustomFirstPersonnCharacter::stopJump()
{
	bPressedJump = false;
}

