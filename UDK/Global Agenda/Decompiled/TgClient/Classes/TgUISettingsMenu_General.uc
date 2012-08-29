/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUISettingsMenu_General.uc
 * 
 * Stats:
 *	Enums:4
 *	Properties:17
 *	Functions:22
 *
 *******************************************************************************/
class TgUISettingsMenu_General extends TgUISceneDriver_Tooltip
	native;

enum eCheckboxGeneral
{
	CBG_DEPLOYABLE_HEALTH,
	CBG_RETICLE_LABELS,
	CBG_RETICLE_SHIFT,
	CBG_DISABLE_PLAYER_ICONS,
	CBG_OFFSCREEN,
	CBG_MOUSE_SMOOTHING,
	CBG_RETICLE_BAR,
	CBG_HIT_EFFECT_ZOOM,
	CBG_HIT_EFFECT_FULL,
	CBG_DYE_SELF,
	CBG_DYE_ALLIES,
	CBG_DYE_ENEMIES,
	CBG_FULL_HELP_ALERTS,
	CBG_OVERHEAD_TEXT,
	CBG_OBJECTIVE_NAMES,
	CBG_DEBUG_DAMAGE,
	CBG_MAX
};

enum eCheckboxHUD
{
	CBH_DEVICE,
	CBH_BUFF,
	CBH_PLAYER_INFO,
	CBH_TEAM_INFO,
	CBH_MINIMAP,
	CBH_BEACON,
	CBH_MISSION_INFO,
	CBH_RETICULE,
	CBH_CHATBOX,
	CBH_AGENT_INFO,
	CBH_COMBAT_ALERT,
	CBH_QUEST_TRACK,
	CBH_MAX
};

enum eCheckboxQueue
{
	CBQ_LATE_BACKFILLS_OK,
	CBQ_QUICK_QUEUE,
	CBQ_FOR_FUTURE_USE,
	CBQ_MAX
};

enum eCheckboxTeams
{
	CBQ_AVA_INTEREST,
	CBQ_AVA_FUTURE_USE,
	CBQ_AVA_MAX
};

var UIButton m_VideoTabButton;
var UIButton m_SoundTabButton;
var UIButton m_ControlsTabButton;
var UIButton m_ChatTabButton;
var UIButton m_ApplyButton;
var UIButton m_CloseButton;
var UISlider m_MouseSensitivitySlider;
var UIEditBox m_MouseSensitivityEditbox;
var UICheckbox m_InvertMouseCheckbox;
var UICheckbox m_GeneralSettings[16];
var UICheckbox m_HUDVisibilitySettings[12];
var UICheckbox m_QueueSettings[3];
var sTooltipMsg m_QueueSettingsTip[3];
var UIComboBox m_QueueSelectComboBox;
var sTooltipMsg m_QueueSelectTip;
var UICheckbox m_TeamSettings[2];
var sTooltipMsg m_TeamSettingsTip[2];

native function FixupTgUIScene();
native function bool TickTgUIScene();
native function FixupWidgets();
native function ApplyMouseSettings();
native function ApplyControllerSettings();
native function ApplyPrimaryHUDSettings();
native function ApplyHUDVisibilitySettings();
native function PopulateWidgets();
native function PopulateHUDVisibilityWidgets();
native function PopulateQueueSettingWidgets();
native function PopulateSiteList();
native function bool OnApplyButtonKey(const out InputEventParameters EventParms);
native function bool OnTabClickedDelegate(const out InputEventParameters EventParms);
native function bool OnCloseButton(const out InputEventParameters EventParms);
native function bool OnMouseSensitivitySubmit(UIEditBox ebox, int PlayerIndex);
native function OnMouseSliderChanged(UIObject Sender, int PlayerIndex);
native noexport function OnMouseEditBoxStateChanged(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState);
native function OnSiteChanged(UIObject Sender, int PlayerIndex);
native noexport function ActiveStateChanged(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState);
function OnHitEffectZoomChanged(UIObject Sender, int PlayerIndex)
{
	// End:0x32 Loop:False
	if(m_GeneralSettings[7].IsChecked() == false)
	{
		m_GeneralSettings[8].SetValue(false);
	}
}

function OnHitEffectFullChanged(UIObject Sender, int PlayerIndex)
{
	// End:0x32 Loop:False
	if(m_GeneralSettings[8].IsChecked() == true)
	{
		m_GeneralSettings[7].SetValue(true);
	}
}

event FixupWidgetsUC()
{
	m_ApplyButton.__OnRawInputKey__Delegate = OnApplyButtonKey;
	rot(327680, 738263052, 1140850687)
	MetaCastToken(NullReferenceException) /= @NULL(18433024);
	nMemberLevel
	@NULL(423886848)
	m_SoundTabButton
	// BlockSize:3072
	switch(@NULL(-54271))
	{
		OnTabClickedDelegate != vect(0.00, 0.00, 512.00);
		@NULL(423886848)
		m_ChatTabButton
		// BlockSize:3072
		switch(@NULL(-54271))
		{
			// End:0xfb01 Loop:False
			OnTabClickedDelegate != if(rot(327680, 805371916, 1140850687));
			{
				m_GeneralSettings
				// BlockSize:3072
				switch(@NULL(-53247))
				{
					OnHitEffectFullChanged != rot(327680, 805371916, 1140850687);
					// Failed to format nests!:System.ArgumentOutOfRangeException: Index was out of range. Must be non-negative and less than the size of the collection.
Parameter name: index
   at System.Collections.Generic.List`1.get_Item(Int32 index)
   at UELib.Core.UStruct.UByteCodeDecompiler.(Boolean )
   at UELib.Core.UStruct.UByteCodeDecompiler.Decompile()
					// 1 & Type:If Position:64257
					// Failed to format remaining nests!:System.ArgumentOutOfRangeException: Index was out of range. Must be non-negative and less than the size of the collection.
Parameter name: index
   at System.Collections.Generic.List`1.get_Item(Int32 index)
   at UELib.Core.UStruct.UByteCodeDecompiler.(Boolean )
   at UELib.Core.UStruct.UByteCodeDecompiler.Decompile()
					// 1 & Type:If Position:64257
}

defaultproperties
{
	m_bEscapeKeyCloses=true
}