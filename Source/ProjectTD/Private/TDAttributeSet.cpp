// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectTD/Public/TDAttributeSet.h"

void UTDAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);
	
	if (Attribute == GetHealthAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0.0f, GetMaxHealth());
	}
	
	if (Attribute == GetSpeedMultiplierAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0.0f, GetMaxSpeedMultiplier());
	}
}

void UTDAttributeSet::PreAttributeBaseChange(const FGameplayAttribute& Attribute, float& NewValue) const
{
	Super::PreAttributeBaseChange(Attribute, NewValue);
	
	if (Attribute == GetHealthAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0.0f, GetMaxHealth());
	}
	
	if (Attribute == GetSpeedMultiplierAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0.0f, GetMaxSpeedMultiplier());
	}
}
