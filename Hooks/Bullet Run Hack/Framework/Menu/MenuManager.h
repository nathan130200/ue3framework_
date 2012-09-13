#pragma once
#ifndef __MENUMANAGER_H_
#define __MENUMANAGER_H_

typedef struct _CheckBoxItem
{
	float x, y;
	int TabIndex;
	BOOL Checked;
	WCHAR *Label;
} CheckBoxItem, *PCheckBoxItem;

typedef struct _MenuTab
{
	float x, y;
	WCHAR *Label;
} MenuTab, *PMenuTab;

typedef struct _VIRTUALKEY
{
	int Key;
	WCHAR *Name;
} VIRTUALKEY;

typedef struct _MenuButton
{
	float x, y;
	float Width, Height;
	int TabIndex;
	WCHAR *Label;
} MenuButton;


static int CurrentAimbotKey = 'F';
static WCHAR *CurrentAimbotKeyStr = L"F";

static VIRTUALKEY VirtualKeyTable[] =
{
	{ VK_LBUTTON, L"LClick" },
	{ VK_RBUTTON, L"RClick" },
	{ VK_CANCEL, L"Cancel" },
	{ VK_MBUTTON, L"MiddleMouse" },
	{ VK_BACK, L"Backspace" },
	{ VK_TAB, L"TAB" },
	{ VK_CLEAR, L"Clear" },
	{ VK_RETURN, L"Enter" },
	{ VK_SHIFT, L"Shift" },
	{ VK_CONTROL, L"Control" },
	{ VK_MENU, L"Alt" },
	{ VK_PAUSE, L"Pause" },
	{ VK_CAPITAL, L"CAPS" },
	{ VK_ESCAPE, L"Escape" },
	{ VK_SPACE, L"Spacebar" },
	{ VK_PRIOR, L"PageUp" },
	{ VK_NEXT, L"PageDown" },
	{ VK_END, L"End" },
	{ VK_HOME, L"Home" },
	{ VK_LEFT, L"LArrow" },
	{ VK_UP, L"UpArrow" },
	{ VK_RIGHT, L"RArrow" },
	{ VK_DOWN, L"DownArrow" },
	{ VK_SELECT, L"Select" },
	{ VK_PRINT, L"Print" },
	{ VK_EXECUTE, L"Execute" },
	{ VK_SNAPSHOT, L"PrintScreen"},
	{ VK_INSERT, L"Insert" },
	{ VK_DELETE, L"Delete" },
	{ VK_HELP, L"Help" },
	{ 0x30, L"0" },
	{ 0x31, L"1" },
	{ 0x32, L"2" },
	{ 0x33, L"3" },
	{ 0x34, L"4" },
	{ 0x35, L"5" },
	{ 0x36, L"6" },
	{ 0x37, L"7" },
	{ 0x38, L"8" },
	{ 0x39, L"9" },
	{ 0x41, L"A" },
	{ 0x42, L"B" },
	{ 0x43, L"C" },
	{ 0x44, L"D" },
	{ 0x45, L"E" },
	{ 0x46, L"F" },
	{ 0x47, L"G" },
	{ 0x48, L"H" },
	{ 0x49, L"I" },
	{ 0x4A, L"J" },
	{ 0x4B, L"K" },
	{ 0x4C, L"L" },
	{ 0x4D, L"M" },
	{ 0x4E, L"N" },
	{ 0x4F, L"O" },
	{ 0x50, L"P" },
	{ 0x51, L"Q" },
	{ 0x52, L"R" },
	{ 0x53, L"S" },
	{ 0x54, L"T" },
	{ 0x55, L"U" },
	{ 0x56, L"V" },
	{ 0x57, L"W" },
	{ 0x58, L"X" },
	{ 0x59, L"Y" },
	{ 0x5A, L"Z" },
	{ VK_NUMPAD0, L"Numpad0" },
	{ VK_NUMPAD1, L"Numpad1" },
	{ VK_NUMPAD2, L"Numpad2" },
	{ VK_NUMPAD3, L"Numpad3" },
	{ VK_NUMPAD4, L"Numpad4" }, // 72
	{ VK_NUMPAD5, L"Numpad5" },
	{ VK_NUMPAD6, L"Numpad6" },
	{ VK_NUMPAD7, L"Numpad7" },
	{ VK_NUMPAD8, L"Numpad8" },
	{ VK_NUMPAD9, L"Numpad9" },
	{ VK_SEPARATOR, L"NumpadSeperator" },
	{ VK_SUBTRACT, L"NumpadMinus" },
	{ VK_DECIMAL, L"NumpadDecimal" },
	{ VK_DIVIDE, L"NumpadDivide" },
	{ VK_F1, L"F1" },
	{ VK_F2, L"F2" },
	{ VK_F3, L"F3" },
	{ VK_F4, L"F4" },
	{ VK_F5, L"F5" },
	{ VK_F6, L"F6" },
	{ VK_F7, L"F7" },
	{ VK_F8, L"F8" },
	{ VK_F9, L"F9" },
	{ VK_F10, L"F10" },
	{ VK_F11, L"F11" },
	{ VK_F12, L"F12" },
	{ VK_F13, L"F13" },
	{ VK_F14, L"F14" },
	{ VK_F15, L"F15" },
	{ VK_F16, L"F16" },
	{ VK_F17, L"F17" },
	{ VK_F18, L"F18" },
	{ VK_F19, L"F19" },
	{ VK_F20, L"F20" },
	{ VK_F21, L"F21" },
	{ VK_F22, L"F22" },
	{ VK_F23, L"F23" },
	{ VK_F24, L"F24" },
	{ VK_NUMLOCK, L"Numlock" },
	{ VK_SCROLL, L"Scroll" },
	{ VK_LSHIFT, L"LeftShift" },
	{ VK_RSHIFT, L"RightShift" },
	{ VK_LCONTROL, L"LeftCtrl" },
	{ VK_RCONTROL, L"RightCtrl" },
	{ VK_LMENU, L"LeftMenu" },
	{ VK_RMENU, L"RightMenu" },
	{ VK_PLAY, L"Play" },
	{ VK_ZOOM, L"Zoom" },
	{ VK_XBUTTON1, L"XBtn1"},
	{ VK_XBUTTON2, L"XBtn2"},
}; 

class CMenuManager
{
public:
	static void AddTab(float x, float y, WCHAR *Label);
	static void AddCheckBox(float x, float y, int TabIndex, WCHAR *Label);
	static void AddCheckBox(float x, float y, float Width, float Height, int TabIndex, WCHAR *Label);
	static int GetCheckBoxIndexByName(WCHAR* Label);
	static void DrawMenu(DrawUtils *Canvas);
	static BOOL MouseClicked( int x , int y , int h , int w , int Index , int Tab);
	static void DrawCursor(DrawUtils *Canvas);
	static int WaitForKey(WCHAR **Name);
};

extern CMenuManager cMenu;

#endif
