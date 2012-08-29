/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIUpdateFaceMenu.uc
 * 
 * Stats:
 *	Constants:1
 *	Structs:1
 *	Properties:45
 *	Functions:17
 *
 *******************************************************************************/
class TgUIUpdateFaceMenu extends TgUIVendorBase
	native;

const NUM_CUSTOM_CATEGORIES = 8;

struct native sUFPStruct
{
	var UIImage m_Outer;
	var UIImage m_APIcon;
	var UIImage m_TokenIcon;
	var UILabel m_CurrencyLabel;
	var UILabel m_Value;

	structdefaultproperties
	{
		m_Outer=none
		m_APIcon=none
		m_TokenIcon=none
		m_CurrencyLabel=none
		m_Value=none
	}
};

var TgSkeletalMeshActor_CharacterBuilder m_PaperDoll;
var export editinline TgSkeletalMeshComponent m_ShoulderMesh;
var int m_MaleShoulderMeshId;
var int m_FemaleShoulderMeshId;
var bool m_bCreateLock;
var bool m_DetailMode;
var bool m_bEnableBackgroundFading;
var bool m_bHasAPPrices;
var bool m_bHasNonAPPrices;
var int m_CurrentMorphGroup;
var UISlider m_InkSlider;
var UISlider m_InkSliderPrimaryColor;
var UISlider m_InkSliderSecondaryColor;
var UISlider m_InkSliderTertiaryColor;
var UISlider m_InkSliderPrimaryIntensity;
var UISlider m_InkSliderSecondaryIntensity;
var UISlider m_InkSliderTertiaryIntensity;
var TgMorphNodeBlendList m_InkMorphNode;
var TgMorphNodeBlendList m_InkPrimaryColorMorphNode;
var TgMorphNodeBlendList m_InkSecondaryColorMorphNode;
var TgMorphNodeBlendList m_InkTertiaryColorMorphNode;
var TgMorphNodeBlendList m_InkPrimaryIntensityMorphNode;
var TgMorphNodeBlendList m_InkSecondaryIntensityMorphNode;
var TgMorphNodeBlendList m_InkTertiaryIntensityMorphNode;
var UIButton m_CloseButton;
var UIButton m_SubmitButton;
var UIButton m_CancelButton;
var UIButton m_RandomButton;
var TgUISkeletalMeshWidget m_PaperDollMeshWidget;
var init array<init sCustomHeadGroupStruct> m_HeadGroups;
var sCustomHeadPresetStruct m_GroupPreset[8];
var UIPanel m_BasicPanel;
var UIPanel m_DetailPanel;
var TgUIScrollList m_MorphScrollFrame;
var UISlider m_BaseHeadSlider;
var sUFPStruct m_PlayerBalance;
var sUFPStruct m_ServicePrice;
var float m_fFadeInTime;
var float m_fFadeOutTime;
var float m_fFadeAmount;
var AnimTree m_HeadAnimTree;
var TgMorphNodeBlendList_ByHairStyle m_HairStyleMorphNode;
var TgMorphNodeBlendList m_BaseHeadsMorphNode;
var int m_nCachedCurrency;
var init native Pointer m_LootTableItem;

native function PostOpenScene();
native function bool TickTgUIScene();
native function PreCloseScene();
native function CompleteTransaction();
native function UpdateCreditsInfo();
native function bool OnConfirmYesClicked(const out InputEventParameters EventParms);
native function bool OnConfirmNoClicked(const out InputEventParameters EventParms);
native function bool OnCloseButton(const out InputEventParameters EventParms);
native function bool OnCancelButton(const out InputEventParameters EventParms);
native function bool OnSubmitButton(const out InputEventParameters EventParms);
native function bool OnLockButton(const out InputEventParameters EventParms);
native function bool OnDetailButton(const out InputEventParameters EventParms);
native function bool OnRandomButton(const out InputEventParameters EventParms);
native noexport function OnDetailButtonMouseOver(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState);
native function OnGroupSliderValueChanged(UIObject Sender, int PlayerIndex);
native function OnSliderValueChanged(UIObject Sender, int PlayerIndex);
native function OnInkSliderChanged(UIObject Sender, int PlayerIndex);

defaultproperties
{
	m_MaleShoulderMeshId=2332
	m_FemaleShoulderMeshId=2339
	m_bEnableBackgroundFading=true
	m_fFadeInTime=0.30
	m_fFadeOutTime=0.20
	m_fFadeAmount=0.98
	m_bEscapeKeyCloses=true
	m_bHookChat=true
}