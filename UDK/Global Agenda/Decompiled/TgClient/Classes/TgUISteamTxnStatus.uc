/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUISteamTxnStatus.uc
 * 
 * Stats:
 *	Properties:10
 *	Functions:4
 *
 *******************************************************************************/
class TgUISteamTxnStatus extends TgUIVendorBase
	native;

var UILabel m_Status;
var UILabel m_ButtonLabel;
var UIButton m_Button;
var init TgUIVendorBase m_pCaller;
var bool m_bHasOverlay;
var bool m_bHasConfirmed;
var bool m_bNeedsExit;
var bool m_bVariable;
var float m_fTimeStarted;
var float m_fTimeOfEvent;

native function bool OnButtonDelegate(const out InputEventParameters EventParms);
native function PostOpenScene();
native function PreCloseScene();
native function bool TickTgUIScene();
