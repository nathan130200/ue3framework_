/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUISettingsMenu_Sound.uc
 * 
 * Stats:
 *	Constants:2
 *	Enums:2
 *	Properties:19
 *	Functions:19
 *
 *******************************************************************************/
class TgUISettingsMenu_Sound extends TgUISceneDriver_Tooltip
	native;

const NUM_GAME_SOUND_SLIDERS = 3;
const NUM_VOICE_SOUND_SLIDERS = 3;

enum eGameSoundSliders
{
	GSS_MASTER_VOL,
	GSS_EFFECTS_VOL,
	GSS_MUSIC_VOL,
	GSS_MAX
};

enum eVoiceSoundSliders
{
	VSS_INCOMING_VOL,
	VSS_OUTGOING_VOL,
	VSS_ACTIVATE_VOL,
	VSS_MAX
};

var UISlider m_GameSlider[3];
var UISlider m_VoiceSlider[3];
var UIButton m_CloseButton;
var UIButton m_ApplyButton;
var UIButton m_GeneralTabButton;
var UIButton m_VideoTabButton;
var UIButton m_ControlsTabButton;
var UIButton m_ChatTabButton;
var UIComboBox m_RenderDevComboBox;
var UIComboBox m_CaptureDevComboBox;
var UICheckbox m_EnableTeamCheckbox;
var UICheckbox m_EnableInstanceCheckbox;
var UICheckbox m_EnableVoipCheckbox;
var UICheckbox m_EnableAudioCheckbox;
var UIPanel m_GamePanelBlocker;
var UIPanel m_VoicePanelBlocker;
var native Pointer m_RenderDevData;
var native Pointer m_CaptureDevData;
var bool m_bNeedRestartConfirm;

native function PostOpenScene();
native function PreCloseScene();
native function FixupTgUIScene();
native function bool TickTgUIScene();
native function FixupWidgets();
native function PopulateWidgets();
native function ApplyGameSliders();
native function ApplyVoiceSliders();
native function bool OnApplyButtonKey(const out InputEventParameters EventParms);
native function bool OnTabClickedDelegate(const out InputEventParameters EventParms);
native function bool OnCloseButton(const out InputEventParameters EventParms);
native function OpenRestartConfirmPopup();
native function bool OnConfirmYesClicked(const out InputEventParameters EventParms);
native function bool OnConfirmNoClicked(const out InputEventParameters EventParms);
function ShowHideVoipPanel()
{
	local int I;
	local bool bEnableVoip;

	bEnableVoip = m_EnableVoipCheckbox.IsChecked();
	// End:0xc9 Loop:False
	if(bEnableVoip)
	{
		m_VoicePanelBlocker.SetVisibility(false);
		m_EnableTeamCheckbox.SetEnabled(true);
		m_EnableInstanceCheckbox.SetEnabled(true);
		I = 0;
		J0x68:

		// End:0x9a Loop:True
		if(I < 3)
		{
			m_VoiceSlider[I].SetEnabled(true);
			++ I;
			// This is an implied JumpToken; Continue!
			goto J0x68;
		}
		m_RenderDevComboBox.SetEnabled(true);
		m_CaptureDevComboBox.SetEnabled(true);
	}
	// End:0x16f
	else
	{
		m_VoicePanelBlocker.SetVisibility(true);
		m_EnableTeamCheckbox.SetEnabled(false);
		m_EnableInstanceCheckbox.SetEnabled(false);
		I = 0;
		J0x111:

		// End:0x143 Loop:True
		if(I < 3)
		{
			m_VoiceSlider[I].SetEnabled(false);
			++ I;
			// This is an implied JumpToken; Continue!
			goto J0x111;
		}
		m_RenderDevComboBox.SetEnabled(false);
		m_CaptureDevComboBox.SetEnabled(false);
	}
}

function OnEnableVoipChanged(UIObject Sender, int PlayerIndex)
{
	ShowHideVoipPanel();
	m_bNeedRestartConfirm = true;
}

function ShowHideAudioPanel()
{
	local int I;
	local bool bEnableAudio;

	bEnableAudio = m_EnableAudioCheckbox.IsChecked();
	// End:0x71 Loop:False
	if(bEnableAudio)
	{
		m_GamePanelBlocker.SetVisibility(false);
		I = 0;
		J0x3c:

		// End:0x6e Loop:True
		if(I < 3)
		{
			m_GameSlider[I].SetEnabled(true);
			++ I;
			// This is an implied JumpToken; Continue!
			goto J0x3c;
		}
	}
	// End:0xbf
	else
	{
		m_GamePanelBlocker.SetVisibility(true);
		I = 0;
		J0x8d:

		// End:0xbf Loop:True
		if(I < 3)
		{
			m_GameSlider[I].SetEnabled(false);
			++ I;
			// This is an implied JumpToken; Continue!
			goto J0x8d;
		}
	}
}

function OnEnableAudioChanged(UIObject Sender, int PlayerIndex)
{
	ShowHideAudioPanel();
	m_bNeedRestartConfirm = true;
}

event FixupWidgetsUC()
{
	m_ApplyButton.__OnRawInputKey__Delegate = OnApplyButtonKey;
	vect(0.00, 0.00, 512.00)
	MetaCastToken(NullReferenceException) /= @NULL(18433024);
	@NULL(738263052)
	OnTabClickedDelegate != m_HUDParent != @NULL(566558724) != @NULL(18433046)[@NULL(0)];
	@NULL(786437)
	__OnRawInputKey__Delegate
	OnTabClickedDelegate
	vect(0.00, 0.00, 512.00)
	nMemberLevel
	@NULL(423886848)
	m_ChatTabButton
	// BlockSize:3072
	switch(@NULL(-54271))
	{
		OnTabClickedDelegate != vect(0.00, 0.00, 512.00);
		@NULL(18433024)
		vect(0.00, 0.00, 512.00).Remove(MetaCastToken(NullReferenceException) != @NULL(408951552), @NULL(409017110));
		@NULL(0)
		@NULL(1393230870)
}

defaultproperties
{
	m_bEscapeKeyCloses=true
}