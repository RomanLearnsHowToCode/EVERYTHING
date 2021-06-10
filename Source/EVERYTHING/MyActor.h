// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

// Basically COPY / PASTE of the content included in the .h files
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

// UCLAS is a macro - find and replace text editing features
UCLASS()
class EVERYTHING_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

	// Declaration of variables, which are then initialised in the CPP file
	int32 PlayerHealth; // int32 is type alias - is signed 32-bit value - positive and negative
	int32 BusDamage;
	int32 PlayerPowerUp;
	float PowerFactor;


	float PieCrust;
	double SuperPieCrust; // double has got more precision - means more decimal numbers

	bool bHasHealth; //b in front of boolean is recommended by Epic standard coding guidlines



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
