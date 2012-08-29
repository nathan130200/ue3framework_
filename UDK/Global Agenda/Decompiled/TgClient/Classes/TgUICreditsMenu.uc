/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUICreditsMenu.uc
 * 
 * Stats:
 *	Properties:11
 *	Functions:2
 *
 *******************************************************************************/
class TgUICreditsMenu extends TgUISceneDriver
	native;

var UIImage m_GAImage;
var UIImage m_GAImageGuide;
var UIScrollFrame m_ScrollFrame;
var UIImage m_HZImage;
var UILabel m_CreditsLabel;
var float m_TimeAfterScroll;
var bool m_bScrolling;
var bool m_bCloseOnInput;
var bool m_bShowLogo;
var bool m_bContentReady;
var float m_fLastTickTime;

native function FixupTgUIScene();
native function bool OnSceneInput(const out InputEventParameters EventParms);
