/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIAgentProfile.uc
 * 
 * Stats:
 *	Constants:1
 *	Enums:1
 *	Properties:17
 *	Functions:18
 *
 *******************************************************************************/
class TgUIAgentProfile extends TgUISceneDriver_Tooltip
	native;

const NBR_PROFILE_BUTTONS = 5;

enum TG_AGENT_TABS
{
	AGENT_NONE_PAGE,
	AGENT_EQUIP_PAGE,
	AGENT_SKILLS_PAGE,
	AGENT_STATS_PAGE,
	AGENT_INVENTORY_PAGE,
	AGENT_ACHIEVEMENTS_PAGE,
	AGENT_MAX
};

var UIButton m_EquipmentTabButton;
var UIButton m_SkillsTabButton;
var UIButton m_StatsTabButton;
var UIButton m_InventoryTabButton;
var UIButton m_AchievementsTabButton;
var UIButton m_CloseButton;
var TgInventoryManager m_InventoryManager;
var TgPawn_Character m_PlayerPawn;
var TgPawn_Character m_InspectedPawn;
var UIButton m_ProfileButtonArray[5];
var UILabel m_ProfileLabelArray[5];
var name m_ButtonStyleResolverTag;
var name m_ButtonActiveStyleName;
var name m_ButtonInactiveStyleName;
var name m_ProfileActiveStyleName;
var name m_ProfileInactiveStyleName;
var float m_fLastProfileChange;

native function bool TickTgUIScene();
native function PostOpenScene();
native function FixupTgUIScene();
native function FixupWidgets();
native function bool OnAgentMenuKey(const out InputEventParameters EventParms);
native function SetInspectedPawn(TgPawn_Character Pawn);
native function bool IsReadOnlyMode();
native function bool CanChangeProfiles();
native function TgPawn_Character GetPawnToUse();
native function bool OnSelectProfileButton(const out InputEventParameters EventParms);
event FixupWidgetsUC()
{
	local int I;

	m_UIScene.__OnRawInputKey__Delegate = OnAgentMenuKey;
	m_EquipmentTabButton
	none
	)
	m_EquipmentTabButton.__OnRawInputKey__Delegate = OnSelectEquipTab;
	m_SkillsTabButton
	none
	)
	m_SkillsTabButton.__OnRawInputKey__Delegate = OnSelectSkillsTab;
	m_StatsTabButton
	none
	)
	m_StatsTabButton.__OnRawInputKey__Delegate = OnSelectStatsTab;
	m_InventoryTabButton
	none
	)
	m_InventoryTabButton.__OnRawInputKey__Delegate = OnSelectInvTab;
	m_AchievementsTabButton
	none
	)
	m_AchievementsTabButton.__OnRawInputKey__Delegate = OnSelectAchieveTab;
	m_CloseButton
	none
	)
	m_CloseButton.__OnRawInputKey__Delegate = OnCloseButton;
	@NULL(1040655616)
	@NULL(161808534)
	@NULL(369437696)
	// End:0x134 Loop:False
	if(m_ProfileButtonArray[I] != none)
	{
		m_ProfileButtonArray[I].__OnRawInputKey__Delegate = OnSelectProfileButton;
	}
}

function bool OnCloseButton(const out InputEventParameters EventParms)
{
	// End:0x60 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		CloseTgUIScene();
		return true;
	}
}

function bool OnSelectEquipTab(const out InputEventParameters EventParms)
{
	// End:0x66 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		SelectTab(1);
		return true;
	}
	return false;
}

function bool OnSelectSkillsTab(const out InputEventParameters EventParms)
{
	// End:0x66 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		SelectTab(2);
		return true;
	}
	return false;
}

function bool OnSelectStatsTab(const out InputEventParameters EventParms)
{
	// End:0x66 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		SelectTab(3);
		return true;
	}
	return false;
}

function bool OnSelectInvTab(const out InputEventParameters EventParms)
{
	// End:0x66 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		SelectTab(4);
		return true;
	}
	return false;
}

function bool OnSelectAchieveTab(const out InputEventParameters EventParms)
{
	// End:0x66 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		SelectTab(5);
		return true;
	}
	return false;
}

event SelectTab(TgUIAgentProfile.TG_AGENT_TABS Tab)
{
	local TgHUD_Game HUD;

	HUD = TgHUD_Game(m_HUDParent);
	// End:0x39 Loop:False
	if(HUD != none)
	{
		HUD.SelectAgentTab(Tab, m_InspectedPawn);
	}
}

defaultproperties
{
	m_ButtonStyleResolverTag=Background Image Style
	m_ButtonActiveStyleName=TG_NS_Button_Toggle_v1b
	m_ButtonInactiveStyleName=TG_NS_Button_Toggle_v1
	m_ProfileActiveStyleName=TG_NS_Button_Round_Generic_v1b
	m_ProfileInactiveStyleName=TG_NS_Button_Round_Generic_v1
	m_bHookChat=true
}