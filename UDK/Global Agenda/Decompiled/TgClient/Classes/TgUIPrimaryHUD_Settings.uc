/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIPrimaryHUD_Settings.uc
 * 
 * Stats:
 *	Constants:2
 *	Enums:1
 *	Structs:1
 *	Properties:6
 *	Functions:11
 *
 *******************************************************************************/
class TgUIPrimaryHUD_Settings extends Object
	native
	config(UI)
	perobjectconfig;

const PROGRESS_TIMESHOWINGMAX = 0.25;
const PROGRESS_MAX = 1.0;

enum VisibilityConfigType
{
	VCT_User,
	VCT_Managed,
	VCT_MAX
};

struct native BasePanelStruct
{
	var UIPanel BasePanel;
	var TgUISceneDriver SceneDriver;

	structdefaultproperties
	{
		BasePanel=none
		SceneDriver=none
	}
};

var bool m_bIgnore;
var bool m_bHidden;
var config bool m_bHiddenConfig;
var bool m_bTickWhileHidden;
var init array<init BasePanelStruct> m_BasePanels;
var TgUIPrimaryHUD_Settings.VisibilityConfigType m_VisibilityConfigType;

native function SetUIVisibility(bool Visible);
native function IgnoreSettings(bool bIgnore);
native function AddBasePanel(UIPanel BasePanel, TgUISceneDriver SceneDriver);
native function RemoveBasePanel(UIPanel BasePanel);
native function RemoveScene(TgUISceneDriver Scene);
native function CleanBasePanelList();
native function bool IsHidden();
native function bool ShouldTick();
native function SaveConfigSettings();
native function LoadConfigSettings();
native function Detach();
