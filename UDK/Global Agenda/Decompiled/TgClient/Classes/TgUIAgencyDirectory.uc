/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIAgencyDirectory.uc
 * 
 * Stats:
 *	Structs:1
 *	Properties:48
 *	Functions:15
 *
 *******************************************************************************/
class TgUIAgencyDirectory extends TgUISceneDriver_Tooltip
	native;

struct native AgencyDirectoryStruct
{
	var UIPrefabInstance AgencyInstance;
	var UIButton AgencyButton;
	var UIImage AgencyHighlight;
	var int nAgencyId;
	var UILabel AgencyName;
	var UILabel AgencyMembers;
	var UILabel AgencyRank;
	var UILabel AllianceName;
	var UILabel AllianceMembers;
	var UILabel NonSubAllowed;
	var string AgencyMessage;
	var bool bRecruiting;
	var bool bSubOnly;

	structdefaultproperties
	{
		AgencyInstance=none
		AgencyButton=none
		AgencyHighlight=none
		nAgencyId=0
		AgencyName=none
		AgencyMembers=none
		AgencyRank=none
		AllianceName=none
		AllianceMembers=none
		NonSubAllowed=none
		AgencyMessage=""
		bRecruiting=false
		bSubOnly=false
	}
};

var TgPlayerController m_PC;
var int m_nSelectedAgencyId;
var bool m_bApplyMode;
var int m_eApplicationState;
var int m_nCurrentAgencyId;
var int m_nPendingAgencyId;
var UIPanel m_ResultsPanel;
var TgUIScrollList m_AgencyScrollList;
var init array<init AgencyDirectoryStruct> m_AgencyListMembers;
var UIButton m_CloseButton;
var UIPanel m_HeaderPanel;
var UILabel m_HeaderLabel;
var UIPanel m_DirectoryPanel;
var UIPanel m_SearchPanel;
var UIPanel m_AgencySearchPanel;
var UIPanel m_AllianceSearchPanel;
var UIPanel m_AgencyNamePanel;
var UIEditBox m_AgencyNameEntryField;
var UIPanel m_AgencyMinPanel;
var UIEditBox m_AgencyMinEntryField;
var UIPanel m_AgencyMaxPanel;
var UIEditBox m_AgencyMaxEntryField;
var UIPanel m_AllianceNamePanel;
var UIEditBox m_AllianceNameEntryField;
var UIPanel m_AllianceMinPanel;
var UIEditBox m_AllianceMinEntryField;
var UIPanel m_AllianceMaxPanel;
var UIEditBox m_AllianceMaxEntryField;
var UICheckbox m_RecruitingCheckbox;
var UICheckbox m_RecruitingNonSubCheckbox;
var UIButton m_SearchButton;
var UIComboBox m_ZoneComboBox;
var UIPanel m_MessagePanel;
var UILabel m_MessageLabel;
var UIPanel m_PendingPanel;
var UIButton m_CancelButton;
var UIButton m_ApplyButton;
var UILabel m_ApplicationLabel;
var UIPanel m_ApplicationPanel;
var UILabel m_TopMessageLabel;
var UIEditBox m_ApplicationEntryField;
var UIButton m_SendCancelButton;
var UIButton m_SendButton;
var UIPanel m_PersonalApplicationPanel;
var UILabel m_PreviewLabel;
var TgUIScrollList m_PreviewScrollList;
var UIPanel m_PreviewPanel;
var UIImage m_PreviewImage;

native function FixupTgUIScene();
native function bool TickTgUIScene();
native function PreCloseScene();
native function bool OnSceneKeyDelegate(const out InputEventParameters EventParms);
native function bool OnCloseButtonDelegate(const out InputEventParameters EventParms);
native function bool OnSearchButtonDelegate(const out InputEventParameters EventParms);
native function bool OnSelectAgencyDelegate(const out InputEventParameters EventParms);
native function bool OnApplyButtonDelegate(const out InputEventParameters EventParms);
native function bool OnSendButtonDelegate(const out InputEventParameters EventParms);
native function bool OnSendCancelButtonDelegate(const out InputEventParameters EventParms);
native function bool OnCancelButtonDelegate(const out InputEventParameters EventParms);
native function bool OnConfirmYesClicked(const out InputEventParameters EventParms);
native function OnEnterValueChanged(UIObject ebox, int PlayerIndex);
event FixupWidgetsUC()
{
	m_UIScene.__OnRawInputKey__Delegate = OnSceneKeyDelegate;
	// BlockSize:3072
	switch(switch(@NULL(-54271)))
	{
		{
			// BlockSize:0
			OnCloseButtonDelegate != switch(switch(@NULL(-54271)));
			{
				{
					{
						{
							{
								{
									{
										{
											{
												{
													{
														{
															{
																{
																	{
																		{
																			{
																				{
																					{
																						{
																							{
																								{
																									{
																										{
																											{
}

event SetRawInputKeyForAgencyButton(UIButton Button)
{
	// End:0x24 Loop:False
	if(Button != none)
	{
		Button.__OnRawInputKey__Delegate = OnSelectAgencyDelegate;
	}
}

defaultproperties
{
	m_nSelectedAgencyId=-1
}