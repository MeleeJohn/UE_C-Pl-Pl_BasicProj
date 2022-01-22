// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GameFramework/Character.h"
#include "GameFramework/Actor.h"
#include "GunParentClass.h"
#include "Pistol.h"
#include "Math/Rotator.h"
#include "Math/Vector.h"
#include "CustomFirstPersonnCharacter.generated.h"

UCLASS()
class ACustomFirstPersonnCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACustomFirstPersonnCharacter();
	//UPROPERTY(EditDefaultsOnly, Category = "Camera")
	//TSubclassOf<ACameraActor> playerCamera;

	FVector GunSpawnLocation = GetActorLocation();
	FRotator GunSpawnRotation = FRotator(0.0f, -90.0f, 0.0f);

	UPROPERTY(EditDefaultsOnly, Category = "Guns")
	TSubclassOf<APistol> Pistol;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UFUNCTION()
	void spawnWeapon();

	UFUNCTION()
	void startWeaponFire();

	UFUNCTION()
	void stopWeaponFire();
	/*UPROPERTY(EditAnywhere, Category = "Class Types")
		TSubclassOf<UUserWidget> WidgetClass;

	//UPROPERTY(VisibleInstanceOnly, Category="Runtime")
		//class UTextWidget* TextWidget;
	UPROPERTY(VisibleInstanceOnly, Category = "Runtime")
		class UTextWidget* TextWidget;*/

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void MoveForward(float value);

	void MoveRight(float value);

	UFUNCTION()
		void startJump();

	UFUNCTION()
		void stopJump();

	void addCoinScore();
	int getCoinScore();

private:
	int coinScore = 0;
	AGunParentClass* Weapon;
	
};
