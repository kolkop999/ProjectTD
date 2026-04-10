// Fill out your copyright notice in the Description page of Project Settings.


#include "TDAbilitySystemComponent.h"

void UTDAbilitySystemComponent::ApplyAttributeMapWithEffect(const TMap<FGameplayAttribute, float>& AttributeMap)
{
	
	UGameplayEffect* NewGE = NewObject<UGameplayEffect>(GetTransientPackage(), TEXT("AttributeOverrideEffect"));
	NewGE->DurationPolicy = EGameplayEffectDurationType::Instant;

	for (const TPair<FGameplayAttribute, float>& Elem : AttributeMap)
	{
		FGameplayModifierInfo Modifier;
		Modifier.Attribute = Elem.Key;
		Modifier.ModifierOp = EGameplayModOp::Override;
		Modifier.ModifierMagnitude = FScalableFloat(Elem.Value);

		NewGE->Modifiers.Add(Modifier);
	}

	ApplyGameplayEffectToSelf(NewGE,1, MakeEffectContext());
}