/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIEndQuestMission.uc
 * 
 * Stats:
 *	Properties:3
 *	Functions:5
 *
 *******************************************************************************/
class TgUIEndQuestMission extends TgUISceneDriver_Tooltip
	native;

var UISafeRegionPanel m_ScenePanel;
var UIButton m_EndMissionButton;
var UILabel m_ResultsLabel;

native function PostOpenScene();
native function bool TickTgUIScene();
native function SetLabelTextAndColor(bool MissionVictor, bool PlayerVictor, bool bTie);
native function BeginFadeIn();
native function bool OnEndMissionButton(const out InputEventParameters EventParms);
