/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIEndMissionScreen.uc
 * 
 * Stats:
 *	Constants:2
 *	Enums:1
 *	Structs:4
 *	Properties:19
 *	Functions:12
 *
 *******************************************************************************/
class TgUIEndMissionScreen extends TgUISceneDriver_Tooltip
	native;

const MINSECS_FOR_RANDOMLOOT = 2.7;
const NUM_ENDMISSION_ACHIEVS = 6;

enum eBonusRewardTypes
{
	eBonusType_Elite,
	eBonusType_Boost,
	eBonusType_MAX
};

struct native sMissionBasicStats
{
	var UILabel m_XPHeader;
	var UILabel m_XP;
	var UILabel m_CreditsHeader;
	var UILabel m_Credits;
	var UILabel m_TokensHeader;
	var UILabel m_Tokens;

	structdefaultproperties
	{
		m_XPHeader=none
		m_XP=none
		m_CreditsHeader=none
		m_Credits=none
		m_TokensHeader=none
		m_Tokens=none
	}
};

struct native sBasicRewardPanel
{
	var UIPanel m_Outer;
	var UIImage m_EligibleCheck;
	var UIImage m_IneligibleCross;
	var UILabel m_Header;
	var sMissionBasicStats m_sEarned;
	var sMissionBasicStats m_sTotal;

	structdefaultproperties
	{
		m_Outer=none
		m_EligibleCheck=none
		m_IneligibleCross=none
		m_Header=none
		m_sEarned=(m_XPHeader=none,m_XP=none,m_CreditsHeader=none,m_Credits=none,m_TokensHeader=none,m_Tokens=none)
		m_sTotal=(m_XPHeader=none,m_XP=none,m_CreditsHeader=none,m_Credits=none,m_TokensHeader=none,m_Tokens=none)
	}
};

struct native sAchievementPanel
{
	var UIPanel m_Outer;
	var UILabel m_NoneEarned;
	var UIPanel m_EarnedListOuter;
	var UILabel m_EarnedList[6];

	structdefaultproperties
	{
		m_Outer=none
		m_NoneEarned=none
		m_EarnedListOuter=none
		m_EarnedList[0]=none
		m_EarnedList[1]=none
		m_EarnedList[2]=none
		m_EarnedList[3]=none
		m_EarnedList[4]=none
		m_EarnedList[5]=none
	}
};

struct native sBonusRewardPanel
{
	var UIPanel m_Outer;
	var UIImage m_IneligibleBlackout;
	var UILabel m_Header;
	var UILabel m_XP;
	var UILabel m_Credits;
	var UILabel m_Tokens;
	var UIPanel m_ItemPanel;
	var TgUIInvWidget m_Item;
	var UILabel m_ItemName;
	var UILabel m_ItemReqLevel;
	var UIPanel m_BuyNowPanel;
	var UILabel m_MissingOut;
	var UILabel m_BuyNowExplanation;
	var UIButton m_BuyNowButton;
	var UILabel m_BuyNowButtonLabel;
	var UILabel m_YouHaveItExplanation;
	var bool m_bHintToHideBlast;
	var MaterialInstanceConstant m_RandomLootMIC;
	var UIImage m_RandomLootImage;
	var bool m_bHintToExpectLoot;
	var bool m_bIsEnticement;

	structdefaultproperties
	{
		m_Outer=none
		m_IneligibleBlackout=none
		m_Header=none
		m_XP=none
		m_Credits=none
		m_Tokens=none
		m_ItemPanel=none
		m_Item=none
		m_ItemName=none
		m_ItemReqLevel=none
		m_BuyNowPanel=none
		m_MissingOut=none
		m_BuyNowExplanation=none
		m_BuyNowButton=none
		m_BuyNowButtonLabel=none
		m_YouHaveItExplanation=none
		m_bHintToHideBlast=false
		m_RandomLootMIC=none
		m_RandomLootImage=none
		m_bHintToExpectLoot=false
		m_bIsEnticement=false
	}
};

var UISafeRegionPanel m_ScenePanel;
var UILabel m_ResultLabel;
var sBasicRewardPanel m_BasicRewards;
var sAchievementPanel m_Achievements;
var sBonusRewardPanel m_BonusRewards[2];
var MaterialInstanceConstant m_AvlMics[2];
var bool m_bHasCenteredMouse;
var bool m_bHintToExpectLoot;
var Material m_RandomLootMat;
var float m_fTimeOfLastRandom;
var float m_fTimeBetweenRandom;
var float m_fTimeOfFirstLoad;
var byte m_byCachedCompleteFlag;
var int m_nImpendingWebsite;
var SoundCue m_LootRevealCue;
var TgSpecialFx m_LootRingupFx;
var int m_nRolling;
var native const Pointer m_pXpMarshal;
var native const Pointer m_pDeferredMarshal;

native function PostInitSceneDriver();
native function PostOpenScene();
native function bool TickTgUIScene();
native function SetLabelTextAndColor(bool MissionVictor, bool PlayerVictor, bool bTie);
native function BeginFadeIn();
native function OnLootItemStateChange(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, UIState PreviouslyActiveState);
native function bool OnMatchStatsButton(const out InputEventParameters EventParms);
native function bool OnDeviceStatsButton(const out InputEventParameters EventParms);
native function bool OnEndMissionButton(const out InputEventParameters EventParms);
native function bool OnUpgradeButton(const out InputEventParameters EventParms);
native function bool OnConfirmYesClicked(const out InputEventParameters EventParms);
native function bool OnConfirmNoClicked(const out InputEventParameters EventParms);

defaultproperties
{
	m_AvlMics[0]=MaterialInstanceConstant'HUD_A.EOM.MIC_IndicatorBubble_Elite'
	m_AvlMics[1]=MaterialInstanceConstant'HUD_A.EOM.MIC_IndicatorBubble_boost'
	m_RandomLootMat=Material'GA_Menu_FA.MAT_RandomLoot'
	m_fTimeBetweenRandom=0.05
	m_bIgnoreLoadCheck=true
}