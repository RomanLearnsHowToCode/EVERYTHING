#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true; // Always change to false if not need to tick (CPU heavy)

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	
	Super::BeginPlay();

	// macro that accept arguments
	UE_LOG(LogTemp, Warning, TEXT("Hello World"));

	// Variables are named pieces of memory

	PlayerHealth = 100;; // int32 is type alias - is signed 32-bit value - positive and negative
	BusDamage = 50;
	PlayerPowerUp = 25;
	PowerFactor = 1.5;

	// Aritmetic operators in UE4  
	/*
	
	+ - addition
	- - subtraction
	* - multiplication
	/ - division
	% - modulo

	*/

	// Let's hit player with bus
	PlayerHealth = PlayerHealth - BusDamage;
	// Or we can write it in compound assignment
	//PlayerHealth -= BusDamage; 
	UE_LOG(LogTemp, Warning, TEXT("PlayerHealh after bus hit: %d"), PlayerHealth);

	PlayerHealth = PlayerHealth + (PlayerPowerUp * PowerFactor);
	UE_LOG(LogTemp, Warning, TEXT("Player power after picking powerup: %d"), PlayerHealth);

	BusDamage /= 2;
	UE_LOG(LogTemp, Warning, TEXT("Bus Damage halved is now: %d"), BusDamage);

	// % remainder of divison
	int x = 11 % 3; 

	UE_LOG(LogTemp, Warning, TEXT("X value modulo value: %d"), x);

	PieCrust = 3.14;
	SuperPieCrust = 3.14159; // double has got more precision - means more decimal numbers

	bHasHealth = true; //b in front of boolean is recommended by Epic standard coding guidlines

}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

