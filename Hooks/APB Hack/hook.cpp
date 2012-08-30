#include "..\Framework\Framework.h"

char FunctionName[ 256 ]; 

typedef void (__stdcall *tProcessEvent ) ( UFunction*, void*, void* );
tProcessEvent pProcessEvent;


unsigned long PostRender_Name = NULL;

bool menu = FALSE;

void PostRender ( UCanvas* pCanvas )
{
	if ( pCanvas == NULL || GameEngine == NULL || LocalPlayer == NULL )
		return;

	if(GetAsyncKeyState( VK_HOME )&1)
	{
		menu = !menu;
	}

	if(menu)
	{
		CMenuManager::DrawMenu(pCanvas);
	}

	Controller = reinterpret_cast<APlayerController*>( LocalPlayer->Actor );
	APawn* Pawn = reinterpret_cast<APawn*>(LocalPlayer->Actor->Pawn);

	AcAPBPlayerController* AcAPBController = reinterpret_cast<AcAPBPlayerController*>(LocalPlayer->Actor);
	AcAPBPawn* APBPawn = reinterpret_cast<AcAPBPawn*>(LocalPlayer->Actor->Pawn);

	if ( Controller == NULL )
		return;

	Controller->GetPlayerViewPoint( &CameraLocation, &CameraRotation );

	Draw( pCanvas, AcAPBController, CameraLocation, CameraRotation, APBPawn );
}

void __declspec(naked) hkProcessEvent ()
{
    __asm mov pCallObject, ecx;
    __asm
    {
        push eax
        mov eax, dword ptr [esp + 0x8]
        mov pUFunc, eax
        mov eax, dword ptr [esp + 0xC]
        mov pParms, eax
        mov eax, dword ptr [esp + 0x10]
        mov pResult, eax
        pop eax        
    }
	_asm pushad	
	
	
    if ( pUFunc ) //make sure pfunc is valid
    {
        strcpy( FunctionName, pUFunc->GetFullName() ); //get function name
        if ( !strcmp( FunctionName, "Function Engine.GameViewportClient.PostRender" ) ) //If its a postrender call
        {
			UGameViewportClient* viewport = (UGameViewportClient*)pCallObject;
			if(viewport) //caller should be a Viewportclient object, make sure it is
			{
				UGameViewportClient_eventPostRender_Parms* parameters= (UGameViewportClient_eventPostRender_Parms*)pParms; //get the parameters
				if(parameters)
				{
					PostRender(parameters->Canvas); // call a hooked postrender method
				}
			}		
        }
    }

    __asm popad
    __asm
    {
        push pResult
        push pParms
        push pUFunc
        call pProcessEvent

        retn 0xC
    }
}

//bool FindGameTables( void )
//{
//    MODULEINFO miGame = Utils::GetModuleInfo ( NULL );
//    
//    GObjects = *(unsigned long*) ( Utils::FindPattern( (unsigned long) miGame.lpBaseOfDll, miGame.SizeOfImage, (unsigned char*) GObjects_Pattern, (char*) GObjects_Mask ) + GObjects_Offset );
//
//    GNames = *(unsigned long*) ( Utils::FindPattern( (unsigned long) miGame.lpBaseOfDll, miGame.SizeOfImage, (unsigned char*) GNames_Pattern, (char*) GNames_Mask ) + GNames_Offset );
//
//    return true;
//}

void MenuInit()
{
	MenuOriginX = 10;
	MenuOriginY = 10;

	//===========================
	CMenuManager::AddTab(10,	0,	L"ESP");
	//===========================
	CMenuManager::AddCheckBox(20,	60,		0,	L"Name ESP");
	CMenuManager::AddCheckBox(20,	80,		0,	L"Health ESP");
	CMenuManager::AddCheckBox(20,	100,	0,	L"Distance ESP");
	CMenuManager::AddCheckBox(20,	120,	0,	L"Bone ESP");
	CMenuManager::AddCheckBox(20,	140,	0,	L"Box ESP");

	//===========================
	CMenuManager::AddTab(70,	0,	L"Aimbot");
	//===========================
	CMenuManager::AddCheckBox(20,	60,		1,	L"AimBot");
	CMenuManager::AddCheckBox(20,	80,		1,	L"Auto Fire Bot");

	//===========================
	CMenuManager::AddTab(130,	0,	L"Misc");
	//===========================
	CMenuManager::AddCheckBox(20,	60,		2,	L"Visible Enemy Info");
	CMenuManager::AddCheckBox(20,	80,		2,	L"Line To Target");
	CMenuManager::AddCheckBox(20,	100,	2,	L"CossHair");
	CMenuManager::AddCheckBox(20,	120,	2,	L"Radar");

	//===========================

	CMenuManager::AddCheckBox(20,	100,	1,	L"Auto Knife");
}

HMODULE Entry::g_hMainModule;
DWORD Entry::dwCodeSize;
DWORD Entry::dwCodeOffset;
DWORD Entry::dwEntryPoint;

unsigned long ModuleThread( void* )
{
	Entry::dwCodeSize = Utils::GetSizeOfCode( Entry::g_hMainModule );
	Entry::dwCodeOffset = Utils::OffsetToCode( Entry::g_hMainModule );
	Entry::dwEntryPoint = (DWORD)Entry::g_hMainModule + Entry::dwCodeOffset;

	while ( !GetAsyncKeyState( VK_HOME ) )
        Sleep( 100 );

    //if ( FindGameTables() )
    //{
		while ( !(GameEngine = UObject::FindObject<UGameEngine>("APBGameEngine Transient.APBGameEngine")))
		{
			Sleep( 100 );
		}

		while ( GameEngine->GameViewport == NULL )
            Sleep( 100 );

        LocalPlayer = GameEngine->GamePlayers.Data[0];

		PostRender_Name = Framework::FindName( "PostRender" );

		MenuInit();

		toolkit::VMTHook* hook = new toolkit::VMTHook(GameEngine->GameViewport); 
		pProcessEvent = hook->GetMethod<tProcessEvent>(60); 
		hook->HookMethod(&hkProcessEvent, 60);
	//}

	return 0;
}

DWORD deinitThread(LPVOID lpArguments)
{
	return 0;
}

BOOL WINAPI DllMain( HMODULE hModule, DWORD dwReason, GEMODULE * pGem )
{
    switch ( dwReason )
    {
	case DLL_PROCESS_ATTACH:
		{
			DisableThreadLibraryCalls( hModule );
			CreateThread( NULL, 0, ( LPTHREAD_START_ROUTINE )ModuleThread, pGem, 0, NULL );
		}
		break;
	case DLL_PROCESS_DETACH:
		{
			DisableThreadLibraryCalls( hModule );
		}
		break;
	}
	return TRUE;
}