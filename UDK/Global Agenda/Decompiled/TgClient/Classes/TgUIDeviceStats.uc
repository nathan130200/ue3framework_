/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIDeviceStats.uc
 * 
 * Stats:
 *	Constants:2
 *	Enums:1
 *	Structs:2
 *	Properties:12
 *	Functions:11
 *
 *******************************************************************************/
class TgUIDeviceStats extends TgUISceneDriver_Tooltip
	native;

const MAX_STAT_DEVICE_FIELDS = 7;
const MAX_STAT_DEVICES = 8;

enum DEVICE_STAT_FIELD
{
	DVFIELD_ID,
	DVFIELD_DAMAGE,
	DVFIELD_HEALING,
	DVFIELD_PLAYER_KILLS,
	DVFIELD_BOT_KILLS,
	DVFIELD_DPM,
	DVFIELD_HPM,
	DVFIELD_MAX
};

struct native sDeviceItemStruct
{
	var TgUIPrimaryHUD_SlotWidgets disItem;
	var int disItemID;

	structdefaultproperties
	{
		disItem=none
		disItemID=0
	}
};

struct native DeviceFields
{
	var UILabel FieldLabels[7];

	structdefaultproperties
	{
		FieldLabels[0]=none
		FieldLabels[1]=none
		FieldLabels[2]=none
		FieldLabels[3]=none
		FieldLabels[4]=none
		FieldLabels[5]=none
		FieldLabels[6]=none
	}
};

var DeviceFields m_DeviceRows[8];
var sDeviceItemStruct m_DeviceItems[8];
var UILabelButton m_HeaderButtons[7];
var bool m_bOpenedByBaseMenu;
var bool m_GameOver;
var TgStatsData m_StatsData;
var float m_fLastCopy;
var TgUIDeviceStats.DEVICE_STAT_FIELD m_eCurrentSortField;
var UIButton m_CloseButton;
var UIButton m_SummaryButton;
var UIButton m_MatchStatsButton;
var UIButton m_EndMissionButton;

native function FixupTgUIScene();
native function bool TickTgUIScene();
native function PostInitSceneDriver();
native function bool OnSceneKey(const out InputEventParameters EventParms);
native function bool OnFieldClicked(const out InputEventParameters EventParms);
native noexport function OnDeviceItemStateChange(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState);
native function bool OnCloseButton(const out InputEventParameters EventParms);
native function bool OnSummaryButton(const out InputEventParameters EventParms);
native function bool OnMatchStatsButton(const out InputEventParameters EventParms);
native function bool OnEndMissionButton(const out InputEventParameters EventParms);
event FixupWidgetsUC()
{
	local int iField, iDev;

	m_UIScene.__OnRawInputKey__Delegate = OnSceneKey;
	MetaCastToken-MetaCastToken(System.ArgumentOutOfRangeException: Index was out of range. Must be non-negative and less than the size of the collection.
Parameter name: index
   at UELib.UnrealPackage.GetIndexObject(Int32 objectIndex)
   at UELib.Core.UStruct.UByteCodeDecompiler.MetaCastToken.Decompile()
   at UELib.Core.UStruct.UByteCodeDecompiler.Decompile())	
	@NULL(423886848)
	m_SummaryButton
	// BlockSize:3072
	switch(@NULL(-54271))
	{
		OnSummaryButton != MetaCastToken(ArgumentOutOfRangeException);
		@NULL(423886848)
		m_EndMissionButton
		// BlockSize:3072
		switch(@NULL(-54271))
		{
			OnEndMissionButton != @NULL(-1190714112);
			@NULL(369568768)
			m_HeaderButtons[iField].__OnRawInputKey__Delegate = OnFieldClicked;
			@NULL(-2079975936)
			@NULL(329318415)
			@NULL(168240384)
			@NULL(329318550)
			@NULL(369634304)
			m_DeviceItems[iDev].disItem.m_SlotButton.__NotifyActiveStateChanged__Delegate = OnDeviceItemStateChange;
}

defaultproperties
{
	m_bOpenedByBaseMenu=true
	m_fLastCopy=-1.00
}