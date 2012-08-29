/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUISelectionList.uc
 * 
 * Stats:
 *	Constants:3
 *	Properties:11
 *	Functions:22
 *
 *******************************************************************************/
class TgUISelectionList extends TgUISceneDriver
	native
	abstract;

const TAS_MAX_SELECTION_DISPLAY = 10;
const TAS_SCROLL_DOWN_TIMER = 0;
const TAS_SCROLL_UP_TIMER = 1;

var UILabelButton m_SelectionButtons[10];
var UIImage m_SelectionHilight[10];
var TgDataInterface c_DataInterface;
var TgDataSet c_DataSet;
var int m_nSelectedIndex;
var int c_nNbrOfRows;
var int c_nScrollPos;
var UIButton c_ScrollDownButton;
var UIButton c_ScrollUpButton;
var int c_nScrollDir;
var TgTimerManager c_ButtonTimers;

native function FixupTgUIScene();
native function bool TickTgUIScene();
native function FixupWidgets();
native function GetSelectionCallback();
native function DrawGrid();
native function PreCloseScene();
function bool SelectSelectionRow(name Key, Core.Object.EInputEvent Event, int nIndex)
{
	// End:0x59 Loop:False
	if(Key == 'LeftMouseButton' && (Event == 0))
	{
		// End:0x57 Loop:False
		if(nIndex > -1 && (nIndex < c_nNbrOfRows))
		{
			m_nSelectedIndex = c_nScrollPos + nIndex;
		}
		return true;
	}
	return false;
}

event InitSelectionListScene()
{
	c_DataSet = new class'TgDataSet';
	c_DataSet.RegisterForEvents(self, 'GetSelectionCallback');
	c_DataInterface = new class'TgDataInterface';
	c_ButtonTimers = m_HUDParent.Spawn(class'TgTimerManager');
	c_ButtonTimers.RemoteRole = 0;
}

event FixupWidgetsUC()
{
	local int I;

	I = 0;
	J0x07:

	// End:0x18f Loop:True
	if(I < c_nNbrOfRows)
	{
		// BlockSize:4
		switch(I)
		{
			// End:0x40
			case 0:
				m_SelectionButtons[0].__OnRawInputKey__Delegate = SelectSelectionRow0;
			// Failed to decompile this line:
				// Failed to decompile this Function's code.
				464
Index was out of range. Must be non-negative and less than the size of the collection.
				Parameter name: index

   at UELib.Core.UStruct.UByteCodeDecompiler.(Int32 , Int32 )
				   at UELib.Core.UStruct.UByteCodeDecompiler.Decompile()
}

function bool ScrollListDown(const out InputEventParameters EventParms)
{
	// End:0x9a Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton')
	{
		// End:0x81 Loop:False
		if(EventParms.EventType == 0)
		{
			c_nScrollDir = 1;
			c_ButtonTimers.RegisterForEvents(0, self, 'ModifyScrollPos');
			c_ButtonTimers.Start(0, 0.15, true);
			return true;
		}
		// End:0x9a
		else
		{
			c_ButtonTimers.Close(0);
			return true;
		}
	}
	return false;
}

function bool ScrollListUp(const out InputEventParameters EventParms)
{
	// End:0x9a Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton')
	{
		// End:0x81 Loop:False
		if(EventParms.EventType == 0)
		{
			c_nScrollDir = 0;
			c_ButtonTimers.RegisterForEvents(1, self, 'ModifyScrollPos');
			c_ButtonTimers.Start(1, 0.15, true);
			return true;
		}
		// End:0x9a
		else
		{
			c_ButtonTimers.Close(1);
			return true;
		}
	}
	return false;
}

function ModifyScrollPos(int nTimerId, TgGame.TgTimerManager.TGT_EVENT eEvent)
{
	local int nMaxScrollPos;

	// End:0x12 Loop:False
	if(eEvent != 0)
	{
		return;
	}
	nMaxScrollPos = c_DataSet.RecordCount() - 1;
	// End:0x4f Loop:False
	if(c_nScrollDir == 1)
	{
		// End:0x4c Loop:False
		if(c_nScrollPos < nMaxScrollPos)
		{
			++ c_nScrollPos;
		}
	}
	// End:0x61
	else
	{
		// End:0x61 Loop:False
		if(c_nScrollPos > 0)
		{
			-- c_nScrollPos;
		}
	}
}

function bool SelectSelectionRow0(const out InputEventParameters EventParms)
{
	return SelectSelectionRow(EventParms.InputKeyName, EventParms.EventType, 0);
}

function bool SelectSelectionRow1(const out InputEventParameters EventParms)
{
	return SelectSelectionRow(EventParms.InputKeyName, EventParms.EventType, 1);
}

function bool SelectSelectionRow2(const out InputEventParameters EventParms)
{
	return SelectSelectionRow(EventParms.InputKeyName, EventParms.EventType, 2);
}

function bool SelectSelectionRow3(const out InputEventParameters EventParms)
{
	return SelectSelectionRow(EventParms.InputKeyName, EventParms.EventType, 3);
}

function bool SelectSelectionRow4(const out InputEventParameters EventParms)
{
	return SelectSelectionRow(EventParms.InputKeyName, EventParms.EventType, 4);
}

function bool SelectSelectionRow5(const out InputEventParameters EventParms)
{
	return SelectSelectionRow(EventParms.InputKeyName, EventParms.EventType, 5);
}

function bool SelectSelectionRow6(const out InputEventParameters EventParms)
{
	return SelectSelectionRow(EventParms.InputKeyName, EventParms.EventType, 6);
}

function bool SelectSelectionRow7(const out InputEventParameters EventParms)
{
	return SelectSelectionRow(EventParms.InputKeyName, EventParms.EventType, 7);
}

function bool SelectSelectionRow8(const out InputEventParameters EventParms)
{
	return SelectSelectionRow(EventParms.InputKeyName, EventParms.EventType, 8);
}

function bool SelectSelectionRow9(const out InputEventParameters EventParms)
{
	return SelectSelectionRow(EventParms.InputKeyName, EventParms.EventType, 9);
}

defaultproperties
{
	m_nSelectedIndex=-1
	c_nNbrOfRows=5
	m_bEscapeKeyCloses=true
}