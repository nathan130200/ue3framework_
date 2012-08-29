/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIGameHelpItems.uc
 * 
 * Stats:
 *	Enums:1
 *	Properties:5
 *	Functions:4
 *
 *******************************************************************************/
class TgUIGameHelpItems extends TgUISceneDriver_Tooltip
	native;

enum EGameHelpItemTypes
{
	TutGH_UIVolumes,
	TutGH_UIQuestGlyphs,
	TutGH_BeaconNetwork,
	TutGH_Merc_PVP,
	TutGH_Beacon,
	TutGH_MAX
};

var TgUIGameHelpItems.EGameHelpItemTypes m_ActiveGameHelpItem;
var float m_TimeOpened;
var UIPanel m_SmallFrame;
var UIButton m_SmallFrameExit;
var sTutItemInfo m_GameHelpItems[5];

native function PostOpenScene();
native function bool TickTgUIScene();
native function bool OnCloseButton(const out InputEventParameters EventParms);
native function bool OnSceneDelegate(const out InputEventParameters EventParms);
