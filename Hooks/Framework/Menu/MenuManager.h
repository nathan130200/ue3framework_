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

static const float MenuWidth = 300.0f;
static const float MenuHeight = 300.0f;
static const float MenuBarHeight = 10.0f;
static const float MenuTabWidth = 50.0f;
static const float MenuTabHeight = 20.0f;

FColor			ColorMenuBar		= {100,150,255,255};
FLinearColor	LColorMenuBar		= {100,150,255,255};

static vector<CheckBoxItem> CheckBoxes;
static vector<MenuTab> MenuTabs;

static int SelectedMenuTab = 0;

static int PositionAddX = 0, PositionAddY = 0;

static int MenuOriginX, MenuOriginY;

static BOOL MouseClickedDown = FALSE;
static BOOL MouseClickedOnCheckbox = FALSE;

class CMenuManager
{
public:	
	static void MenuInit()
	{
		MenuOriginX = 10;
		MenuOriginY = 10;

		//===========================
		AddTab(10,	0, L"ESP");
		//===========================
		AddCheckBox(20, 60,		0,	L"Name ESP");
		AddCheckBox(20, 80,		0,	L"Health ESP");
		AddCheckBox(20, 100,	0,	L"Distance ESP");
		AddCheckBox(20, 120,	0,	L"Bone ESP");
		AddCheckBox(20, 140,	0,	L"Box ESP");

		//===========================
		AddTab(70,	0, L"Aimbot");
		//===========================
		AddCheckBox(20, 60,		1,	L"AimBot");
		AddCheckBox(20, 80,		1,	L"AutoFireBot");

		//===========================
		AddTab(130, 0, L"Misc");
		//===========================
		AddCheckBox(20, 60,		2,	L"Visible Enemy Info");
		AddCheckBox(20, 80,		2,	L"Line To Target");
		AddCheckBox(20, 100,	2,	L"CossHair");
		AddCheckBox(20,	120,	2,	L"Radar");

		//===========================
	}

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

	static void DrawMenu(UCanvas *Canvas)
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

#ifdef UE3_0
		CRender::DrawGradientBox(Canvas, MenuOriginX, MenuOriginY, MenuWidth, MenuHeight, ColorBlack, 5, 5, 5);
		CRender::DrawRect(Canvas, MenuOriginX, MenuOriginY, MenuWidth, MenuBarHeight, ColorMenuBar);
#endif

#ifdef UE3_5
		CRender::DrawGradientBox(Canvas, MenuOriginX, MenuOriginY, MenuWidth, MenuHeight, ColorBlack, 5, 5, 5);
		CRender::DrawRect(Canvas, MenuOriginX, MenuOriginY, MenuWidth, MenuBarHeight, LColorMenuBar);
#endif

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

#ifdef UE3_0
		CRender::DrawRect(Canvas, MenuOriginX + MenuTabs[SelectedMenuTab].x, MenuOriginY + MenuBarHeight + 5, MenuTabWidth, MenuTabHeight, ColorYellow);
		CRender::DrawString(Canvas, MenuOriginX + MenuTabs[SelectedMenuTab].x + (MenuTabWidth / 2), MenuOriginY + MenuBarHeight + 8, ColorLightGray, TRUE, MenuTabs[SelectedMenuTab].Label);
		CRender::DrawRect(Canvas, MenuOriginX, MenuOriginY + MenuBarHeight + MenuTabHeight + 5, MenuWidth, 5, ColorYellow);
#endif

#ifdef UE3_5
		CRender::DrawRect(Canvas, MenuOriginX + MenuTabs[SelectedMenuTab].x, MenuOriginY + MenuBarHeight + 5, MenuTabWidth, MenuTabHeight, LColorYellow);
		CRender::DrawString(Canvas, MenuOriginX + MenuTabs[SelectedMenuTab].x + (MenuTabWidth / 2), MenuOriginY + MenuBarHeight + 8, ColorLightGray, TRUE, MenuTabs[SelectedMenuTab].Label);
		CRender::DrawRect(Canvas, MenuOriginX, MenuOriginY + MenuBarHeight + MenuTabHeight + 5, MenuWidth, 5, LColorYellow);
#endif

		for (int i = 0; i < CheckBoxes.size(); i++)
		{
			if (CheckBoxes[i].TabIndex == SelectedMenuTab)
			{

#ifdef UE3_0
				CRender::DrawBox(Canvas, MenuOriginX + CheckBoxes[i].x, MenuOriginY + CheckBoxes[i].y, 10, 10, ColorLightGray);
				CRender::DrawString(Canvas, MenuOriginX + CheckBoxes[i].x + 15, MenuOriginY + CheckBoxes[i].y - 2, ColorWhite, FALSE, CheckBoxes[i].Label);
#endif

#ifdef UE3_5
				CRender::DrawBox(Canvas, MenuOriginX + CheckBoxes[i].x, MenuOriginY + CheckBoxes[i].y, 10, 10, LColorLightGray);
				CRender::DrawString(Canvas, MenuOriginX + CheckBoxes[i].x + 15, MenuOriginY + CheckBoxes[i].y - 2, ColorWhite, FALSE, CheckBoxes[i].Label);
#endif


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
					CRender::DrawString(Canvas, MenuOriginX + CheckBoxes[i].x + 2, MenuOriginY + CheckBoxes[i].y-2, ColorWhite, FALSE, L"X");
				}
			}
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

	static void DrawCursor(UCanvas *Canvas)
	{
		POINT Cur;
		GetCursorPos( &Cur );

#ifdef UE3_0
		CRender::DrawRect(Canvas, Cur.x, Cur.y, 8, 8, ColorGreen);
#endif

#ifdef UE3_5
		CRender::DrawRect(Canvas, Cur.x, Cur.y, 8, 8, LColorGreen);
#endif

	}
};

extern CMenuManager cMenu;

