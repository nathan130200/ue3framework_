/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIMapTransition.uc
 * 
 * Stats:
 *	Enums:1
 *	Properties:20
 *	Functions:11
 *
 *******************************************************************************/
class TgUIMapTransition extends TgUISceneDriver
	native;

enum eMapTransitionState
{
	MapTransState_OpeningCutsceneTrigger,
	MapTransState_OpeningCutscenePlaying,
	MapTransState_TakeoffVideoTrigger,
	MapTransState_TakeoffVideoPlaying,
	MapTransState_BriefingUITrigger,
	MapTransState_BriefingUIShowing,
	MapTransState_MapLoading,
	MapTransState_LandingVideoTrigger,
	MapTransState_LandingVideoPlaying,
	MapTransState_AwaitingMapInfo,
	MapTransState_MAX
};

var int m_MapLoadStartTime;
var TgUIMapTransition.eMapTransitionState m_MapTransitionState;
var bool m_bMinimalTransition;
var bool m_bNoFadeIn;
var UILabel m_MapFileName;
var UILabel m_MapName;
var UILabel m_Briefing;
var UIPanel m_BriefingPanel;
var UILabel m_Loading;
var UILabel m_LoadingTip;
var UIButton m_Close;
var UIImage m_Background;
var UIImage m_MapRoleIcon;
var name m_nmArriveMovie;
var name m_nmDepartMovie;
var int m_bIsInNewWorld;
var int m_MapWaitStartTime;
var Texture2D m_DefenderIcon;
var Texture2D m_AttackerIcon;
var Texture2D m_DefaultLoadScreen;

native function FixupTgUIScene();
native function OpenTgUIScene();
native function PreCloseScene();
native function RegisterCallbacks();
native function bool TickTgUIScene();
native function ResetMapTransition();
native function SetBackgroundImage(string fsImage);
native function bool OnCloseButtonClick(const out InputEventParameters EventParms);
native function PleaseShowCloseButton(bool bEnablePlease);
native function bool CanShowCloseButton();
event FixupWidgetsUC()
{
	// End:0x24 Loop:False
	if(m_Close != none)
	{
		m_Close.__OnRawInputKey__Delegate = OnCloseButtonClick;
	}
}

defaultproperties
{
	m_DefenderIcon=Texture2D'GA_Menu_Assets.GA_Menu_Def_Logo'
	m_AttackerIcon=Texture2D'GA_Menu_Assets.GA_Menu_Att_Logo'
}