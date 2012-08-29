/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIPostCreateLoad.uc
 * 
 * Stats:
 *	Properties:1
 *	Functions:2
 *
 *******************************************************************************/
class TgUIPostCreateLoad extends TgUISceneDriver
	native;

var TgLoginHUD m_pLoginHUD;

native function FixupTgUIScene();
native function bool TickTgUIScene();
