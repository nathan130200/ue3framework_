/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgLoginInfo.uc
 * 
 * Stats:
 *	Properties:1
 *	Functions:6
 *
 *******************************************************************************/
class TgLoginInfo extends GameInfo
	hidecategories(Navigation,Movement,Collision)
	native
	config(Game);

var TgDebug m_DebugSettings;

native function CreateDebugStructure();
native function bool IsLoggedIn();
native function bool IsInGame();
native function bool HasSelectedCharacter();
native function bool ShouldSkipLoginHUD();
function PostBeginPlay()
{
	CreateDebugStructure();
}

defaultproperties
{
	DefaultPawnClass=class'TgLoginPawn'
	HUDType=class'TgLoginHUD'
	PlayerControllerClass=class'TgLoginPlayerController'
}