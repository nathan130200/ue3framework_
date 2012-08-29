/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgGameViewportClient.uc
 * 
 * Stats:
 *	Properties:1
 *	Functions:8
 *
 *******************************************************************************/
class TgGameViewportClient extends TgViewportClient within Engine
	native
	transient;

var array<TgObjectReferencer> m_DeferredManifests;

native noexport function CenterMouseInViewport(optional bool CenterPreCaptureMousePos)
{
	CenterPreCaptureMousePos = true;
}

native function DetachHUDSettings();
native function AddDeferredManifest(TgObjectReferencer ObjReferencer);
native function ClearDeferredManifests();
native function NativeGameSessionEnded();
event bool Init(out string OutError)
{
	Outer.ConsoleClass = class'TgConsole';
	// End:0x27 Loop:False
	if(!super(GameViewportClient).Init(OutError))
	{
		return false;
	}
	return true;
}

function DrawTransition(Canvas Canvas);
event GameSessionEnded()
{
	super(GameViewportClient).GameSessionEnded();
	NativeGameSessionEnded();
}
