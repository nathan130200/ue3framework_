/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIAgencyMenu_Management.uc
 * 
 * Stats:
 *	Structs:2
 *	Properties:21
 *	Functions:36
 *
 *******************************************************************************/
class TgUIAgencyMenu_Management extends TgUIAgencyMenu
	native;

struct native sRankDisplay
{
	var UILabel rankNameLabel;
	var UIButton rankButton;
	var UIImage rankHighlight;
	var UIPrefabInstance rankPanelInstance;
	var int rankIndex;

	structdefaultproperties
	{
		rankNameLabel=none
		rankButton=none
		rankHighlight=none
		rankPanelInstance=none
		rankIndex=0
	}
};

struct native sRankDetailPanel
{
	var UIPanel detailPanel;
	var UIButton detailPromoteButton;
	var UIButton detailDemoteButton;
	var UIButton detailRemoveButton;
	var UIPanel detailCoverPanel;
	var UIButton detailCoverButton;
	var UIEditBox detailNameEditBox;
	var UICheckbox detailOfficerCommentEditCheckBox;
	var UICheckbox detailOfficerCommentViewCheckBox;
	var UICheckbox detailPublicCommentEditCheckBox;
	var UICheckbox detailMOTDEditCheckBox;
	var UICheckbox detailDescriptionEditCheckBox;
	var UICheckbox detailInvitePlayerCheckBox;
	var UICheckbox detailPromotePlayerCheckBox;
	var UICheckbox detailDemotePlayerCheckBox;
	var UICheckbox detailRemovePlayerCheckBox;
	var UICheckbox detailFacilityMgmtCheckBox;
	var UICheckbox detailRemoveInvCheckBox;

	structdefaultproperties
	{
		detailPanel=none
		detailPromoteButton=none
		detailDemoteButton=none
		detailRemoveButton=none
		detailCoverPanel=none
		detailCoverButton=none
		detailNameEditBox=none
		detailOfficerCommentEditCheckBox=none
		detailOfficerCommentViewCheckBox=none
		detailPublicCommentEditCheckBox=none
		detailMOTDEditCheckBox=none
		detailDescriptionEditCheckBox=none
		detailInvitePlayerCheckBox=none
		detailPromotePlayerCheckBox=none
		detailDemotePlayerCheckBox=none
		detailRemovePlayerCheckBox=none
		detailFacilityMgmtCheckBox=none
		detailRemoveInvCheckBox=none
	}
};

var UIPanel m_ManagementPagePanel;
var UIPanel m_DisbandPanel;
var UIButton m_DisbandButton;
var UIPanel m_TransferLeaderPanel;
var UIEditBox m_TransferLeaderEditBox;
var UIButton m_TransferLeaderButton;
var UIEditBox m_AgencyDescriptionEditBox;
var UIButton m_AgencyDescriptionButton;
var UILabel m_AgencyDescriptionPreview;
var UIComboBox m_AgencyRegionComboBox;
var int m_SelectedSiteIndex;
var int m_SelectedRankIndex;
var init array<init sAgencyRankData> m_EditedRankData;
var bool m_bRankDataDirty;
var bool m_bSuppressRankValueUpdate;
var bool m_bCanEditRanks;
var UIComboBox m_RankComboBox;
var UIButton m_RankAddButton;
var UIButton m_RankSendButton;
var UIButton m_RankRevertButton;
var sRankDetailPanel m_RankDetailPanel;

native function UpdateViewablePanels();
native function bool SelectRank(int nRankId);
native function SetAgencyDescription();
native function SetAgencyRegion();
native function TransferLeader();
native function Disband();
native function AddRank();
native function RemoveRank();
native function SendRankData();
native function RevertRankData();
native function PromoteRank();
native function DemoteRank();
native function RankValueUpdated(UIObject Sender);
native function UpdateRankList();
native function UpdateDetailPanel(sAgencyRankData rankData);
native function FixupWidgets();
native function PostOpenScene();
native function PreCloseScene();
native function bool TickTgUIScene();
native function OnRankChanged(UIObject Sender, int PlayerIndex);
native function OnAgencyDescriptionValueChanged(UIObject Sender, int PlayerIndex);
native function RegionComboBoxChanged(UIObject Sender, int PlayerIndex);
event FixupWidgetsUC()
{
	super.FixupWidgetsUC();
	m_DisbandButton.__OnRawInputKey__Delegate = OnAgencyDisband;
	stop;
	@NULL(201327872)
	@NULL(-54015)
	OnNotifyEditBoxStateChanged != stop;
	@NULL(-54015)
	OnNotifyEditBoxStateChanged != stop;
	@NULL(-52991)
	OnTransferLeaderSubmitText != stop;
	@NULL(-54271)
	OnTransferLeaderButton != stop;
	@NULL(-53247)
	OnAgencyDescriptionValueChanged != stop;
	@NULL(-52991)
	OnAgencyDescriptionSubmitText != stop;
	@NULL(-54271)
	OnAgencyDescriptionButton != stop;
	@NULL(-54271)
	OnRankAdd != stop;
	@NULL(-54271)
	OnRankSend != stop;
	@NULL(-54271)
	OnRankRevert != stop;
	@NULL(-53247)
	OnRankChanged != stop;
	@NULL(-738131712)
	stop;
	@NULL(201327872)
	@NULL(-54271)
	OnRankDisabled != stop;
	@NULL(-738131712)
	stop;
	@NULL(201327872)
	@NULL(-54271)
	OnRankPromote != stop;
	@NULL(-738131712)
	stop;
	@NULL(201327872)
	@NULL(-54271)
	OnRankDemote != stop;
	@NULL(-738131712)
	stop;
	@NULL(201327872)
	@NULL(-54271)
	OnRankRemove != stop;
	@NULL(-738131712)
	stop;
	@NULL(201327872)
	@NULL(-53247)
	OnRankValueChanged != stop;
	@NULL(-738131712)
	stop;
	@NULL(201327872)
	@NULL(-53247)
	OnRankValueChanged != stop;
	@NULL(-738131712)
	stop;
	@NULL(201327872)
	@NULL(-53247)
	OnRankValueChanged != stop;
	@NULL(-738131712)
	stop;
	@NULL(201327872)
	@NULL(-53247)
	OnRankValueChanged != stop;
	@NULL(-738131712)
	stop;
	@NULL(201327872)
	@NULL(-53247)
	OnRankValueChanged != stop;
	@NULL(-738131712)
	stop;
	@NULL(201327872)
	@NULL(-53247)
	OnRankValueChanged != stop;
	@NULL(-738131712)
	stop;
	@NULL(201327872)
	@NULL(-53247)
	OnRankValueChanged != stop;
	@NULL(-738131712)
	stop;
	@NULL(201327872)
	@NULL(-53247)
	OnRankValueChanged != stop;
	@NULL(-738131712)
	stop;
	@NULL(201327872)
	@NULL(-53247)
	OnRankValueChanged != stop;
	@NULL(-738131712)
	stop;
	@NULL(201327872)
	@NULL(-53247)
	OnRankValueChanged != stop;
	@NULL(-738131712)
	stop;
	@NULL(201327872)
	@NULL(-53247)
	OnRankValueChanged != stop;
	@NULL(-738131712)
	stop;
	@NULL(201327872)
	@NULL(-53247)
	OnRankValueChanged != stop;
	@NULL(-738131712)
	stop;
	@NULL(201327872)
	@NULL(-53247)
	OnRankValueChanged != @NULL(34079232);
}

function bool OnAgencyDisband(const out InputEventParameters EventParms)
{
	// End:0x64 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		Disband();
		return true;
	}
	return false;
}

function bool OnRankAdd(const out InputEventParameters EventParms)
{
	// End:0x47 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		AddRank();
		return true;
	}
	return false;
}

function bool OnRankRemove(const out InputEventParameters EventParms)
{
	// End:0x47 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		RemoveRank();
		return true;
	}
	return false;
}

function bool OnRankSend(const out InputEventParameters EventParms)
{
	// End:0x47 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		SendRankData();
		return true;
	}
	return false;
}

function bool OnRankRevert(const out InputEventParameters EventParms)
{
	// End:0x47 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		RevertRankData();
		return true;
	}
	return false;
}

function bool OnRankPromote(const out InputEventParameters EventParms)
{
	// End:0x47 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		PromoteRank();
		return true;
	}
	return false;
}

function bool OnRankDemote(const out InputEventParameters EventParms)
{
	// End:0x47 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		DemoteRank();
		return true;
	}
	return false;
}

function OnRankValueChanged(UIObject Sender, int PlayerIndex)
{
	RankValueUpdated(Sender);
}

function bool OnRankDisabled(const out InputEventParameters EventParms)
{
	// End:0x3e Loop:False
	if(m_RankDetailPanel.detailCoverPanel != none && (!m_RankDetailPanel.detailCoverPanel.IsHidden()))
	{
		return true;
	}
	// End:0x58
	else
	{
		// End:0x58 Loop:False
		if(!m_bCanEditRanks || (m_SelectedRankIndex == 0))
		{
			return true;
		}
	}
	return false;
}

function bool OnTransferLeaderSubmitText(UIEditBox ebox, int PlayerIndex)
{
	TransferLeader();
	return false;
}

function bool OnTransferLeaderButton(const out InputEventParameters EventParms)
{
	// End:0x45 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		TransferLeader();
	}
	return false;
}

function bool OnAgencyDescriptionSubmitText(UIEditBox ebox, int PlayerIndex)
{
	SetAgencyDescription();
	return false;
}

function bool OnAgencyDescriptionButton(const out InputEventParameters EventParms)
{
	// End:0x4f Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		SetAgencyDescription();
		SetAgencyRegion();
	}
	return false;
}

defaultproperties
{
	m_SelectedRankIndex=-1
}