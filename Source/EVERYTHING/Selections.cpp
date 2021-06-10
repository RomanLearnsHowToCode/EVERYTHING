// Fill out your copyright notice in the Description page of Project Settings.


#include "Selections.h"

// Sets default values
ASelections::ASelections()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASelections::BeginPlay()
{
	Super::BeginPlay();
	
	ObjectHealth = 100;
	Damage = 50;
	bIsObjectDestroyed = false;

	// IF statement
	/*
	if(condition) statement

	comparsion operators:

	== - equal
	!= - not equal
	< - less than
	> - greater than
	<= - less than or equal
	>= - greather than or equal
	*/
	
	// Simple Health check of object
	// If object health is less or equal 0, then change the value of boolean
	if (ObjectHealth <= 0)
	{
		bIsObjectDestroyed = true;
		} else if (ObjectHealth > Damage){
			//do something
			}else{
			ObjectHealth -= Damage;
	}
	
	// Take value of Object Health and switch on case
	/*switch (ObjectHealth)
	{
	case: 50;
		// STATEMENT - damaged
		break;
	case: 100;
		// STATEMENT - pristine
		break;
	case: 0;
		// STATEMENT - destroyed
		break;
	default:
		// STATEMENT - if none of the previous cases has met
		break;
	}*/

	// LOOPS - iteration statements, loop statement 


	CountOfGuys = 10;

	/*
	
	While loop - repeat statement if the condition is true
	Do while loop - 
	For loop -
	Range based for loop -

	*/
	
	// if the amount of guys is greater than 0
	while (CountOfGuys > 0)
	{
		// counter to access the array of actors
		CountOfGuys--;
		// getting rid of the actors to hide
	
		GEngine->AddOnScreenDebugMessage(-1, 4.0f, FColor::Magenta, "While Loop");
		UE_LOG(LogTemp, Warning, TEXT("Count of guys %d"), CountOfGuys);
	}

	/*
	do while
		guaranteed at least one iteration of the statement
		it's like while loop, except that the condition is evaluated
		after the execution of a statement instead of before
	*/

	do {
		// counter to access the array of actors
		CountOfGuys--;

	} while (CountOfGuys > 0);

	// For loop - 3 sections
	for (int i = 0; i < CountOfGuys; i++)
	{
		// statement
	}
	
	// Range based for loop (for each loop)
	// iterates over all the elements in range

	/*
	for (AActor* MyActorGuy:ActorsToDestroy)
	{
		//statement
	}
	*/
	// If you want to ever stop a loop before it finishes, use keyword : BREAK

}


// Called every frame
void ASelections::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

