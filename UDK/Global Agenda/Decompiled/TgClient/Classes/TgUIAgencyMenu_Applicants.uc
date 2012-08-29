/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIAgencyMenu_Applicants.uc
 * 
 * Stats:
 *	Properties:4
 *	Functions:7
 *
 *******************************************************************************/
class TgUIAgencyMenu_Applicants extends TgUIAgencyMenu
	native;

var UIPanel m_ApplicantsPagePanel;
var UIEditBox m_ApplicantNameEditBox;
var UIButton m_ApplicantInviteButton;
var UILabel m_ApplicantErrorMessagePanel;

native function SendAgencyInvite(string sPlayerName);
native function UpdateViewablePanels();
native function FixupWidgets();
native function PostOpenScene();
event FixupWidgetsUC()
{
	super.FixupWidgetsUC();
	J0x00:

	m_ApplicantInviteButton.__OnRawInputKey__Delegate = OnApplicantInviteButtonKey;
	// This is an implied JumpToken; Continue!
	goto J0x00;
	// BlockSize:3072
	switch(@NULL(-52991))
	{
		OnApplicantInviteSubmitText != @NULL(34079232);
}

function bool OnApplicantInviteButtonKey(const out InputEventParameters EventParms)
{
	// End:0x58 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		SendAgencyInvite(m_ApplicantNameEditBox.GetValue());
		return true;
	}
	return false;
}

function bool OnApplicantInviteSubmitText(UIEditBox ebox, int PlayerIndex)
{
	// End:0x35 Loop:False
	if(true)
	{
		SendAgencyInvite(m_ApplicantNameEditBox.GetValue());
		m_ApplicantNameEditBox.SetValue("");
		return true;
	}
	return false;
}
