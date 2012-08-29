#define BRSDK
#define UE3_5
#include "..\Framework\Framework.h"

char FunctionName[ 256 ]; 

typedef void (__stdcall *tProcessEvent ) ( UFunction*, void*, void* );
tProcessEvent pProcessEvent;

#define GObjects_Pattern		"\xa1\x00\x00\x00\x00\x8b\x00\x00\x8b\x00\x00\x25\x00\x02\x00\x00"
#define GObjects_Mask			"x????x??x??xxxxx"
#define GObjects_Offset			0x1

#define GNames_Pattern			"\x8b\x0d\x00\x00\x00\x00\x83\x3c\x81\x00\x74"
#define GNames_Mask				"xx????xxxxx"
#define GNames_Offset			0x2

APBPlayerController* APBPController = NULL;
unsigned long PostRender_Name = NULL;

bool menu = FALSE;

void PostRender ( UCanvas* pCanvas )
{
	if ( pCanvas == NULL || GameEngine == NULL || LocalPlayer == NULL || LocalPlayer->Actor == NULL )
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
	APBPController = reinterpret_cast<APBPlayerController*>( LocalPlayer->Actor );
	APawn* Pawn = reinterpret_cast<APawn*>(LocalPlayer->Actor->Pawn);
	APBPawn* APawn = reinterpret_cast<APBPawn*>(LocalPlayer->Actor->Pawn);

	if ( Controller == NULL || Controller->WorldInfo == NULL || Controller->PlayerReplicationInfo == NULL )
		return;

	CameraLocation = APBPController->CalcViewLocation;
	CameraRotation = APBPController->CalcViewRotation;

	Draw( pCanvas, APBPController, CameraLocation, CameraRotation, Pawn );
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
	
    if ( pUFunc )
    {
		if ( pUFunc->Name.Index == PostRender_Name )
            PostRender(((UGameViewportClient_eventPostRender_Parms*)pParms)->Canvas );
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

bool FindGameTables( void )
{
    MODULEINFO miGame = Utils::GetModuleInfo ( NULL );
    
    GObjects = *(unsigned long*) ( Utils::FindPattern( (unsigned long) miGame.lpBaseOfDll, miGame.SizeOfImage, (unsigned char*) GObjects_Pattern, (char*) GObjects_Mask ) + GObjects_Offset );

    GNames = *(unsigned long*) ( Utils::FindPattern( (unsigned long) miGame.lpBaseOfDll, miGame.SizeOfImage, (unsigned char*) GNames_Pattern, (char*) GNames_Mask ) + GNames_Offset );

    return true;
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

    if ( FindGameTables() )
    {
		while ( !(GameEngine = UObject::FindObject<UGameEngine>("GameEngine Transient.GameEngine")))
		{
			Sleep( 100 );
		}

		while ( GameEngine->GameViewport == NULL )
            Sleep( 100 );

        LocalPlayer = GameEngine->GamePlayers.Data[0];

		PostRender_Name = Framework::FindName( "PostRender" );

		CMenuManager::MenuInit();

		toolkit::VMTHook* hook = new toolkit::VMTHook(GameEngine->GameViewport); 
		pProcessEvent = hook->GetMethod<tProcessEvent>(68); 
		hook->HookMethod(&hkProcessEvent, 68);
	}

	return 0;
}

DWORD deinitThread(LPVOID lpArguments)
{
	return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{

	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		{
			Entry::g_hMainModule = GetModuleHandle(NULL);
			CreateThread( 0, 0, reinterpret_cast<LPTHREAD_START_ROUTINE>(ModuleThread), 0, 0, 0 );
		}
		break;
	case DLL_PROCESS_DETACH:
		{
			CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)deinitThread, (LPVOID)NULL, 0, NULL);
		}
		break;
	}
	return TRUE;
}