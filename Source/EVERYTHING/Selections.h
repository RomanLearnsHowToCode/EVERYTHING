// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Selections.generated.h"

UCLASS()
class EVERYTHING_API ASelections : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASelections();

	// Variables for Selections
	int32 ObjectHealth;
	int32 Damage;
	bool bIsObjectDestroyed;


	// Variables for Loops
	
	int32 CountOfGuys;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
