// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "TDAbilitySystemComponent.generated.h"

class USCGameplayAbility;
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAttributeChangedDelegate, const FGameplayAttribute&, Attribute, float, OldValue, float, NewValue);

UCLASS()
class PROJECTTD_API UTDAbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	void ApplyAttributeMapWithEffect(const TMap<FGameplayAttribute, float>& AttributeMap);
};
