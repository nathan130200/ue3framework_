/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUISettingsMenu_Video.uc
 * 
 * Stats:
 *	Constants:2
 *	Enums:3
 *	Structs:3
 *	Properties:27
 *	Functions:9
 *
 *******************************************************************************/
class TgUISettingsMenu_Video extends TgUISceneDriver_Tooltip
	native;

const MIDLINE_COMPAT_VALUE = 3;
const INVALID_STORE_INDEX = -1;

enum eVideoOptionCheckboxes
{
	BOX_VSYNC,
	BOX_SMOOTH_FPS,
	BOX_COMPOSITE_LIGHTS,
	BOX_DIRECTIONAL_LIGHTMAPS,
	BOX_DYNAMIC_SHADOWS,
	BOX_COMPOSITE_SHADOWS,
	BOX_HIGH_QUALITY_MATERIALS,
	BOX_HIGH_CHARACTER_LOD,
	BOX_SHADOWED_PLAYER_NAMES,
	BOX_STATIC_DECALS,
	BOX_DYNAMIC_DECALS,
	BOX_FOLIAGE,
	BOX_BLOOM,
	BOX_DISTORTION,
	BOX_MOTION_BLUR,
	BOX_AMBIENT_OCCLUSION,
	BOX_DEPTH_OF_FIELD,
	BOX_LENS_FLARE,
	BOX_D3D10,
	BOX_MAX
};

enum eVideoOptionComboBoxes
{
	COMBO_PARTICLE_DETAIL,
	COMBO_SHADOW_FILTERING,
	COMBO_TEXTURE_FILTERING,
	COMBO_ANISO_QUALITY,
	COMBO_CHARACTER_TEXTURES,
	COMBO_WORLD_TEXTURES,
	COMBO_EFFECT_TEXTURES,
	COMBO_MSAA_QUALITY,
	COMBO_MAX
};

enum eVideoOptionWindowType
{
	VIDEOWINDOW_WINDOWED,
	VIDEOWINDOW_FULLSCREEN,
	VIDEOWINDOW_BORDERLESS,
	VIDEOWINDOW_MAX
};

struct native sTgAspectRatioInfo
{
	var init float m_AspectRatio;
	var init name m_ArName;

	structdefaultproperties
	{
		m_AspectRatio=0.00
		m_ArName=None
	}
};

struct native sVideoConfirm
{
	var UIPanel m_ConfirmPanel;
	var UILabel m_ConfirmText;
	var UIButton m_ConfirmOK;
	var UIButton m_ConfirmYes;
	var UIButton m_ConfirmNo;
	var UIButton m_ConfirmBlocker;
	var bool m_bIsResetDialog;
	var bool m_bIsActive;

	structdefaultproperties
	{
		m_ConfirmPanel=none
		m_ConfirmText=none
		m_ConfirmOK=none
		m_ConfirmYes=none
		m_ConfirmNo=none
		m_ConfirmBlocker=none
		m_bIsResetDialog=false
		m_bIsActive=false
	}
};

struct native sOptionValues
{
	var int m_AspectRatioIndex;
	var int m_ResolutionIndex;
	var TgUISettingsMenu_Video.eVideoOptionWindowType m_eWindowType;
	var bool m_bCustomRes;
	var int m_CheckboxOptions[19];
	var int m_ComboBoxOptions[8];
	var float m_GammaCorrection;

	structdefaultproperties
	{
		m_AspectRatioIndex=0
		m_ResolutionIndex=0
		m_eWindowType=VIDEOWINDOW_WINDOWED
		m_bCustomRes=false
		m_CheckboxOptions[0]=0
		m_CheckboxOptions[1]=0
		m_CheckboxOptions[2]=0
		m_CheckboxOptions[3]=0
		m_CheckboxOptions[4]=0
		m_CheckboxOptions[5]=0
		m_CheckboxOptions[6]=0
		m_CheckboxOptions[7]=0
		m_CheckboxOptions[8]=0
		m_CheckboxOptions[9]=0
		m_CheckboxOptions[10]=0
		m_CheckboxOptions[11]=0
		m_CheckboxOptions[12]=0
		m_CheckboxOptions[13]=0
		m_CheckboxOptions[14]=0
		m_CheckboxOptions[15]=0
		m_CheckboxOptions[16]=0
		m_CheckboxOptions[17]=0
		m_CheckboxOptions[18]=0
		m_ComboBoxOptions[0]=0
		m_ComboBoxOptions[1]=0
		m_ComboBoxOptions[2]=0
		m_ComboBoxOptions[3]=0
		m_ComboBoxOptions[4]=0
		m_ComboBoxOptions[5]=0
		m_ComboBoxOptions[6]=0
		m_ComboBoxOptions[7]=0
		m_GammaCorrection=0.00
	}
};

var array<sTgAspectRatioInfo> m_AspectRatioInfo;
var name m_AspectRatioDataName;
var name m_StdComboRangeDataName;
var name m_2StateComboRangeDataName;
var name m_FilteringDataName;
var name m_AnisoQualityDataName;
var name m_WindowTypeDataName;
var name m_MSAAQualityDataName;
var init string m_SelectedResolutionString;
var UIComboBox m_AspectRatioComboBox;
var UIComboBox m_ResolutionComboBox;
var UIComboBox m_WindowTypeComboBox;
var UILabel m_CurrentResolutionLabel;
var UIButton m_GeneralTabButton;
var UIButton m_SoundTabButton;
var UIButton m_ControlsTabButton;
var UIButton m_ChatTabButton;
var UIButton m_CloseButton;
var UIButton m_ApplyButton;
var UIButton m_ResetButton;
var UICheckbox m_Checkboxes[19];
var UIComboBox m_ComboBoxes[8];
var sTooltipMsg m_CheckboxTips[19];
var sTooltipMsg m_ComboBoxTips[19];
var UISlider m_GammaCorrectionSlider;
var sVideoConfirm m_VideoConfirm;
var sOptionValues m_GatheredSettings;

native function PostInitSceneDriver();
native function FixupTgUIScene();
native function bool TickTgUIScene();
native function bool TabHandler(const out InputEventParameters EventParms);
native function bool ButtonHandler(const out InputEventParameters EventParms);
native function bool ConfirmHandler(const out InputEventParameters EventParms);
native function CBoxChanged(UIObject Sender, int PlayerIndex);
native noexport function ActiveStateChanged(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState);
native function OnGammaCorrectionSliderChanged(UIObject Sender, int PlayerIndex);

defaultproperties
{
	m_AspectRatioDataName=AspectRatios
	m_StdComboRangeDataName=StdComboRange
	m_2StateComboRangeDataName=TwoStateComboRange
	m_FilteringDataName=FilteringRange
	m_AnisoQualityDataName=AnisoQuality
	m_WindowTypeDataName=WindowFrameType
	m_MSAAQualityDataName=MSAAQuality
	m_bEscapeKeyCloses=true
}