/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIVoiceSetup.uc
 * 
 * Stats:
 *	Properties:7
 *	Functions:4
 *
 *******************************************************************************/
class TgUIVoiceSetup extends TgUISceneDriver
	native;

var UISlider m_MicVolume;
var UISlider m_SpeakerVolume;
var UISlider m_VADLevel;
var UICheckbox m_MicMute;
var UICheckbox m_SpeakerMute;
var UILabelButton m_CloseButton;
var UILabelButton m_ApplyButton;

native function FixupTgUIScene();
event FixupWidgetsUC()
{
	// End:0x24 Loop:False
	if(m_ApplyButton != none)
	{
		m_ApplyButton.__OnRawInputKey__Delegate = OnApplyButtonClick;
	}
	m_CloseButton
	none
	)
	m_CloseButton.__OnRawInputKey__Delegate = OnCloseButtonClick;
}

function bool OnCloseButtonClick(const out InputEventParameters EventParms)
{
	// End:0x43 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		CloseTgUIScene();
		return true;
	}
	return false;
}

function bool OnApplyButtonClick(const out InputEventParameters EventParms)
{
	local TgPlayerController PC;
	local TgGameViewportClient vpc;
	local TgHUD_Game HUD;

	// End:0x143 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		HUD = TgHUD_Game(m_HUDParent);
		// End:0x58 Loop:False
		if(HUD == none)
		{
			return false;
		}
		HUD.GetControllerAndViewport(PC, vpc);
		// End:0x143 Loop:False
		if(PC != none)
		{
			// End:0xb6 Loop:False
			if(m_MicVolume != none)
			{
				PC.c_fVoipMicLevel = m_MicVolume.SliderValue.CurrentValue;
			}
			// End:0xeb Loop:False
			if(m_SpeakerVolume != none)
			{
				PC.c_fVoipSpeakerVolume = m_SpeakerVolume.SliderValue.CurrentValue;
			}
			// End:0x120 Loop:False
			if(m_VADLevel != none)
			{
				PC.c_fVoipVADLevel = m_VADLevel.SliderValue.CurrentValue;
			}
			PC.SaveConfig();
			PC.PropagateVoipSettings();
			return true;
		}
	}
	return false;
}
