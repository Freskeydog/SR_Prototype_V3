// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class SR_Prototype_V3EditorTarget : TargetRules
{
	public SR_Prototype_V3EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "SR_Prototype_V3" } );
	}
}
