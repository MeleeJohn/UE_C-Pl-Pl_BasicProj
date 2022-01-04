// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class C_Pl_Pl_BasicProjectTarget : TargetRules
{
	public C_Pl_Pl_BasicProjectTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("C_Pl_Pl_BasicProject");
	}
}
