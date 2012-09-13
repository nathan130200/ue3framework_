#include <windows.h>
#include <string>
#include <vector>
using namespace std;

#include "..\Renders\CRender.h"

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

static const float MenuWidth = 300.0f;
static const float MenuHeight = 300.0f;
static const float MenuBarHeight = 10.0f;
static const float MenuTabWidth = 50.0f;
static const float MenuTabHeight = 20.0f;

static FColor			ColorMenuBar		= {100,150,255,255};
static FLinearColor		LColorMenuBar		= {100,150,255,255};

static vector<CheckBoxItem> CheckBoxes;
static vector<MenuTab> MenuTabs;
static vector<MenuButton> MenuButtons;

static int SelectedMenuTab = 0;

static int PositionAddX = 0, PositionAddY = 0;

static int MenuOriginX, MenuOriginY;

static BOOL MouseClickedDown = FALSE;
static BOOL MouseClickedOnCheckbox = FALSE;

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
	static void AddTab(float x, float y, WCHAR *Label)
	{
		MenuTab Tab = { x, y, Label };
		MenuTabs.push_back(Tab);
	}

	static void AddCheckBox(float x, float y, int TabIndex, WCHAR *Label)
	{
		CheckBoxItem Item = { x, y, TabIndex, FALSE, Label };
		CheckBoxes.push_back(Item);
	}

	static void AddCheckBox(float x, float y, float Width, float Height, int TabIndex, WCHAR *Label)
	{
		MenuButton Item = { x, y, Width, Height, TabIndex, Label };
		MenuButtons.push_back(Item);
	}

	static int GetCheckBoxIndexByName(WCHAR* Label)
	{
		for(int i = 0; i <= CheckBoxes.size(); i++)
			if(wcscmp(CheckBoxes[i].Label, Label) == 0)
				return i;
		return -1;
	}

	static void DrawMenu(DrawUtils *Canvas)
	{
		if(!(GetAsyncKeyState( VK_LBUTTON ) < 0))
		{
			MouseClickedDown = FALSE;
		}

		if (MouseClicked(MenuOriginX, MenuOriginY, MenuBarHeight, MenuWidth, 0, 0) || MouseClickedDown)
		{
			POINT Cur;
			GetCursorPos( &Cur );

			MenuOriginX = Cur.x;
			MenuOriginY = Cur.y;

			MouseClickedDown = TRUE;	
		}

		CRender::DrawGradientBox(Canvas, MenuOriginX, MenuOriginY, MenuWidth, MenuHeight, ColorBlack, 5, 5, 5);
		CRender::DrawRect(Canvas, MenuOriginX, MenuOriginY, MenuWidth, MenuBarHeight, LColorMenuBar);

		for (int i = 0; i < MenuTabs.size(); i++)
		{
			float TmpMenuTabX = MenuOriginX + MenuTabs[i].x;
			float TmpMenuTabY = MenuOriginY + MenuBarHeight + 5;

			CRender::DrawGradientBox(Canvas, TmpMenuTabX, TmpMenuTabY, MenuTabWidth, MenuTabHeight, ColorBlack, 1, 1, 1);
			CRender::DrawString(Canvas, MenuOriginX + MenuTabs[i].x + (MenuTabWidth / 2), MenuOriginY + MenuBarHeight + 8, ColorGray, TRUE, MenuTabs[i].Label);

			if (MouseClicked((int)TmpMenuTabX, (int)TmpMenuTabY, MenuTabHeight, MenuTabWidth, 0, 0))
			{
				SelectedMenuTab = i;
			}
		}

		CRender::DrawRect(Canvas, MenuOriginX + MenuTabs[SelectedMenuTab].x, MenuOriginY + MenuBarHeight + 5, MenuTabWidth, MenuTabHeight, LColorYellow);
		CRender::DrawString(Canvas, MenuOriginX + MenuTabs[SelectedMenuTab].x + (MenuTabWidth / 2), MenuOriginY + MenuBarHeight + 8, ColorLightGray, TRUE, MenuTabs[SelectedMenuTab].Label);
		CRender::DrawRect(Canvas, MenuOriginX, MenuOriginY + MenuBarHeight + MenuTabHeight + 5, MenuWidth, 5, LColorYellow);


		for (int i = 0; i < CheckBoxes.size(); i++)
		{
			if (CheckBoxes[i].TabIndex == SelectedMenuTab)
			{
				CRender::DrawBox(Canvas, MenuOriginX + CheckBoxes[i].x, MenuOriginY + CheckBoxes[i].y, 10, 10, LColorLightGray);
				CRender::DrawString(Canvas, MenuOriginX + CheckBoxes[i].x + 15, MenuOriginY + CheckBoxes[i].y - 2, ColorWhite, FALSE, CheckBoxes[i].Label);

				if (MouseClicked(MenuOriginX + CheckBoxes[i].x, MenuOriginY + CheckBoxes[i].y, 10, 10, 0, 0) && !MouseClickedOnCheckbox)
				{
					CheckBoxes[i].Checked = !CheckBoxes[i].Checked;
					Sleep(100);
					//MouseClickedOnCheckbox = TRUE;
				}
				else
				{
					//MouseClickedOnCheckbox = FALSE;
				}

				if (CheckBoxes[i].Checked)
				{
					CRender::DrawString(Canvas, MenuOriginX + CheckBoxes[i].x + 1, MenuOriginY + CheckBoxes[i].y-2, ColorWhite, FALSE, L"X");
				}
			}
		}

		for (int i = 0; i < MenuButtons.size(); i++)
		{
			if (MenuButtons[i].TabIndex == SelectedMenuTab)
			{
				CRender::DrawBox(Canvas, MenuOriginX + MenuButtons[i].x, MenuOriginY + MenuButtons[i].y, MenuButtons[i].Width, MenuButtons[i].Height, LColorLightGray);
				CRender::DrawString(Canvas, MenuOriginX + MenuButtons[i].x + (MenuButtons[i].Width / 2), MenuOriginY + MenuButtons[i].y + (MenuButtons[i].Height / 2) - 10, ColorWhite, TRUE, MenuButtons[i].Label);
			
				if (MouseClicked(MenuOriginX + MenuButtons[i].x, MenuOriginY + MenuButtons[i].y, MenuButtons[i].Height, MenuButtons[i].Width, 0, 0) && !MouseClickedOnCheckbox)
				{
					WCHAR *Name = NULL;
					Sleep(500);
					CurrentAimbotKey = WaitForKey(&Name);
					CurrentAimbotKeyStr = Name;
				}
			}
		}

		if (SelectedMenuTab == 1)
		{
			CRender::DrawString(Canvas, MenuOriginX + 145, MenuOriginY + 180, ColorWhite, TRUE, L"Press the button and");
			CRender::DrawString(Canvas, MenuOriginX + 145, MenuOriginY + 200, ColorWhite, TRUE, L"then key for aimbot trigger");	
			CRender::DrawStringEx(Canvas, MenuOriginX + 145, MenuOriginY + 220, ColorWhite, TRUE, L"Current Aimbot Key: %s", CurrentAimbotKeyStr);
		}

		DrawCursor(Canvas);
	}

	static BOOL MouseClicked( int x , int y , int h , int w , int Index , int Tab)
	{
		POINT Cur;
		GetCursorPos( &Cur );

		if( Cur.x > x && Cur.x < x + w && Cur.y > y && Cur.y < y + h )
		{
			if( GetAsyncKeyState( VK_LBUTTON ) < 0 )
			{
				return true;
			}
		}
		else 
		{
		}

		return false;
	}

	static void DrawCursor(DrawUtils *Canvas)
	{
		POINT Cur;
		GetCursorPos( &Cur );

		CRender::DrawRect(Canvas, Cur.x, Cur.y, 8, 8, LColorGreen);
	}

	static int WaitForKey(WCHAR **Name)
	{
		while (TRUE)
		{
			for (int i = 0; i < sizeof(VirtualKeyTable) / sizeof(VIRTUALKEY); i++)
			{
				int key = VirtualKeyTable[i].Key;

				if (GetAsyncKeyState(key) < 0)
				{
					if (Name)
					{
						*Name = VirtualKeyTable[i].Name;
					}

					return key;
				}
			}
		}

		return 0;
	}


};

extern CMenuManager cMenu;

