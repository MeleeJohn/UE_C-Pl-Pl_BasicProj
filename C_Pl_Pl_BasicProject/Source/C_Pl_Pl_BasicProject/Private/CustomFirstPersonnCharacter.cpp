// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomFirstPersonnCharacter.h"
#include "Pistol.h"
#include "Blueprint/UserWidget.h"
#include "GunParentClass.h"


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
	/*if (IsValid(WidgetClass)) {
		TextWidget = Cast<UTextWidget>(CreateWidget(GetWorld(), WidgetClass));

		if (TextWidget != nullptr) {
			UE_LOG(LogTemp, Warning, TEXT("Woah is tthat a use widget I see"));
		}
	}*/
	spawnWeapon();
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

	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &ACustomFirstPersonnCharacter::startWeaponFire);
	PlayerInputComponent->BindAction("Fire", IE_Released, this, &ACustomFirstPersonnCharacter::stopWeaponFire);

	PlayerInputComponent->BindAction("Reload", IE_Pressed, this, &ACustomFirstPersonnCharacter::reloadWepaon);
}

void ACustomFirstPersonnCharacter::MoveForward(float value)
{
	//Find "Forwards" and move that waya
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

void ACustomFirstPersonnCharacter::addCoinScore()
{
	coinScore++;
	
	UE_LOG(LogTemp, Warning, TEXT("Added Score to player"));

}

int ACustomFirstPersonnCharacter::getCoinScore()
{
	return coinScore;
}

void ACustomFirstPersonnCharacter::spawnWeapon() {
	Weapon = GetWorld()->SpawnActor<APistol>(Pistol, GunSpawnLocation, GunSpawnRotation);
	APlayerCameraManager* PlayerCamera = GetWorld()->GetFirstPlayerController()->PlayerCameraManager;
	Weapon->SetActorLocation(FVector(GetActorLocation().X+380.0f, GetActorLocation().Y+40.0f, GetActorLocation().Z-300.0f));
	Weapon->AttachToActor(PlayerCamera, FAttachmentTransformRules::KeepWorldTransform);
	
}

void ACustomFirstPersonnCharacter::startWeaponFire()
{
	if (Weapon->CurrentAmmo > 0) {
		Weapon->gunParentStartFire();
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("*click click click*"));
	}
}

void ACustomFirstPersonnCharacter::stopWeaponFire()
{
	Weapon->gunParentStopFire();
}

void ACustomFirstPersonnCharacter::reloadWepaon()
{
	if (Weapon->SpareMagCount > 0) {
		Weapon->CurrentAmmo = Weapon->MagCapacity;
		Weapon->SpareMagCount--;
	} else {
		UE_LOG(LogTemp, Warning, TEXT("Out of Spare mags, ammo depleted"));
	}
}
