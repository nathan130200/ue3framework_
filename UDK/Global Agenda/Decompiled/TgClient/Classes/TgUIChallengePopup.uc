/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIChallengePopup.uc
 * 
 * Stats:
 *	Properties:9
 *	Functions:4
 *
 *******************************************************************************/
class TgUIChallengePopup extends TgUISceneDriver
	native;

var UILabel m_lblMapName;
var UILabel m_lblReady;
var UILabel m_lblTeamSize;
var UILabel m_lblRemainging;
var UIButton m_btnAccept;
var UIButton m_btnDecline;
var int m_nLastUpdate;
var int m_nExpiresAt;
var SoundCue m_OpenSoundCue;

native function FixupTgUIScene();
native function bool TickTgUIScene();
native function bool OnAcceptButton(const out InputEventParameters EventParms);
native function bool OnDeclineButton(const out InputEventParameters EventParms);

defaultproperties
{
	m_OpenSoundCue=SoundCue'SND_B_UI.A_CUE_UI_Menu_Popup'
}