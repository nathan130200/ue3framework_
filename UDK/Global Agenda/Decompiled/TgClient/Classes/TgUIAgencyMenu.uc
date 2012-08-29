/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIAgencyMenu.uc
 * 
 * Stats:
 *	Enums:1
 *	Properties:12
 *	Functions:20
 *
 *******************************************************************************/
class TgUIAgencyMenu extends TgUISceneDriver_Tooltip
	native;

enum TG_AGENCY_TABS
{
	AGENCY_NONE_PAGE,
	AGENCY_GENERAL_PAGE,
	AGENCY_BASES_PAGE,
	AGENCY_ALLIANCE_PAGE,
	AGENCY_APPLICANTS_PAGE,
	AGENCY_CREATION_PAGE,
	AGENCY_MANAGEMENT_PAGE,
	AGENCY_FACILITIES_PAGE,
	AGENCY_INVENTORY_PAGE,
	AGENCY_RECRUITING_PAGE,
	AGENCY_AUDIT_PAGE,
	AGENCY_MAX
};

var bool m_bNeedsAgencyDataUpdate;
var bool m_bNeedsAllianceDataUpdate;
var UIButton m_GeneralTabButton;
var UIButton m_AllianceTabButton;
var UIButton m_BaseTabButton;
var UIButton m_ApplicantsTabButton;
var UIButton m_ManagementTabButton;
var UIButton m_FacilitiesTabButton;
var UIButton m_InventoryTabButton;
var UIButton m_RecruitingTabButton;
var UIButton m_AuditingTabButton;
var UIButton m_CloseButton;

native function bool TickTgUIScene();
native function PostOpenScene();
native function FixupTgUIScene();
native function FixupWidgets();
native function UpdateViewablePanels();
native function TgAgencyData GetAgencyData();
native function TgAllianceData GetAllianceData();
native function bool OnAgencyMenuKey(const out InputEventParameters EventParms);
event FixupWidgetsUC()
{
	m_UIScene.__OnRawInputKey__Delegate = OnAgencyMenuKey;
	m_GeneralTabButton
	none
	)
	m_GeneralTabButton.__OnRawInputKey__Delegate = OnSelectGeneralTab;
	m_BaseTabButton
	none
	)
	m_BaseTabButton.__OnRawInputKey__Delegate = OnSelectBaseTab;
	m_AllianceTabButton
	none
	)
	m_AllianceTabButton.__OnRawInputKey__Delegate = OnSelectAllianceTab;
	m_ApplicantsTabButton
	none
	)
	m_ApplicantsTabButton.__OnRawInputKey__Delegate = OnSelectApplicantsTab;
	m_ManagementTabButton
	none
	)
	m_ManagementTabButton.__OnRawInputKey__Delegate = OnSelectManagementTab;
	m_FacilitiesTabButton
	none
	)
	m_FacilitiesTabButton.__OnRawInputKey__Delegate = OnSelectFacilitiesTab;
	m_InventoryTabButton
	none
	)
	m_InventoryTabButton.__OnRawInputKey__Delegate = OnSelectInventoryTab;
	m_RecruitingTabButton
	none
	)
	m_RecruitingTabButton.__OnRawInputKey__Delegate = OnSelectRecruitingTab;
	m_AuditingTabButton
	none
	)
	m_AuditingTabButton.__OnRawInputKey__Delegate = OnSelectAuditingTab;
	m_CloseButton
	none
	)
	m_CloseButton.__OnRawInputKey__Delegate = OnCloseButton;
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

function bool OnSelectGeneralTab(const out InputEventParameters EventParms)
{
	// End:0x66 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		SelectTab(1);
		return true;
	}
	return false;
}

function bool OnSelectBaseTab(const out InputEventParameters EventParms)
{
	// End:0x66 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		SelectTab(2);
		return true;
	}
	return false;
}

function bool OnSelectAllianceTab(const out InputEventParameters EventParms)
{
	// End:0x66 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		SelectTab(3);
		return true;
	}
	return false;
}

function bool OnSelectApplicantsTab(const out InputEventParameters EventParms)
{
	// End:0x66 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		SelectTab(4);
		return true;
	}
	return false;
}

function bool OnSelectManagementTab(const out InputEventParameters EventParms)
{
	// End:0x66 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		SelectTab(6);
		return true;
	}
	return false;
}

function bool OnSelectFacilitiesTab(const out InputEventParameters EventParms)
{
	// End:0x66 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		SelectTab(7);
		return true;
	}
	return false;
}

function bool OnSelectRecruitingTab(const out InputEventParameters EventParms)
{
	// End:0x66 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		SelectTab(9);
		return true;
	}
	return false;
}

function bool OnSelectAuditingTab(const out InputEventParameters EventParms)
{
	// End:0x66 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		SelectTab(10);
		return true;
	}
	return false;
}

function bool OnSelectInventoryTab(const out InputEventParameters EventParms)
{
	// End:0x66 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		SelectTab(8);
		return true;
	}
	return false;
}

event SelectTab(TgUIAgencyMenu.TG_AGENCY_TABS Tab)
{
	local TgHUD_Game HUD;

	HUD = TgHUD_Game(m_HUDParent);
	// End:0x34 Loop:False
	if(HUD != none)
	{
		HUD.SelectAgencyTab(Tab);
	}
}

defaultproperties
{
	m_bHookChat=true
}