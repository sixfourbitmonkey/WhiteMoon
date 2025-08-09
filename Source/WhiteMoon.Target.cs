// WhiteMoon Game. Copyright sixfourbitmonkey.

using UnrealBuildTool;
using System.Collections.Generic;

public class WhiteMoonTarget : TargetRules
{
	public WhiteMoonTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "WhiteMoon" } );
	}
}
