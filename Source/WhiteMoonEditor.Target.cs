// WhiteMoon Game. Copyright sixfourbitmonkey.

using UnrealBuildTool;
using System.Collections.Generic;

public class WhiteMoonEditorTarget : TargetRules
{
	public WhiteMoonEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "WhiteMoon" } );
	}
}
