// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "TDAttributeSet.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

UCLASS()
class PROJECTTD_API UTDAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FGameplayAttributeData Health = 100.0f;
	ATTRIBUTE_ACCESSORS(UTDAttributeSet, Health);
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FGameplayAttributeData MaxHealth = 100.0f;
	ATTRIBUTE_ACCESSORS(UTDAttributeSet, MaxHealth);
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FGameplayAttributeData SpeedMultiplier = 1.5f;
	ATTRIBUTE_ACCESSORS(UTDAttributeSet, SpeedMultiplier);
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FGameplayAttributeData MaxSpeedMultiplier = 2.0f;
	ATTRIBUTE_ACCESSORS(UTDAttributeSet, MaxSpeedMultiplier);
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FGameplayAttributeData Damage = 10.0f;
	ATTRIBUTE_ACCESSORS(UTDAttributeSet, Damage);
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FGameplayAttributeData Range = 1000.0f;
	ATTRIBUTE_ACCESSORS(UTDAttributeSet, Range);
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FGameplayAttributeData AttackSpeed = 2.0f;
	ATTRIBUTE_ACCESSORS(UTDAttributeSet, AttackSpeed);
	
	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
	virtual void PreAttributeBaseChange(const FGameplayAttribute& Attribute, float& NewValue) const override;
};
