// Fill out your copyright notice in the Description page of Project Settings.


#include "Tower_Base.h"
#include "ProjectTD/Public/Tower_Base.h"
#include "ProjectTD/Public/TowerAttributeSet.h"

// Sets default values
ATower_Base::ATower_Base()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>("AbilitySystemComponent");
	AttributeSet = CreateDefaultSubobject<UTowerAttributeSet>("AttributeSet");

}

// Called when the game starts or when spawned
void ATower_Base::BeginPlay()
{
	Super::BeginPlay();
	
}

UAbilitySystemComponent* ATower_Base::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

// Called every frame
void ATower_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATower_Base::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

