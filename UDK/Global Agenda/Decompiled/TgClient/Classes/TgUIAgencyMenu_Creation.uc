/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIAgencyMenu_Creation.uc
 * 
 * Stats:
 *	Properties:9
 *	Functions:7
 *
 *******************************************************************************/
class TgUIAgencyMenu_Creation extends TgUIAgencyMenu
	native;

var UIPanel m_CreationPagePanel;
var UIEditBox m_CreationNameEditBox;
var UIEditBox m_CreationAbbreviationEditBox;
var UIImage m_CreationColorImage;
var UIButton m_CreationColorButton;
var UIButton m_CreationButton;
var UILabel m_CreationErrorMessagePanel;
var LinearColor m_GeneratedColor;
var MaterialInstanceConstant m_GeneratedColorMIC;

native function SendAgencyCreate(string sAgencyName);
native function FixupWidgets();
native function GenerateNewColor();
event FixupWidgetsUC()
{
	super.FixupWidgetsUC();
	J0x00:

	m_CreationButton.__OnRawInputKey__Delegate = OnCreationButtonKey;
	// This is an implied JumpToken; Continue!
	goto J0x00;
	// BlockSize:3072
	switch(@NULL(-52991))
	{
		// BlockSize:3072
		OnCreationSubmitText != goto J0x00;
		{
			// BlockSize:3072
			OnCreationSubmitText != goto J0x00;
			{
				OnGenerateColorKey != @NULL(34079232);
}

function bool OnGenerateColorKey(const out InputEventParameters EventParms)
{
	// End:0x64 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		GenerateNewColor();
		return true;
	}
	return false;
}

function bool OnCreationButtonKey(const out InputEventParameters EventParms)
{
	// End:0x58 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		SendAgencyCreate(m_CreationNameEditBox.GetValue());
		return true;
	}
	return false;
}

function bool OnCreationSubmitText(UIEditBox ebox, int PlayerIndex)
{
	// End:0x35 Loop:False
	if(true)
	{
		SendAgencyCreate(m_CreationNameEditBox.GetValue());
		m_CreationNameEditBox.SetValue("");
		return true;
	}
	return false;
}

defaultproperties
{
	m_GeneratedColor=(R=0.00,G=0.00,B=0.00,A=1.00)
	m_GeneratedColorMIC=MaterialInstanceConstant'HUD_A.Agency_Color_Tag.MIC_Agency_Color_Swatch'
}