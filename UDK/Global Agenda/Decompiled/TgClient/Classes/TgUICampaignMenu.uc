/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUICampaignMenu.uc
 * 
 * Stats:
 *	Enums:1
 *	Properties:7
 *	Functions:17
 *
 *******************************************************************************/
class TgUICampaignMenu extends TgUISceneDriver_Tooltip
	native;

enum TG_CAMPAIGN_TABS
{
	CAMPAIGN_PAGE_NONE,
	CAMPAIGN_PAGE_HEXMAP,
	CAMPAIGN_PAGE_COMBAT,
	CAMPAIGN_PAGE_COMBAT_LOG,
	CAMPAIGN_PAGE_LEADERBOARD,
	CAMPAIGN_PAGE_MAX
};

var int m_nCachedHexUpdateCount;
var UIButton m_CloseButton;
var TgUICampaignMenu.TG_CAMPAIGN_TABS m_CurrentTab;
var UIButton m_HexMapTab;
var UIButton m_CombatTab;
var UIButton m_CombatLogTab;
var UIButton m_LeaderboardTab;

native function FixupTgUIScene();
native function PostOpenScene();
native function PreCloseScene();
native function bool TickTgUIScene();
native function RegisterCallbacks();
native function bool OnSceneKey(const out InputEventParameters EventParms);
native function bool OnHexDataUpdated();
native function TgAgencyData GetAgencyData();
native function OnHexAssignmentChanged();
native function OnHexAssignmentUpdated();
event FixupWidgetsUC()
{
	m_UIScene.__OnRawInputKey__Delegate = OnSceneKey;
	m_CloseButton
	none
	)
	m_CloseButton.__OnRawInputKey__Delegate = OnCloseButton;
	m_HexMapTab
	none
	)
	m_HexMapTab.__OnRawInputKey__Delegate = OnSelectHexMapTab;
	m_CombatTab
	none
	)
	m_CombatTab.__OnRawInputKey__Delegate = OnSelectCombatTab;
	m_CombatLogTab
	none
	)
	m_CombatLogTab.__OnRawInputKey__Delegate = OnSelectCombatLogTab;
	m_LeaderboardTab
	none
	)
	m_LeaderboardTab.__OnRawInputKey__Delegate = OnSelectLeaderboardTab;
}

function bool OnCloseButton(const out InputEventParameters EventParms)
{
	// End:0x60 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		CloseTgUIScene();
		return true;
	}
	return false;
}

function bool OnSelectHexMapTab(const out InputEventParameters EventParms)
{
	// End:0x66 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		SelectTab(1);
		return true;
	}
	return false;
}

function bool OnSelectCombatTab(const out InputEventParameters EventParms)
{
	// End:0x66 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		SelectTab(2);
		return true;
	}
	return false;
}

function bool OnSelectCombatLogTab(const out InputEventParameters EventParms)
{
	// End:0x66 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		SelectTab(3);
		return true;
	}
	return false;
}

function bool OnSelectLeaderboardTab(const out InputEventParameters EventParms)
{
	// End:0x66 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		SelectTab(4);
		return true;
	}
	return false;
}

event SelectTab(TgUICampaignMenu.TG_CAMPAIGN_TABS Tab)
{
	local TgHUD_Game HUD;

	HUD = TgHUD_Game(m_HUDParent);
	// End:0x5b Loop:False
	if(HUD != none && (m_CurrentTab == 0 || (Tab != m_CurrentTab)))
	{
		HUD.SelectCampaignTab(Tab);
	}
}

defaultproperties
{
	m_bHookChat=true
}