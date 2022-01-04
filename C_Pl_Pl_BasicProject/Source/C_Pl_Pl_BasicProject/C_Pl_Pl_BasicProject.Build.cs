// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class C_Pl_Pl_BasicProject : ModuleRules
{
	public C_Pl_Pl_BasicProject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
