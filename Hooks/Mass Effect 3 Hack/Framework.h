#pragma once
#define NODRAWTEXT
#pragma comment(lib, "Psapi.lib")

#include <windows.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <Psapi.h>
#include <vector>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

#include "SdkHeaders.h"
#include "vmthooks.h"

using namespace std;

char FunctionName[ 256 ]; 

typedef void (__stdcall *tProcessEvent ) ( UFunction*, void*, void* );
tProcessEvent pProcessEvent;

FVector		CameraLocation;
FRotator	CameraRotation;

ofstream				ofile;

UGameEngine				*GameEngine				= NULL;
ULocalPlayer			*LocalPlayer			= NULL;
APlayerController		*Controller				= NULL;

UObject					*pCallObject			= NULL;
UFunction				*pUFunc					= NULL;
void					*pParms					= NULL;
void					*pResult				= NULL;

#define GObjects_Pattern		"\xa1\x00\x00\x00\x00\x8b\x00\x00\x8b\x00\x00\x25\x00\x02\x00\x00"
#define GObjects_Mask			"x????x??x??xxxxx"
#define GObjects_Offset			0x1

#define URotToRadian(x) (x * (3.141592654f / 32768))
#define UCONST_Pi 3.1415926
#define URotation180 32768
#define URotationToRadians2  UCONST_Pi / URotation180 
#define PI 3.1415926

#define URotationToRadians( URotation )		( ( URotation ) * ( UCONST_Pi / 32768.0f ) ) 
#define URotationToDegree( URotation )		( ( URotation ) * ( 360.0f / 65536.0f ) ) 

#define DegreeToURotation( Degree )			( ( Degree ) * ( 65536.0f / 360.0f ) )
#define DegreeToRadian( Degree )			( ( Degree ) * ( UCONST_Pi / 180.0f ) )

#define RadianToURotation( URotation )		( ( URotation ) * ( 32768.0f / UCONST_Pi ) ) 
#define RadianToDegree( Radian )			( ( Radian ) * ( 180.0f / UCONST_Pi )

const FVector VectorZero;
const FRotator RotatorZero;

float CurrentBest = 999999.0f;
APawn *CurrentTarget = NULL;
FVector CurrentLocation;

#define URotationToRadians2  UCONST_Pi / URotation180 

//FRotator FVector::Rotator()
//{
//	return FRotator(RadianToURotation(atan2(Z, sqrt((X * X) + (Y * Y)))), RadianToURotation(atan2(Y, X)), 0);
//}

class Framework
{
public:
	static FColor Framework::MakeColor(int R, int G, int B, int A)
	{
		FColor ReturnedColor;
		ReturnedColor.R = R;
		ReturnedColor.G = G;
		ReturnedColor.B = B;
		ReturnedColor.A = A;
		return ReturnedColor;
	}

	static void Framework::DrawCossHair(UCanvas* pCanvas, const FColor& Color)
	{
		pCanvas->Draw2DLine(pCanvas->ClipX/2 -10,pCanvas->ClipY/2, pCanvas->ClipX/2 +10, pCanvas->ClipY/2,Color);
		pCanvas->Draw2DLine(pCanvas->ClipX/2 ,pCanvas->ClipY/2 -10, pCanvas->ClipX/2, pCanvas->ClipY/2 +10,Color);
	}

	//static unsigned long Framework::FindName( char* Name )
	//{
	//	while ( ! FName::Names() ) 
	//		Sleep( 100 ); 

	//	static char cOutBuffer[ 256 ]; 

	//	for( unsigned int i = 0; i < FName::Names()->Count; i++ )
	//	{
	//		FNameEntry* Entry = FName::Names()->Data [i];
	//		if ( Entry )
	//		{
	//			sprintf_s( cOutBuffer, sizeof( cOutBuffer ), "%s", Entry->Name );

	//			if ( !strcmp( cOutBuffer, Name ) )
	//				return i;
	//		}
	//	}

	//	return NULL;
	//}

	static void Framework::DrawString( UCanvas* pCanvas, float X, float Y, const FColor& Color, bool Center, wchar_t* String )
	{
		float OldCurX		= pCanvas->CurX;
		float OldCurY		= pCanvas->CurY;
		FColor OldColor		= pCanvas->DrawColor;

		pCanvas->CurX		= X;
		pCanvas->CurY		= Y;
		pCanvas->DrawColor  = Color;

		pCanvas->DrawText(String, false, 1, 1, NULL);
    
		pCanvas->CurX      = OldCurX;
		pCanvas->CurY      = OldCurY;
		pCanvas->DrawColor  = OldColor;
	}

	static void Framework::DrawStringEx( UCanvas* Canvas, float X, float Y, const FColor& Color, bool Center, wchar_t* String, ... )
	{
		wchar_t StringBuffer [1024];
		memset(StringBuffer, 0, 1024*2);

		va_list ArgList;

		va_start( ArgList, String );
		vswprintf(StringBuffer, String, ArgList);
		va_end( ArgList );

		DrawString( Canvas, X, Y, Color, Center, StringBuffer );
	}

	static void Framework::DrawRect( UCanvas* Canvas, float X, float Y, float W, float H, const FColor&  Color )
	{
		Canvas->CurX = X;
		Canvas->CurY = Y;
		Canvas->DrawColor  = Color;

		Canvas->DrawTile( Canvas->DefaultTexture, W, H, 0, 0, 1, NULL );
	}

	static void Framework::DrawBox( UCanvas* Canvas, float X, float Y, float W, float H, const FColor&  Color )
	{
		DrawRect( Canvas, X, Y, W, 1, Color );
		DrawRect( Canvas, X, Y, 1, H, Color );
		DrawRect( Canvas, X + W - 1, Y, 1, H, Color );
		DrawRect( Canvas, X, Y + H - 1, W, 1, Color );
	}

	static void Framework::GetAxes( FRotator Angles, FVector& vRight, FVector& vUp, FVector& vForward )
	{
		float        angle;
                
		angle = URotToRadian(Angles.Yaw);
        
		float SinYaw = sin(angle);    
		float CosYaw = cos(angle);
        
		angle = URotToRadian(Angles.Pitch);
    
		float SinPitch = sin(angle);
		float CosPitch = cos(angle);
        
		angle = URotToRadian(Angles.Roll);
        
		float SinRoll = sin(angle);
		float CosRoll = cos(angle);
        
	   vRight.X = CosPitch * CosYaw; 
	   vRight.Y = CosPitch * SinYaw; 
	   vRight.Z = SinPitch; 

	   vUp.X = SinRoll * SinPitch * CosYaw + CosRoll * -SinYaw; 
	   vUp.Y = SinRoll * SinPitch * SinYaw + CosRoll * CosYaw; 
	   vUp.Z = -SinRoll * CosPitch; 
  
	   vForward.X = -( CosRoll * SinPitch * CosYaw + SinRoll * SinYaw ); 
	   vForward.Y = -( CosRoll * SinPitch * SinYaw + SinRoll * -CosYaw ); 
	   vForward.Z = CosRoll * CosPitch;                     
	}

	static FLOAT Framework::VectorDotProduct( FVector* pV1, FVector* pV2 )
	{
		return ( ( pV1->X * pV2->X ) + ( pV1->Y * pV2->Y ) + ( pV1->Z * pV2->Z ) );
	}

	//static FVector* Framework::VectorSubtract( FVector* pOut, FVector* pV1, FVector* pV2 )
	//{
	//	*pOut = *pV1 - *pV2; 

	//	return pOut;
	//}

	//static FVector Framework::WorldToScreen(UCanvas* Canvas, FVector WorldLocation)
	//{
	//	FVector X,Y,Z,D,Out,Delta,Transformed;

	//	GetAxes(CameraRotation,X,Y,Z);

	//	Delta = Controller->Subtract_VectorVector( WorldLocation, CameraLocation );
	//	Transformed.X = Controller->Dot_VectorVector( Delta, Y );
	//	Transformed.Y = Controller->Dot_VectorVector( Delta, Z );
	//	Transformed.Z = Controller->Dot_VectorVector( Delta, X );

	//	if( Transformed.Z < 1.00f )
	//		Transformed.Z = 1.00f;

	//	float FOVAngle = Controller->FOVAngle;

	//	Out.X = ( Canvas->ClipX / 2.0f ) + Transformed.X * ( ( Canvas->ClipX / 2.0f ) / Controller->Tan( FOVAngle * CONST_Pi / 360.0f ) ) / Transformed.Z;
	//	Out.Y = ( Canvas->ClipY / 2.0f ) + -Transformed.Y * ( ( Canvas->ClipX / 2.0f ) / Controller->Tan( FOVAngle * CONST_Pi / 360.0f ) ) / Transformed.Z;
	//	Out.Z = 0;
	//	return Out;
	//}

	static int Framework::calcdist(FVector v1,FVector v2)
	{
	  FVector v;
	  v.X = v1.X - v2.X;
	  v.Y = v1.Y - v2.Y;
	  v.Z = v1.Z - v2.Z;
	  return sqrt(v.X*v.X + v.Y*v.Y + v.Z*v.Z);
	}

	static FVector2D Framework::CalculateRadarCoordinate( FVector Location, FLOAT RadarX, FLOAT RadarY)
	{
		FVector2D Return;

		FLOAT CosYaw = cos( URotationToRadians( CameraRotation.Yaw ) ); 
		FLOAT SinYaw = sin( URotationToRadians( CameraRotation.Yaw ) );

		FLOAT DeltaX = Location.X - CameraLocation.X;
		FLOAT DeltaY = Location.Y - CameraLocation.Y;

		FLOAT LocationX = ( DeltaY * CosYaw - DeltaX * SinYaw ) / 150.0f;
		FLOAT LocationY = ( DeltaX * CosYaw + DeltaY * SinYaw ) / 150.0f;
						
		if( LocationX > 70.0f - 2.5f )
			LocationX = 70.0f - 2.5f;
		else if( LocationX < -( 70.0f - 2.5f ) )
			LocationX = -( 70.0f - 2.5f );

		if( LocationY > 70.0f - 2.5f )
			LocationY = 70.0f - 2.5f;
		else if( LocationY < -( 70.0f - 2.5f ) )
			LocationY = -( 70.0f - 2.5f );

		Return.X = LocationX + RadarX;
		Return.Y = -LocationY + RadarY;

		return Return;
	}

	//static void inline Framework::DrawRadar( APawn* Target, UCanvas* Canvas, FColor Color ) 
	//{
	//		FVector2D Location2D = CalculateRadarCoordinate( Target->Location, 80, 240 );

	//		Canvas->DrawColor = Color;
	//		Canvas->CurX = Location2D.X;
	//		Canvas->CurY = Location2D.Y;
	//		Canvas->DrawBox(5,5);
	//
	//		Canvas->DrawColor = MakeColor(0,0,255,255);
	//		Canvas->CurX = 10 + 80;
	//		Canvas->CurY = (float)((float)80 - (float)((float)5 / (float)2)) + 160;
	//		Canvas->DrawBox(5,5);

	//		Canvas->DrawColor = MakeColor(0,0,255,255);
	//		Canvas->CurX = 10;
	//		Canvas->CurY = 160;
	//		Canvas->DrawBox(160,160);
	//}

	//static void Framework::Boxes(UCanvas* pCanvas, APawn* Target, FColor Color)
	//{
	//	//Valid Target Checks Here
	//	{
	//		FVector Min,Max,vVec1,vVec2,vVec3,vVec4,vVec5,vVec6,vVec7,vVec8;

	//		FBox Returned;
	//		Target->GetComponentsBoundingBox(&Returned);

	//		if(Returned.IsValid)
	//		{
	//			Max = Returned.Max;
	//			Min = Returned.Min;
	//			{
	//				vVec3 = Min;
	//				vVec3.X = Max.X;
	//				vVec4 = Min;
	//				vVec4.Y = Max.Y;
	//				vVec5 = Min;
	//				vVec5.Z = Max.Z;
	//				vVec6 = Max;
	//				vVec6.X = Min.X;
	//				vVec7 = Max;
	//				vVec7.Y = Min.Y;
	//				vVec8 = Max;
	//				vVec8.Z = Min.Z;
	//				vVec1 = WorldToScreen(pCanvas, Min);
	//				vVec2 = WorldToScreen(pCanvas, Max);
	//				vVec3 = WorldToScreen(pCanvas, vVec3);
	//				vVec4 = WorldToScreen(pCanvas, vVec4);
	//				vVec5 = WorldToScreen(pCanvas, vVec5);
	//				vVec6 = WorldToScreen(pCanvas, vVec6);
	//				vVec7 = WorldToScreen(pCanvas, vVec7);
	//				vVec8 = WorldToScreen(pCanvas, vVec8);
	//			
	//				pCanvas->Draw2DLine(vVec1.X, vVec1.Y, vVec5.X, vVec5.Y, Color);
	//				pCanvas->Draw2DLine(vVec2.X, vVec2.Y, vVec8.X, vVec8.Y, Color);
	//				pCanvas->Draw2DLine(vVec3.X, vVec3.Y, vVec7.X, vVec7.Y, Color);
	//				pCanvas->Draw2DLine(vVec4.X, vVec4.Y, vVec6.X, vVec6.Y, Color);
	//				pCanvas->Draw2DLine(vVec1.X, vVec1.Y, vVec3.X, vVec3.Y, Color);
	//				pCanvas->Draw2DLine(vVec1.X, vVec1.Y, vVec4.X, vVec4.Y, Color);
	//				pCanvas->Draw2DLine(vVec8.X, vVec8.Y, vVec3.X, vVec3.Y, Color);
	//				pCanvas->Draw2DLine(vVec8.X, vVec8.Y, vVec4.X, vVec4.Y, Color);
	//				pCanvas->Draw2DLine(vVec2.X, vVec2.Y, vVec6.X, vVec6.Y, Color);
	//				pCanvas->Draw2DLine(vVec2.X, vVec2.Y, vVec7.X, vVec7.Y, Color);
	//				pCanvas->Draw2DLine(vVec5.X, vVec5.Y, vVec6.X, vVec6.Y, Color);
	//				pCanvas->Draw2DLine(vVec5.X, vVec5.Y, vVec7.X, vVec7.Y, Color);
	//			}
	//		}
	//	}
	//}

	static bool Framework::FastTrace( APlayerController* Controller, APawn* TargetPawn, FVector& StartLocation, FVector& EndLocation )
	{
		FVector HitLocation, HitNormal;
		FTraceHitInfo HitInfo;

		return ( TargetPawn == Controller->Trace(
			EndLocation,
			StartLocation,
			true,
			VectorZero,
			0,
			&HitLocation,
			&HitNormal,
			&HitInfo) );
	}

	static FColor GetTeamColor(bool IsPlayer, bool IsVisible, bool IsEnemy )
	{
		FColor ColorRed		= MakeColor(255,0,0,255);
		FColor ColorGreen	= MakeColor(0,255,0,255);
		FColor ColorBlue	= MakeColor(0,0,255,255);
		FColor ColorYellow	= MakeColor(255,255,0,255);

		FColor DrawColor = ColorBlue;
		if ( IsPlayer )
		{
			DrawColor = IsVisible ? ColorGreen : ColorBlue;
			if ( IsEnemy )
				DrawColor = IsVisible ? ColorRed : ColorYellow;
		}

		return DrawColor;
	}

	//static void AimBot(bool IsVisible, bool IsEnemy, FVector Location, APawn* Pawn)
	//{
	//	if( IsEnemy && IsVisible )
	//	{
	//		float Distance = (Location - CameraLocation).Length();

	//		if ( Distance < CurrentBest )
	//		{
	//				CurrentBest = Distance;
	//				CurrentTarget = Pawn;
	//				CurrentLocation = Location;
	//		}
	//	}

	//	if( GetAsyncKeyState( 'F' ) && CurrentTarget )
	//	{
	//		FVector AimForward = (CurrentLocation - CameraLocation);
	//		FRotator AimRotation = AimForward.Rotator();

	//		//Controller->ClientSetCtrlRotation(AimRotation);
	//	}
	//}

	//void wallhack(APawn* Target)
	//{
	//	Target->Mesh->SetDepthPriorityGroup(2);	
	//}
};

FColor ColorRed		= Framework::MakeColor(255,0,0,255);
FColor ColorGreen	= Framework::MakeColor(0,255,0,255);
FColor ColorBlue	= Framework::MakeColor(0,0,255,255);
FColor ColorYellow	= Framework::MakeColor(255,255,0,255);
FColor ColorLilac	= Framework::MakeColor(0,255,255,255);
FColor ColorGray	= Framework::MakeColor(96,96,96,255);
FColor ColorWhite	= Framework::MakeColor(255,255,255,255);
FColor ColorBlack	= Framework::MakeColor(0,0,0,0);

FLinearColor LColorRed		= {255,0,0,255};
FLinearColor LColorGreen	= {0,255,0,255};
FLinearColor LColorBlue		= {0,0,255,255};
FLinearColor LColorYellow	= {255,255,0,255};
FLinearColor LColorLilac	= {0,255,255,255};
FLinearColor LColorGray		= {96,96,96,255};
FLinearColor LColorWhite	= {255,255,255,255};
FLinearColor LColorBlack	= {0,0,0,0};

class cuseful
{
public:
	MODULEINFO cuseful::GetModuleInfo ( LPCTSTR lpModuleName )
	{
		MODULEINFO miInfos = { NULL };

		HMODULE hmModule = GetModuleHandle ( lpModuleName );

		if ( hmModule )
		{
			GetModuleInformation ( GetCurrentProcess(), hmModule, &miInfos, sizeof ( MODULEINFO ) );
		}

		return miInfos;
	}

	DWORD cuseful::FindPattern ( DWORD startAddres, DWORD fileSize, PBYTE pattern, char mask[] )
	{
		DWORD pos = 0;
		int searchLen = strlen ( mask ) - 1;

		for ( DWORD retAddress = startAddres; retAddress < startAddres + fileSize; retAddress++ )
		{
			if ( *(PBYTE) retAddress == pattern[ pos ] || mask[ pos ] == '?' )
			{
				if ( mask[ pos + 1 ] == '\0' )
				{
					return ( retAddress - searchLen );
				}
					
				pos++;
			} 
			else
			{
				pos = 0;
			}		
		}

		return NULL;
	}

	void cuseful::add_log( char* LOG_FILE, const char *fmt, ... )
	{
		ofile.open( LOG_FILE, ios::app );

		va_list va_alist;
		char logbuf[256] = {0};

		va_start( va_alist, fmt );
		vsnprintf( logbuf + strlen(logbuf), sizeof(logbuf) - strlen(logbuf), fmt, va_alist );
		va_end( va_alist );

		ofile << logbuf << endl;

		ofile.close();
	}
};

//Menu Settings
///////////////////////////////////////////////////////////////
/* Tab Count		*/   #define Tab_Count		5
/* CheckBox Count	*/   #define CheckBox_Count	15
//////////////////////////////////////////////////////////////

struct MenuSt_t
{
	int x , y;
	int NumberOfItems , NumberOfTabs;
	bool IsVisble , Load;
};

struct CheckBox_t
{
	bool State , IsClicked;
};

class cMenu
{
public:
	MenuSt_t MenuSt;
	CheckBox_t CheckBox[Tab_Count][CheckBox_Count];


	void cMenu::MBox (int X, int Y, int H, int W, FColor Color, UCanvas* Canvas)
	{
		Canvas->CurX		= X;
		Canvas->CurY		= Y;
		Canvas->DrawColor  = Color;

		Canvas->DrawRect(H, W, Canvas->DefaultTexture);
	}

	void cMenu::AddCheck (wchar_t* Name ,int x, int y , int h , int w , UCanvas* Canvas , int Tab)
	{
		++MenuSt.NumberOfItems;

		if(CheckBox[Tab][0].State)
		{

			if(MouseClick( x , y ,h ,w + 8 * wcslen( Name ) , MenuSt.NumberOfItems ,Tab ))
				CheckBox [Tab] [ MenuSt.NumberOfItems ].State = !CheckBox [Tab][ MenuSt.NumberOfItems ].State ;

			Framework::DrawBox(Canvas, x, y, w, h, ColorGreen);
			Framework::DrawStringEx( Canvas, x + w + 3, y, ColorGreen, 0, L"%s", Name);
			
			if(CheckBox[Tab] [ MenuSt.NumberOfItems ].State)
				Framework::DrawStringEx( Canvas, x + 2, y - 2, ColorGreen, 0, L"X");
		}
	}

	void cMenu::AddTab(wchar_t* Name, int x, int y, int h , int w,  UCanvas* Canvas)
	{
		if(MouseClick( x , y ,h ,w , 0, MenuSt.NumberOfTabs ))
		{
			for(int i = 0 ; i < 4 ; i++)
				CheckBox[i][0].State = false;
			CheckBox[ MenuSt.NumberOfTabs ][0].State = true ;
		}

		if(CheckBox[ MenuSt.NumberOfTabs ][0].State)
			MBox(x, y, w, h, ColorGray, Canvas);
		else
			MBox(x, y, w, h, ColorGreen, Canvas);

		Framework::DrawStringEx( Canvas, x + 3, y + 3, ColorBlue, 0, L"%s", Name );
		
		MenuSt.NumberOfTabs ++;
	}

	void cMenu::Render( UCanvas* Canvas )
	{
		if(!MenuSt.Load)
		{
			MenuSt.x = 100;
			MenuSt.y = 100;
			CheckBox[0][0].State = true; // Show Fist Tab .
			MenuSt.Load = true;
		}

		if( GetAsyncKeyState( VK_END )&1)
			MenuSt.IsVisble = !MenuSt.IsVisble;
		
		if(MenuSt.IsVisble)
		{
			
			MBox( MenuSt.x, MenuSt.y, 300, 300, ColorGray, Canvas);

			/////////////////////////////////////////////////////////////////////////////////////
			/*		Tabs		*/
			AddTab(L"ESP",		MenuSt.x + 10		, MenuSt.y ,30 , 60 ,Canvas);
			AddTab(L"AimBox",	MenuSt.x + 75		, MenuSt.y ,30 , 60 ,Canvas);
			AddTab(L"Misc",		MenuSt.x + 140		, MenuSt.y ,30 , 60 ,Canvas);
			//AddTab(L"Nothing",	MenuSt.x + 205		, MenuSt.y ,30 , 60 ,Canvas);

			MenuSt.NumberOfTabs = 0;

			////////////////////////////////////////////////////////////////////////////////////////
			int i = 2; // Tab 1
			/*		Left		*/
			AddCheck(L"Names"				, MenuSt.x + 15  , MenuSt.y + (20 * i++) , 12, 12, Canvas ,0);
			AddCheck(L"Health"				, MenuSt.x + 15  , MenuSt.y + (20 * i++) , 12, 12, Canvas ,0);
			AddCheck(L"Distance"			, MenuSt.x + 15  , MenuSt.y + (20 * i++) , 12, 12, Canvas ,0);
			AddCheck(L"Boxs"				, MenuSt.x + 15  , MenuSt.y + (20 * i++) , 12, 12, Canvas ,0);

			//i = 2;
			/*		Right	 */
			//AddCheck(L"Player WireFrame"	, MenuSt.x + 150  , MenuSt.y + (20 * i++) , 12, 12, Canvas ,0);
			//AddCheck(L"NoFlash"			, MenuSt.x + 150  , MenuSt.y + (20 * i++) , 12, 12, Canvas ,0);
			//AddCheck(L"Glow"				, MenuSt.x + 150  , MenuSt.y + (20 * i++) , 12, 12, Canvas ,0);

			MenuSt.NumberOfItems = 0;
			//////////////////////////////////////////////////////////////////////////////////////////
			i = 2; // Tab 2
			AddCheck(L"aim 180"				, MenuSt.x + 15  , MenuSt.y + (20 * i++) , 12, 12, Canvas ,1);
			AddCheck(L"aim 360"				, MenuSt.x + 15  , MenuSt.y + (20 * i++) , 12, 12, Canvas ,1);

			MenuSt.NumberOfItems = 0;
			///////////////////////////////////////////////////////////////////////////////////////////
			i =  2; // Tab 3
			AddCheck(L"Crosshair"		, MenuSt.x + 15  , MenuSt.y + (20 * i++) , 12, 12, Canvas ,2);
			AddCheck(L"Gaydar"			, MenuSt.x + 15  , MenuSt.y + (20 * i++) , 12, 12, Canvas ,2);
			AddCheck(L"ShowFps"			, MenuSt.x + 15  , MenuSt.y + (20 * i++) , 12, 12, Canvas ,2);

			MenuSt.NumberOfItems = 0;
			//////////////////////////////////////////////////////////////////////////////////////////
			i =  2; // Tab 4
			AddCheck(L"Check1 on Tab 4" , MenuSt.x + 15  , MenuSt.y + (20 * i++) , 12, 12, Canvas ,3);
			AddCheck(L"Check2 on Tab 4" , MenuSt.x + 15  , MenuSt.y + (20 * i++) , 12, 12, Canvas ,3);
			AddCheck(L"Check3 on Tab 4" , MenuSt.x + 15  , MenuSt.y + (20 * i++) , 12, 12, Canvas ,3);
			AddCheck(L"Check4 on Tab 4" , MenuSt.x + 15  , MenuSt.y + (20 * i++) , 12, 12, Canvas ,3);

			MenuSt.NumberOfItems = 0;

			DrawMouse(Canvas);// Draw Mouse;
		}
	}

	bool cMenu::MouseClick( int x , int y , int h , int w , int Index , int Tab)
	{
		POINT Cur;
		GetCursorPos( &Cur );

		if( Cur.x > x && Cur.x < x + w && Cur.y > y && Cur.y < y + h )
		{
			if( GetAsyncKeyState( VK_LBUTTON ) < 0 )
				CheckBox [Tab][Index].IsClicked = true;

			if(GetAsyncKeyState( VK_LBUTTON ) == 0 && CheckBox [Tab][Index].IsClicked )
			{
				CheckBox [Tab][Index].IsClicked = false;
				return true;
			}
		}else CheckBox [Tab][Index].IsClicked = false;
		return false;
	}

	void cMenu::DrawMouse(UCanvas* Canvas)
	{
		POINT Cur;
		GetCursorPos( &Cur );
		MBox(Cur.x,Cur.y,8,8, ColorBlue, Canvas);
	}
};

extern class cMenu Menu;