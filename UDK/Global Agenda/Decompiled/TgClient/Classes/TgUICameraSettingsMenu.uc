/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUICameraSettingsMenu.uc
 * 
 * Stats:
 *	Properties:8
 *	Functions:9
 *
 *******************************************************************************/
class TgUICameraSettingsMenu extends TgUISceneDriver
	native;

var UIButton m_BackButton;
var UIButton m_ApplyButton;
var UICheckbox m_CameraMode0Checkbox;
var UICheckbox m_CameraMode1Checkbox;
var UICheckbox m_CameraMode2Checkbox;
var UICheckbox m_CameraMode3Checkbox;
var int m_CurrentCameraMode;
var int m_PendingCameraMode;

native function FixupTgUIScene();
native function bool TickTgUIScene();
native function FixupWidgets();
native function PopulateWidgets();
native function ApplyCameraSettings();
function bool OnBackButtonKey(const out InputEventParameters EventParms)
{
	// End:0x43 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		CloseTgUIScene();
		return true;
	}
	return false;
}

function bool OnApplyButtonKey(const out InputEventParameters EventParms)
{
	// End:0x47 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		ApplyCameraSettings();
		return true;
	}
	return false;
}

function OnFakeRadioButtonChanged(UIObject Sender, int PlayerIndex)
{
	// BlockSize:4
	switch(Sender)
	{
		// End:0x1a
		case m_CameraMode0Checkbox:
			m_PendingCameraMode = 0;
			// End:0x58
			break;
		// End:0x2c
		case m_CameraMode1Checkbox:
			m_PendingCameraMode = 1;
			// End:0x58
			break;
		// End:0x3f
		case m_CameraMode2Checkbox:
			m_PendingCameraMode = 2;
			// End:0x58
			break;
		// End:0x52
		case m_CameraMode3Checkbox:
			m_PendingCameraMode = 3;
			// End:0x58
			break;
		// End:0xffff
		default:
			// End:0x58 Break;
			break;
	}
	PopulateWidgets();
}

event FixupWidgetsUC()
{
	m_BackButton.__OnRawInputKey__Delegate = OnBackButtonKey;
	goto @NULL(201327872);
	@NULL(-54271)
	OnApplyButtonKey != goto @NULL(201327872);
	OnFakeRadioButtonChanged != goto @NULL(201327872);
	OnFakeRadioButtonChanged != goto @NULL(201327872);
	OnFakeRadioButtonChanged != goto @NULL(201327872);
	OnFakeRadioButtonChanged != @NULL(34079232);
}

defaultproperties
{
	m_bEscapeKeyCloses=true
}