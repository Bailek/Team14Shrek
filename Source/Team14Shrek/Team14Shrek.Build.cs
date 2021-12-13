// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Team14Shrek : ModuleRules
{
	public Team14Shrek(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
