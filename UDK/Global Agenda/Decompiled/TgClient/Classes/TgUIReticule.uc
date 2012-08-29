/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIReticule.uc
 * 
 * Stats:
 *	Constants:2
 *	Properties:27
 *
 *******************************************************************************/
class TgUIReticule extends Object
	native;

const NUM_SECS_FOR_WEAPON_COOLDOWN_FADE = 0.5;
const NUM_WEAPON_STATUS_BARS = 2;

var TgUIPrimaryHUD_Settings m_Settings;
var LinearColor m_LocalPlayerHealth;
var LinearColor m_LocalPlayerEnergy;
var float m_InCombatFlag;
var LinearColor m_EquippingData;
var LinearColor m_ProgressBarData;
var bool m_bIsOnTarget;
var bool m_bIsTargetInRange;
var bool m_bIsTargetFriendly;
var bool m_bDoingCooldownFade;
var bool m_bCanInHandDeviceFireNow;
var bool m_bInited;
var bool m_bForceHide;
var bool m_bMinRetInitialized;
var float m_fCooldownFadeValue;
var Color m_DefaultColor;
var Color m_TargetInRangeColor;
var Color m_TargetOutOfRangeColor;
var Color m_TargetFriendlyColor;
var Color m_InHandDeviceCantFireColor;
var float m_LastKnownWorldTime;
var TgHUD_Game m_HUDParent;
var MaterialInstanceConstant m_CrosshairMatInstance;
var MaterialInstanceConstant m_DefaultCrosshairMatInstance;
var name m_ActiveCrosshairMaterialParentName;
var MaterialInterface m_ActiveCrosshairMaterialParent;
var MaterialInstanceConstant m_WeaponStatusMatInstance[2];

defaultproperties
{
	m_Settings=TgSettings0
	m_LocalPlayerHealth=(R=0.00,G=0.00,B=0.00,A=1.00)
	m_LocalPlayerEnergy=(R=0.00,G=0.00,B=0.00,A=1.00)
	m_EquippingData=(R=0.00,G=0.00,B=0.00,A=1.00)
	m_ProgressBarData=(R=0.00,G=0.00,B=0.00,A=1.00)
	m_DefaultColor=(R=255,G=255,B=255,A=255)
	m_TargetInRangeColor=(R=255,G=0,B=0,A=255)
	m_TargetOutOfRangeColor=(R=255,G=255,B=0,A=255)
	m_TargetFriendlyColor=(R=0,G=255,B=0,A=255)
	m_InHandDeviceCantFireColor=(R=100,G=160,B=255,A=255)
	m_DefaultCrosshairMatInstance=MaterialInstanceConstant'Menus.MIC_Reticule'
	m_WeaponStatusMatInstance[0]=MaterialInstanceConstant'GUI_HUD_DynamicCursors.StatusArcB.MIC_HUD_StatusArc_B'
	m_WeaponStatusMatInstance[1]=MaterialInstanceConstant'GUI_HUD_DynamicCursors.StatusLineB.MIC_HUD_StatusLine_B'
}