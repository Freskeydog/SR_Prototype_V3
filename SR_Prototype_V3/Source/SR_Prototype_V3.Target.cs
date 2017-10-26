// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class SR_Prototype_V3Target : TargetRules
{
	public SR_Prototype_V3Target(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "SR_Prototype_V3" } );
	}
}
