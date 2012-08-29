/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUISettingsMenu_Chat.uc
 * 
 * Stats:
 *	Constants:2
 *	Structs:2
 *	Properties:11
 *	Functions:7
 *
 *******************************************************************************/
class TgUISettingsMenu_Chat extends TgUISceneDriver
	native;

const NUM_SHOWN_CONFIGURABLE_CHANNELS = 11;
const NUM_CONFIGURABLE_CHANNELGROUPS = 4;

struct native CC_ConfigElement
{
	var bool m_bActive;
	var UILabel m_Label;
	var UICheckbox m_Checkbox;

	structdefaultproperties
	{
		m_bActive=false
		m_Label=none
		m_Checkbox=none
	}
};

struct native CC_Group_Configuration
{
	var bool m_bActive;
	var UIPanel m_Panel;
	var UIEditBox m_GroupNameEditBox;
	var CC_ConfigElement m_Channels[11];

	structdefaultproperties
	{
		m_bActive=false
		m_Panel=none
		m_GroupNameEditBox=none
		m_Channels[0]=(m_bActive=false,m_Label=none,m_Checkbox=none)
		m_Channels[1]=(m_bActive=false,m_Label=none,m_Checkbox=none)
		m_Channels[2]=(m_bActive=false,m_Label=none,m_Checkbox=none)
		m_Channels[3]=(m_bActive=false,m_Label=none,m_Checkbox=none)
		m_Channels[4]=(m_bActive=false,m_Label=none,m_Checkbox=none)
		m_Channels[5]=(m_bActive=false,m_Label=none,m_Checkbox=none)
		m_Channels[6]=(m_bActive=false,m_Label=none,m_Checkbox=none)
		m_Channels[7]=(m_bActive=false,m_Label=none,m_Checkbox=none)
		m_Channels[8]=(m_bActive=false,m_Label=none,m_Checkbox=none)
		m_Channels[9]=(m_bActive=false,m_Label=none,m_Checkbox=none)
		m_Channels[10]=(m_bActive=false,m_Label=none,m_Checkbox=none)
	}
};

var CC_Group_Configuration m_Groups[4];
var UIButton m_VideoTabButton;
var UIButton m_SoundTabButton;
var UIButton m_ControlsTabButton;
var UIButton m_GeneralTabButton;
var UIButton m_ApplyButton;
var UIButton m_CloseButton;
var UISlider m_OpacitySlider;
var UICheckbox m_ProfanityFilterCheckbox;
var UICheckbox m_ShowAgencyLoginCheckbox;
var UICheckbox m_ShowFriendsLoginCheckbox;

native function FixupTgUIScene();
native function OnOpacityValueChanged(UIObject Sender, int PlayerIndex);
native function bool OnApplyButtonKey(const out InputEventParameters EventParms);
native function bool OnTabClickedDelegate(const out InputEventParameters EventParms);
native function bool OnEboxClicked(const out InputEventParameters EventParms);
native function bool OnCloseButton(const out InputEventParameters EventParms);
native function bool OnSubmitText(UIEditBox ebox, int PlayerIndex);

defaultproperties
{
	m_bEscapeKeyCloses=true
}