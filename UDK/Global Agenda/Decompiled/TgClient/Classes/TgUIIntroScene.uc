/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIIntroScene.uc
 * 
 * Stats:
 *	Constants:3
 *	Properties:11
 *	Functions:3
 *
 *******************************************************************************/
class TgUIIntroScene extends TgUISceneDriver
	native;

const NUM_INTRO_LABELS = 3;
const INTRO_FADE_TIME = 2.0f;
const INTRO_TOTAL_TIME = 15.0f;

var UILabel m_IntroLabel[3];
var UILabel m_IntroLabelOffset1[3];
var UILabel m_IntroLabelOffset2[3];
var string m_IntroString[3];
var float m_LabelOpacity[3];
var int m_CurrentLabel;
var float m_fIntroTimer;
var float m_fLabelTimer;
var float m_fFadeTimer;
var float m_fFadeTime;
var float m_fTotalTime;

native function FixupTgUIScene();
native function bool TickTgUIScene();
native function SetIntroParams(float FadeTime, float TotalTime);
