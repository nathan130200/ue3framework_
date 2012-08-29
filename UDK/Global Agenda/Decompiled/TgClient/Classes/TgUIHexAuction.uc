/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIHexAuction.uc
 * 
 * Stats:
 *	Properties:23
 *	Functions:13
 *
 *******************************************************************************/
class TgUIHexAuction extends TgUISceneDriver
	native;

var UIPanel m_PopupPanel;
var UIPanel m_HeaderPanel;
var UILabel m_HeaderLabel;
var UIButton m_CoverButton;
var UIPanel m_MissilePanel;
var TgUIPrimaryHUD_SlotWidgets m_MissileSlot;
var UIButton m_MissileSelectButton;
var UIPanel m_MissionTypePanel;
var UICheckbox m_MissionCaptureCheckbox;
var UICheckbox m_MissionStealCheckbox;
var UIPanel m_BiddingPanel;
var UILabel m_CurrentBidLabel;
var UILabel m_RemainingTimeLabel;
var UIEditBox m_BidEntryBox;
var UIButton m_PlaceBidButton;
var UILabel m_AvailableCreditsLabel;
var UIPanel m_InfoPanel;
var UILabel m_MessageLabel;
var int m_nHexPosition;
var bool m_bTacticalStrikeMode;
var int m_nMissileInvId;
var int m_nAttackType;
var native Pointer m_pHexAuctionData;

native function PostInitSceneDriver();
native function FixupTgUIScene();
native function bool TickTgUIScene();
native function FixupWidgets();
native function PostOpenScene();
native function RequestHexAuctionData();
native function UpdateButtonCovers();
native function bool OnPlaceBidClicked(const out InputEventParameters EventParms);
native function bool OnSelectMissile(const out InputEventParameters EventParms);
native function OnMissionTypeChanged(UIObject Sender, int PlayerIndex);
event FixupWidgetsUC()
{
	m_PlaceBidButton.__OnRawInputKey__Delegate = OnPlaceBidClicked;
	return @NULL(201327872);
	@NULL(-54271)
	OnSceneInputKeyDelegate != ;
	@NULL(-54271)
	OnSelectMissile != ;
	@NULL(-53247)
	OnMissionTypeChanged != ;
	@NULL(-53247)
	OnMissionTypeChanged != @NULL(34079232);
}

function SetHexPosition(int nId)
{
	m_nHexPosition = nId;
	RequestHexAuctionData();
}

function bool OnSceneInputKeyDelegate(const out InputEventParameters EventParms)
{
	// End:0x43 Loop:False
	if(EventParms.InputKeyName == 'Escape' && (EventParms.EventType == 0))
	{
		CloseTgUIScene();
		return true;
	}
	return true;
}

defaultproperties
{
	m_nHexPosition=235
}