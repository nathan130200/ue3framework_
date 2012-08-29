/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIAgencyMenu_Recruiting.uc
 * 
 * Stats:
 *	Structs:1
 *	Properties:22
 *	Functions:16
 *
 *******************************************************************************/
class TgUIAgencyMenu_Recruiting extends TgUIAgencyMenu
	native;

struct native AgentSubmissionStruct
{
	var UIPrefabInstance AgentInstance;
	var UIButton AgentButton;
	var UILabel AgentName;
	var UILabel AgentClass;
	var UILabel AgentDate;
	var UILabel AgentLevel;
	var UILabel AgentSkill;
	var UIImage AgentClassIcon;
	var UIImage AgentSkillStars;
	var UIImage AgentHighlight;
	var int AgentCharacterId;
	var string AgentMessage;
	var string AgentNameString;
	var Double ApplicationDate;

	structdefaultproperties
	{
		AgentInstance=none
		AgentButton=none
		AgentName=none
		AgentClass=none
		AgentDate=none
		AgentLevel=none
		AgentSkill=none
		AgentClassIcon=none
		AgentSkillStars=none
		AgentHighlight=none
		AgentCharacterId=0
		AgentMessage=""
		AgentNameString=""
		ApplicationDate=none
	}
};

var UIPanel m_RecruitingPanel;
var UIPanel m_AgentListingPanel;
var UIEditBox m_MessageEntryField;
var UILabel m_MessageLabel;
var UICheckbox m_RecruitingCheckbox;
var UICheckbox m_NonSubscriberCheckbox;
var UIButton m_MessageSaveButton;
var UIPanel m_AgentSubmissionsPanel;
var UIPanel m_AgentSubmissionsListPanel;
var UILabelButton m_DateSortButton;
var UILabelButton m_ClassSortButton;
var UILabelButton m_NameSortButton;
var UILabelButton m_LevelSortButton;
var UILabelButton m_SkillSortButton;
var TgUIScrollList m_AgentScrollList;
var init array<init AgentSubmissionStruct> m_AgentListMembers;
var int m_SelectedAgentId;
var UIPanel m_AgentMessagePanel;
var UILabel m_AgentMessageLabel;
var UILabel m_AgentNameLabel;
var UIButton m_AgentAcceptButton;
var UIButton m_AgentDeclineButton;

native function FixupWidgets();
native function PostOpenScene();
native function PreCloseScene();
native function UpdateViewablePanels();
native function bool SelectAgentByButton(UIButton Button);
native function bool SelectAgent(int nCharacterId);
native function SendRecruitingUpdate();
native function bool OnAcceptButtonDelegate(const out InputEventParameters EventParms);
native function bool OnDeclineButtonDelegate(const out InputEventParameters EventParms);
native function OnEnterValueChanged(UIObject ebox, int PlayerIndex);
event FixupWidgetsUC()
{
	super.FixupWidgetsUC();
	m_MessageSaveButton.__OnRawInputKey__Delegate = OnSubmitButtonKey;
	assert(@NULL(738263052));
	// Failed to decompile this line:
		// Failed to decompile this Function's code.
		121
Index was out of range. Must be non-negative and less than the size of the collection.
		Parameter name: index

   at UELib.Core.UStruct.UByteCodeDecompiler.(Int32 , Int32 )
		   at UELib.Core.UStruct.UByteCodeDecompiler.Decompile()
}

function bool OnDeclineKey(const out InputEventParameters EventParms)
{
	// End:0x3d Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		return true;
	}
	return false;
}

function bool OnAcceptKey(const out InputEventParameters EventParms)
{
	// End:0x3d Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		return true;
	}
	return false;
}

event SetRawInputKeyForAgentListMember(UIButton Button)
{
	// End:0x24 Loop:False
	if(Button != none)
	{
		Button.__OnRawInputKey__Delegate = OnSelectAgent;
	}
}

function bool OnSelectAgent(const out InputEventParameters EventParms)
{
	// End:0x79 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		SelectAgentByButton(UIButton(EventParms.UIObjectReference));
		return true;
	}
	return false;
}

function bool OnSubmitButtonKey(const out InputEventParameters EventParms)
{
	// End:0x47 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		SendRecruitingUpdate();
		return true;
	}
	return false;
}

defaultproperties
{
	m_SelectedAgentId=-1
}