/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIPrimaryHUD_DeviceBar.uc
 * 
 * Stats:
 *	Constants:3
 *	Structs:1
 *	Properties:9
 *	Functions:24
 *
 *******************************************************************************/
class TgUIPrimaryHUD_DeviceBar extends Object
	native;

const NUM_DEVICE_SLOTS = 11;
const NUM_INHAND_DEVICES = 4;
const NO_SLOT_ACTIVE = -1;

struct native sDeviceSlot
{
	var TgUIInvWidget Item;
	var int nSlotNum;
	var UILabel KeyLabel;
	var UIProgressBar HealthBar;
	var float fHighlightEnd;
	var bool bHighlightActive;

	structdefaultproperties
	{
		Item=none
		nSlotNum=0
		KeyLabel=none
		HealthBar=none
		fHighlightEnd=0.00
		bHighlightActive=false
	}
};

var TgUIPrimaryHUD_Settings m_Settings;
var sDeviceSlot m_DeviceSlots[11];
var int m_nWhichSlotActive;
var bool m_bWhichSlotActiveChanged;
var bool m_bTriggerRefreshDeviceData;
var TgUISceneDriver m_PrimaryScene;
var TgUIReticule m_ReticuleLogic;
var int m_nDefaultDeviceId;
var SoundCue m_SelectDeviceSoundCue;

native function FixupWidgets(UIPanel BasePanel, TgUISceneDriver OwnerScene, TgUIReticule HUDReticule);
native function FixupWidgetsAsEmbedded(UIScreenObject BaseScreenObject, TgUISceneDriver OwnerScene, TgUIReticule HUDReticule);
native function TickPrimaryHUDElement(float TimeNow);
native function TickVisuals(float TimeNow);
native function TickTurretHealth();
native function ReplicationInfo FindSpawnedPet(TgPawn PlayerPawn, TgDevice Dev);
native function PopulateDeviceBarSlots();
native function UpdateStatus();
native function UserSelectedSlot(int WhichSlot);
native function UserFlashOffhand(int WhichSlot);
native function ClearAllDeviceBarSlotWidgets();
native function UpdateSelectedDevice(TgDevice Dev);
native function bool GetActiveDeviceSlotString(out string DeviceString);
native function RefreshUICooldowns();
native function UpdateKeyBindings();
native noexport function ResetHUDCooldowns(optional int DeviceEqpPt)
{
	DeviceEqpPt = -1;
}

native function bool SelectDeviceBarSlot(int Slot);
native function bool SelectDeviceBarType(TgGame.TgUIInvWidget.TG_WIDGET_SUBTYPES eType);
native function bool SelectNextDevice();
native function bool SelectPreviousDevice();
native function bool HasInhandDevice();
native function UpdateCooldown(int nEquipPoint, float fStartTime, float fDuration);
native function int GetSlotBySubType(TgGame.TgUIInvWidget.TG_WIDGET_SUBTYPES subtype);
native function int GetSlotByEquipPoint(TgGame.TgPawn.TG_EQUIP_POINT eqpPoint);

defaultproperties
{
	m_Settings=TgSettings0
	m_nWhichSlotActive=-1
	m_bWhichSlotActiveChanged=true
	m_nDefaultDeviceId=-1
	m_SelectDeviceSoundCue=SoundCue'SND_B_UI.A_CUE_UI_Click_Switch'
}