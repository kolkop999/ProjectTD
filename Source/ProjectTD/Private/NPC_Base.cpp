// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectTD/Public/NPC_Base.h"
#include "ProjectTD/Public/TDAttributeSet.h"

// Sets default values
ANPC_Base::ANPC_Base()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>("AbilitySystemComponent");
	AttributeSet = CreateDefaultSubobject<UTDAttributeSet>("AttributeSet");
}

// Called when the game starts or when spawned
void ANPC_Base::BeginPlay()
{
	Super::BeginPlay();
}

UAbilitySystemComponent* ANPC_Base::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

// Called every frame
void ANPC_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ANPC_Base::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}
