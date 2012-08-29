/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgConsole.uc
 * 
 * Stats:
 *	Properties:1
 *	Functions:2
 *
 *******************************************************************************/
class TgConsole extends Console within GameViewportClient
	hidecategories(Object,UIRoot)
	native
	config(Input)
	transient;

var bool m_bEnabled;

native function SetEnabled(bool bEnabled);
noexport function bool InputKey(int ControllerId, name Key, Core.Object.EInputEvent Event, optional float AmountDepressed, optional bool bGamepad)
{
	AmountDepressed = 1.00;
	bGamepad = false;
	// End:0x1b Loop:False
	if(!m_bEnabled)
	{
		return false;
	}
	return super.InputKey(ControllerId, Key, Event, AmountDepressed, bGamepad);
}

defaultproperties
{
	m_bEnabled=true
}