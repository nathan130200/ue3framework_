/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIEULAMenu.uc
 * 
 * Stats:
 *	Properties:7
 *	Functions:4
 *
 *******************************************************************************/
class TgUIEULAMenu extends TgUISceneDriver
	native;

var bool m_bHasViewed;
var bool m_bEULAMissing;
var UILabelButton m_EULAAcceptButton;
var UILabelButton m_EULADeclineButton;
var UILabel m_EULALabel;
var UIScrollFrame m_ScrollFrame;
var UIButton m_LinkToWebEULA;

native function FixupTgUIScene();
native function bool OnButtonClick(const out InputEventParameters EventParms);
native function bool OnSceneInput(const out InputEventParameters EventParms);
native function bool OnScroll(UIScreenObject Sender, float Nudges, bool bMaxedOut);
