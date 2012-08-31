#include <windows.h>
#include <stdio.h>

#include "UMain.h"
#include "Struct.h"

UFont*				MySmallFont_Rip			= NULL;
UFont*				MyFontRo				= NULL;
UTexture*			WhiteTexture			= NULL;

////Global/////
void *pPostRender = NULL;
void *pTick = NULL;
void *pPlayerCalcView = NULL;

BOOL InitGameStart = FALSE;

/////////////My Camera//////////////////
FRotator			MyCamRotation			= FRotator(0,0,0);
FVector				MyCamLocation			= FVector (0,0,0);

///////////////////////////////////////
//BaseControler * xControler = NULL;
UCanvas* GlobalCanvas = NULL;
//KeyInputGame* InputGamekey = NULL;
//UPawnPlaye * Me = NULL;
//UPawnPlaye* BestTargetInitGameVisual = NULL;


//////////Func//////////////
UFunction* pCanvas_WorldToScreen			= NULL;
UFunction* NormalizeNGame					= NULL;


void InitGame()
{
	//MySmallFont_Rip						=	MySmallFont;
	//MyFontRo								=	ROFonts12;
	//WhiteTexture							=	AWhiteTexture;
	//pCanvas_WorldToScreen                 =	FIND_FUNCTION(L"Engine.Canvas.WorldToScreen" );
	//NormalizeNGame						=	FIND_FUNCTION(L"Core.Object.Normalize");
}

void HookedPostRender (UCanvas* Canvas)
{
	if (InitGameStart == FALSE)
	{
		InitGame();
		InitGameStart = TRUE;
	}
	 GlobalCanvas = Canvas;
	 //xControler = (BaseControler *)Canvas->Viewport->Actor;  
  //   InputGamekey = (KeyInputGame*)Canvas->Viewport->Input;

	 //if (xControler != NULL && xControler->PawnPlayer != NULL)
		//    Me = xControler->PawnPlayer;
          
     Canvas->pCanvasUtil->DrawString(5, 60, (unsigned short*)"test",Canvas->MedFont,FColor(181,239,35,255));

	 //if (xControler != NULL)
	 //{
		// if (ValidRender(Canvas,xControler) != NULL)
		// {
  //             EngineBot(Canvas);
		// }
	 //}
}

void WINAPI xPostRender (class UCanvas *Canvas)
{
	__asm pushad
		HookedPostRender(Canvas);
	__asm popad
		__asm
	{
		push Canvas
		call pPostRender
	}
}

void WINAPI xTick (float Delta)
{
	__asm pushad
		//HookedTick(Delta);
	__asm popad
		__asm
	{
		push Delta
			call pTick
	}
}

void WINAPI xPlayerCalcView (AActor *&A,class FVector &CameraLocation,class FRotator &CameraRotation)
{
	__asm
	{
		push CameraRotation
			push CameraLocation
			push A
			call pPlayerCalcView
	}
	__asm pushad

	MyCamRotation = CameraRotation;
	MyCamLocation = CameraLocation;

	__asm popad
}


DWORD WINAPI HookEngine(void)
{
	while ( !GetAsyncKeyState( VK_HOME ) )
        Sleep( 100 );

	while(GetModuleHandle("Engine.dll") == NULL && GetModuleHandle("Core.dll") == NULL) {
		Sleep(200);
	}
    
	void* oPostRender		= GetProcAddress(GetModuleHandle("Engine.dll"),"?MasterProcessPostRender@UInteractionMaster@@QAEXPAVUCanvas@@@Z");
	void* oTick				= GetProcAddress(GetModuleHandle("Engine.dll"),"?MasterProcessTick@UInteractionMaster@@QAEXM@Z");
	void* oPlayerCalcView	= GetProcAddress(GetModuleHandle("Engine.dll"),"?eventPlayerCalcView@APlayerController@@QAEXAAPAVAActor@@AAVFVector@@AAVFRotator@@@Z");

	if (oPostRender != NULL && oTick != NULL && oPlayerCalcView != NULL)
	{
			pPostRender		= (void*)DetourFunctionX((PBYTE)oPostRender,			(PBYTE)xPostRender,		5);
			pTick			= (void*)DetourFunctionX((PBYTE)oTick,					(PBYTE)xTick,			5);
			pPlayerCalcView = (void*)DetourFunctionX((PBYTE)oPlayerCalcView,		(PBYTE)xPlayerCalcView,	5);
			return TRUE;
	}


   return FALSE;
}

BOOL WINAPI DllMain(HMODULE hDll, DWORD dwReason, LPVOID lpReserved)
{
	if (dwReason==DLL_PROCESS_ATTACH) 
	{
		HANDLE  hExitThread = CreateThread(NULL,NULL,(LPTHREAD_START_ROUTINE)HookEngine,NULL,NULL,NULL);

		return TRUE;
	}

	return FALSE;
}