/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUICampaignMenu_HexMap.uc
 * 
 * Stats:
 *	Enums:1
 *	Properties:63
 *	Functions:36
 *
 *******************************************************************************/
class TgUICampaignMenu_HexMap extends TgUICampaignMenu
	native;

enum eMapPanDirections
{
	PanLeft,
	PanRight,
	PanUp,
	PanDown,
	eMapPanDirections_MAX
};

var bool m_bDragMode;
var bool m_bZoneChangeDisable;
var Vector m_DragMousePosition;
var float m_fZoomDelta;
var MaterialInstanceConstant m_AllianceIconParentMIC;
var UIComboBox m_ZoneListComboBox;
var UILabel m_ZoneNameLabel;
var UILabel m_ZoneMaintenanceTimeHeader;
var UILabel m_ZoneMaintenanceTimeLabel;
var UILabel m_ZoneEndTimeHeader;
var UILabel m_ZoneEndTimeLabel;
var UILabel m_ForceTimeHeader;
var UILabel m_ForceTimeLabel;
var UIButton m_OpenTerritories;
var UIPanel m_FilterPanel;
var UICheckbox m_ShowCombatCheckBox;
var UICheckbox m_ShowStrategicCheckBox;
var UICheckbox m_ShowAllianceCheckBox;
var UICheckbox m_ShowClosedCheckBox;
var UIPanel m_HexOptionsPanel;
var UIPanel m_HexOptionsDefendPanel;
var UIButton m_HexOptionsDefendButton;
var UILabel m_HexOptionsDefendTeammatesLabel;
var UILabel m_HexOptionsDefendBidTimeLabel;
var UIPanel m_HexOptionsJoinPanel;
var UIButton m_HexOptionsJoinButton;
var UIButton m_HexOptionsJoinWithdrawButton;
var UIPanel m_HexOptionsBidPanel;
var UIButton m_HexOptionsBidButton;
var UILabel m_HexOptionsBidFeedbackLabel;
var UIPanel m_HexOptionsCancelBidPanel;
var UIButton m_HexOptionsCancelBidButton;
var UILabel m_HexOptionsCancelBidFeedbackLabel;
var UIPanel m_HexOptionsMIPPanel;
var UILabel m_HexOptionsMIPAttackerLabel;
var UILabel m_HexOptionsMIPDefenderLabel;
var UIPanel m_HexOptionsLockdownPanel;
var UILabel m_HexOptionsLockdownTimeLabel;
var UIPanel m_HexOptionsShieldProgressPanel;
var UIImage m_HexOptionsShieldProgessImage;
var MaterialInstanceConstant m_HexOptionsShieldProgressMIC;
var UIPanel m_HexTimePanel;
var UILabel m_HexTimeHeaderLabel;
var UILabel m_HexTimeValueLabel;
var UIPanel m_HexInfoPanel;
var UILabel m_HexInfoHeaderLabel;
var UILabel m_HexInfoAgencyLabel;
var UILabel m_HexInfoAllianceLabel;
var UILabel m_HexInfoRegionLabel;
var UIPanel m_HexInfoBonusPanel;
var UILabel m_HexInfoBonusLabel;
var UIPanel m_FacilityInfoPanel;
var UILabel m_FacilityNameLabel;
var UIButton m_FacilityIcon;
var UIPanel m_NavigationPanel;
var UIButton m_ZoomInButton;
var UIButton m_ZoomOutButton;
var UIButton m_PanButtons[4];
var UIPanel m_PopupMessagePanel;
var UILabel m_PopupMessageLabel;
var UIButton m_PopupMessageButton;
var TgUIHexWidget_Zone m_pHexWidget;
var MaterialInstanceConstant m_ProgressBarParent;

native function PostOpenScene();
native function FixupTgUIScene();
native function bool TickTgUIScene();
native function RegisterCallbacks();
native function PostRender();
native function bool OnSceneKey(const out InputEventParameters EventParms);
native function OpenPopupMessage(int nMsgId);
native function ClosePopupMessage();
native function HexDefend();
native function HexJoin();
native function HexCapture();
native function HexSteal();
native function HexRaid();
native function HexWithdraw();
native function OpenTerritories();
native function bool OnHexDataUpdated();
native function OnHexAssignmentUpdated();
native function bool UpdateHexMap();
native function UpdateToolTipData();
native function UpdateZoneList();
native function UpdateHexInformation();
native function UpdateHexOptionDisplay();
native function OnZoneChanged(UIObject Sender, int PlayerIndex);
native function bool OnHexBid(const out InputEventParameters EventParms);
native function bool OnHexBidCancel(const out InputEventParameters EventParms);
native function bool OnConfirmYesClicked(const out InputEventParameters EventParms);
native function bool OnNavButton(const out InputEventParameters EventParms);
event FixupWidgetsUC()
{
	super.FixupWidgetsUC();
	m_ZoneListComboBox.__OnValueChanged__Delegate = OnZoneChanged;	
	@NULL(423886848)
	m_HexOptionsJoinButton
	// BlockSize:3072
	switch(@NULL(-54271))
	{
		OnHexJoin != ;
		m_HexOptionsCancelBidButton
		// BlockSize:3072
		switch(@NULL(-54271))
		{
			OnHexBidCancel != ;
			m_OpenTerritories
			// BlockSize:3072
			switch(@NULL(-54271))
			{
				OnOpenTerritories != ;
}

function bool OnHexDefend(const out InputEventParameters EventParms)
{
	// End:0x64 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		HexDefend();
		return true;
	}
	return false;
}

function bool OnHexJoin(const out InputEventParameters EventParms)
{
	// End:0x64 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		HexJoin();
		return true;
	}
	return false;
}

function bool OnHexCapture(const out InputEventParameters EventParms)
{
	// End:0x64 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		HexCapture();
		return true;
	}
	return false;
}

function bool OnHexSteal(const out InputEventParameters EventParms)
{
	// End:0x64 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		HexSteal();
		return true;
	}
	return false;
}

function bool OnHexRaid(const out InputEventParameters EventParms)
{
	// End:0x64 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		HexRaid();
		return true;
	}
	return false;
}

function bool OnHexWithdraw(const out InputEventParameters EventParms)
{
	// End:0x64 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		HexWithdraw();
		return true;
	}
	return false;
}

function bool OnOpenTerritories(const out InputEventParameters EventParms)
{
	// End:0x64 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		OpenTerritories();
		return true;
	}
	return false;
}

function bool OnPopupButton(const out InputEventParameters EventParms)
{
	// End:0x64 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		ClosePopupMessage();
		return true;
	}
	return false;
}

defaultproperties
{
	m_ProgressBarParent=MaterialInstanceConstant'HUD_A.Achievement_Progression_Bar.MIC_Task_ProgressionBar'
	m_CurrentTab=CAMPAIGN_PAGE_HEXMAP
}