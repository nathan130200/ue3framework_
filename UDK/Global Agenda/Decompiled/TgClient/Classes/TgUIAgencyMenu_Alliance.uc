/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIAgencyMenu_Alliance.uc
 * 
 * Stats:
 *	Constants:1
 *	Enums:1
 *	Structs:1
 *	Properties:35
 *	Functions:27
 *
 *******************************************************************************/
class TgUIAgencyMenu_Alliance extends TgUIAgencyMenu
	native;

const TG_MIN_ALLIANCE_PLAYERS = 20;

enum AllianceConfirmMode
{
	ALLIANCE_CONFIRM_NONE,
	ALLIANCE_CONFIRM_LEAVE,
	ALLIANCE_CONFIRM_REMOVE,
	ALLIANCE_CONFIRM_MAX
};

struct native AllianceMemberDisplayStruct
{
	var UIPrefabInstance AllianceMemberPanelInstance;
	var UIButton AllianceMemberButton;
	var UILabel AllianceMemberName;
	var UIImage AllianceMemberHighlight;
	var int nMemberAgencyId;

	structdefaultproperties
	{
		AllianceMemberPanelInstance=none
		AllianceMemberButton=none
		AllianceMemberName=none
		AllianceMemberHighlight=none
		nMemberAgencyId=0
	}
};

var UIPanel m_AlliancePagePanel;
var UIPanel m_AllianceInformationPanel;
var UILabel m_AllianceNameLabel;
var UILabel m_AllianceNumMembersLabel;
var UILabel m_AllianceFormedLabel;
var UILabel m_AllianceAtWarWithLabel;
var UILabel m_AllianceAtWarLabel;
var UILabel m_AllianceDescriptionLabel;
var UIButton m_AllianceCreationButton;
var UIPanel m_AllianceCreatePanel;
var UIPanel m_AllianceNamePanel;
var UIEditBox m_AllianceNameEntryField;
var UIPanel m_AllianceTagPanel;
var UILabel m_AllianceMiniumAgentsLabel;
var UIPanel m_AllianceMemberListPanel;
var TgUIScrollList m_AllianceAgencyScrollList;
var init array<init AllianceMemberDisplayStruct> m_AllianceMemberListMembers;
var int m_AllianceSelectedAgencyId;
var UIPanel m_AllianceMemberInfoPanel;
var UILabel m_AllianceMemberName;
var UILabel m_AllianceMemberLeader;
var UILabel m_AllianceMemberMemberCount;
var UILabel m_AllianceMemberHexCount;
var UIButton m_AllianceMemberRemoveButton;
var UIButton m_AllianceMemberLeaveButton;
var UILabel m_AllianceMemberLeaveLabel;
var UIPanel m_AllianceApplicantPanel;
var UIEditBox m_AllianceApplicantNameEditBox;
var UIButton m_AllianceApplicantInviteButton;
var UILabel m_AllianceApplicantErrorMessagePanel;
var UIPanel m_AllianceConfirmPanel;
var UIButton m_AllianceConfirmAcceptButton;
var UIButton m_AllianceConfirmCancelButton;
var UILabel m_AllianceConfirmLabel;
var TgUIAgencyMenu_Alliance.AllianceConfirmMode m_AllianceConfirmMode;

native function FixupWidgets();
native function SendAllianceInvite(string sPlayerName);
native function SendAllianceRemove(int nAgencyId);
native function SendAllianceLeave();
native function UpdateAllianceDisplay();
native function PostOpenScene();
native function PreCloseScene();
native function UpdateViewablePanels();
native function SendAllianceCreate(string sName);
native function ResizeAllianceMemberList(int nSize);
native function DoConfirm(TgUIAgencyMenu_Alliance.AllianceConfirmMode Mode);
native function CloseConfirm();
native function UpdateDetailPanel(sAllianceMemberInfo selectedAgency);
native function UpdateAllianceMemberHighlight();
native function bool SelectAllianceMemberByButton(UIButton Button);
native function bool SelectAllianceMember(int nAgencyId);
event FixupWidgetsUC()
{
	super.FixupWidgetsUC();
	J0x00:

	m_AllianceCreationButton.__OnRawInputKey__Delegate = OnCreationButtonKey;
	// This is an implied JumpToken; Continue!
	goto J0x00;
	// BlockSize:3072
	switch(@NULL(-52991))
	{
		// BlockSize:3072
		OnCreationSubmitText != goto J0x00;
		{
			// BlockSize:3072
			OnMemberRemoveButton != goto J0x00;
			{
				// BlockSize:3072
				OnMemberLeaveButton != goto J0x00;
				{
					// BlockSize:3072
					OnAllianceApplicantInviteButtonKey != goto J0x00;
					{
						// BlockSize:3072
						OnAllianceApplicantInviteSubmitText != goto J0x00;
						{
							// BlockSize:3072
							OnConfirmAcceptKey != goto J0x00;
							{
								OnConfirmCancelKey != TickTgUIScene;
								@NULL(0)
								false
								)
								m_AllianceConfirmMode = 0;
}

function bool OnCreationButtonKey(const out InputEventParameters EventParms)
{
	// End:0x58 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		SendAllianceCreate(m_AllianceNameEntryField.GetValue());
		return true;
	}
	return false;
}

function bool OnCreationSubmitText(UIEditBox ebox, int PlayerIndex)
{
	// End:0x35 Loop:False
	if(true)
	{
		SendAllianceCreate(m_AllianceNameEntryField.GetValue());
		m_AllianceNameEntryField.SetValue("");
		return true;
	}
	return false;
}

function bool OnMemberRemoveButton(const out InputEventParameters EventParms)
{
	// End:0x49 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		DoConfirm(2);
		return true;
	}
	return false;
}

function bool OnMemberLeaveButton(const out InputEventParameters EventParms)
{
	// End:0x49 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		DoConfirm(1);
		return true;
	}
	return false;
}

function bool OnConfirmAcceptKey(const out InputEventParameters EventParms)
{
	// End:0x96 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		// End:0x58 Loop:False
		if(m_AllianceConfirmMode == 1)
		{
			SendAllianceLeave();
		}
		// End:0x77
		else
		{
			// End:0x77 Loop:False
			if(m_AllianceConfirmMode == 2)
			{
				SendAllianceRemove(m_AllianceSelectedAgencyId);
			}
		}
		m_AllianceConfirmMode = 0;
		m_AllianceConfirmPanel.SetVisibility(false);
		return true;
	}
	return false;
}

function bool OnConfirmCancelKey(const out InputEventParameters EventParms)
{
	// End:0x47 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		CloseConfirm();
		return true;
	}
	return false;
}

function bool OnAllianceApplicantInviteButtonKey(const out InputEventParameters EventParms)
{
	// End:0x58 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		SendAllianceInvite(m_AllianceApplicantNameEditBox.GetValue());
		return true;
	}
	return false;
}

function bool OnAllianceApplicantInviteSubmitText(UIEditBox ebox, int PlayerIndex)
{
	// End:0x35 Loop:False
	if(true)
	{
		SendAllianceInvite(m_AllianceApplicantNameEditBox.GetValue());
		m_AllianceApplicantNameEditBox.SetValue("");
		return true;
	}
	return false;
}

event SetRawInputKeyForAllianceMemberList(UIButton Button)
{
	// End:0x24 Loop:False
	if(Button != none)
	{
		Button.__OnRawInputKey__Delegate = OnSelectAllianceMember;
	}
}

function bool OnSelectAllianceMember(const out InputEventParameters EventParms)
{
	// End:0x79 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		SelectAllianceMemberByButton(UIButton(EventParms.UIObjectReference));
		return true;
	}
	return false;
}

defaultproperties
{
	m_AllianceSelectedAgencyId=-1
}