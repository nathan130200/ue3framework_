#include "Framework\Framework.h"
#include "Framework\Renders\CRender.h"
#include "Framework\Menu\MenuManager.h"

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


void AddTab(float x, float y, WCHAR *Label)
{
	MenuTab Tab = { x, y, Label };
	MenuTabs.push_back(Tab);
}

void AddCheckBox(float x, float y, int TabIndex, WCHAR *Label)
{
	CheckBoxItem Item = { x, y, TabIndex, FALSE, Label };
	CheckBoxes.push_back(Item);
}

void AddCheckBox(float x, float y, float Width, float Height, int TabIndex, WCHAR *Label)
{
	MenuButton Item = { x, y, Width, Height, TabIndex, Label };
	MenuButtons.push_back(Item);
}

int GetCheckBoxIndexByName(WCHAR* Label)
{
	for(int i = 0; i <= CheckBoxes.size(); i++)
		if(wcscmp(CheckBoxes[i].Label, Label) == 0)
			return i;
	return -1;
}

void DrawMenu(DrawUtils *Canvas)
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

BOOL MouseClicked( int x , int y , int h , int w , int Index , int Tab)
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

void DrawCursor(DrawUtils *Canvas)
{
	POINT Cur;
	GetCursorPos( &Cur );

	CRender::DrawRect(Canvas, Cur.x, Cur.y, 8, 8, LColorGreen);
}

int WaitForKey(WCHAR **Name)
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
