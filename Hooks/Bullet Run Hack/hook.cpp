#include "Framework\Framework.h"

char FunctionName[ 256 ]; 

typedef void (__stdcall *tProcessEvent ) ( UFunction*, void*, void* );
tProcessEvent pProcessEvent;

#define GObjects_Pattern		"\xa1\x00\x00\x00\x00\x8b\x00\x00\x8b\x00\x00\x25\x00\x02\x00\x00"
#define GObjects_Mask			"x????x??x??xxxxx"
#define GObjects_Offset			0x1

#define GNames_Pattern			"\x8b\x0d\x00\x00\x00\x00\x83\x3c\x81\x00\x74"
#define GNames_Mask				"xx????xxxxx"
#define GNames_Offset			0x2

unsigned long PostRender_Name = NULL;

bool	menu = FALSE;
bool	GetinGameName = FALSE;
wstring	currentName;

void PostRender ( UCanvas* pCanvas )
{
	if ( pCanvas == NULL || GameEngine == NULL || LocalPlayer == NULL || LocalPlayer->Actor == NULL )
		return;

	DrawUtils* Drawer = reinterpret_cast<DrawUtils*>( pCanvas );

	if(GetAsyncKeyState( VK_HOME )&1)
	{
		menu = !menu;
	}

	if(menu)
	{
		CMenuManager::DrawMenu(Drawer);
	}

	Controller = reinterpret_cast<APlayerController*>( LocalPlayer->Actor );
	APBPController = reinterpret_cast<APBPlayerController*>( LocalPlayer->Actor );
	APawn* Pawn = reinterpret_cast<APawn*>(LocalPlayer->Actor->Pawn);
	APBPawn* APawn = reinterpret_cast<APBPawn*>(LocalPlayer->Actor->Pawn);
	APBCharacter* Char = reinterpret_cast<APBCharacter*>(LocalPlayer->Actor->Pawn);

	ControllerUtils* AController = reinterpret_cast<ControllerUtils*>( LocalPlayer->Actor );

	if ( Controller == NULL || Controller->WorldInfo == NULL || Controller->PlayerReplicationInfo == NULL || Char == NULL )
		return;

	//wstring strs(Controller->PlayerReplicationInfo->PlayerName.Data);
	//if(currentName != strs)
	//{
	//	currentName = strs;
	//	string ws;
	//	ws.assign(strs.begin(), strs.end());

	//	GetLoginGameName(ws);
	//	GetinGameName = true;
	//}
	
	if(Char->pCurrentWeaponInfo && Char->pCurrentWeaponInfo->pCachedWeapon && Char->pCurrentWeaponInfo->pCachedWeapon->bReloadInPerfectPos )
	{
		AController->ReloadWeapon(0);
	}

	if(Char->pCurrentWeaponInfo && Char->pCurrentWeaponInfo->pCachedWeapon )
	{
		if( Char->pCurrentWeaponInfo->pCachedWeapon->pWeaponSettings )
		{			
			if( Char->pCurrentWeaponInfo->WeaponParams )
			{
				Char->pCurrentWeaponInfo->WeaponParams->bEnableBobbing = FALSE;
				Char->pCurrentWeaponInfo->WeaponParams->bEnableTurnBobbing = FALSE;
				Char->pCurrentWeaponInfo->WeaponParams->bEnableSprintViewBobbing = FALSE;
				Char->pCurrentWeaponInfo->WeaponParams->bEnableSprintBobbing = FALSE;
			}
		}
	}

	CameraLocation = APBPController->CalcViewLocation;
	CameraRotation = APBPController->CalcViewRotation;

	Draw( pCanvas, APBPController, CameraLocation, CameraRotation, Pawn );
}

// Function Engine.GameViewportClient.PostRender
// [0x00020802] ( FUNC_Event )
struct UGameViewportClient_eventPostRender_Parms
{
	class UCanvas*                                     Canvas; // 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

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
	CMenuManager::AddCheckBox(20,	120,	0,	L"Box ESP");

	//===========================
	CMenuManager::AddTab(70,	0,	L"Aimbot");
	//===========================
	CMenuManager::AddCheckBox(20,	60,		1,	L"AimBot");
	CMenuManager::AddCheckBox(20,	80,		1,	L"Auto Fire Bot");

	CMenuManager::AddCheckBox(200, 60, 80, 30, 1, L"Select Key");

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

void SetAimbotPlayerWhitelist()
{
	string str = GetAimbotPlayerWhitelist();
	vector<string> strs = explode( "|", str);

	for (int i = 1; i < strs.size(); i++)
	{
		wstring ws;
		ws.assign(strs[i].begin(), strs[i].end());
		//wprintf(L"unicode - %s\n",ws.c_str());
		AimbotPlayerWhitelist.push_back(ws);
	}
}

void SecurityCheck()
{
	char* Drive = GetDriveSerialNumber();
	string b64Drive = base64_encode((unsigned char const*)Drive, sizeof(Drive));
	string str = GetSecurityCheck(b64Drive);
	vector<string> strs = explode( "|", str);

	if(strs[1] == "OK")
	{
		AutorizedUser = TRUE;
	}else{
		AutorizedUser = FALSE;
		exit(1);
		AutorizedUser = FALSE;
	}
}

template< class T > T* UObject::FindObject ( char* ObjectFullName ) 
{ 
	while ( ! UObject::GObjObjects() ) 
		Sleep ( 100 ); 

	printf("UObject::GObjObjects()->Count: %s\n", UObject::GObjObjects()->Count);

	for ( int i = 0; i < UObject::GObjObjects()->Count; ++i ) 
	{ 
		UObject* Object = UObject::GObjObjects()->Data[ i ]; 

		if(! Object ||	! Object->IsA ( T::StaticClass() )) 
			continue; 

		printf("GetFullName: %s\n", Object->GetFullName());

		if ( ! _stricmp ( Object->GetFullName(), ObjectFullName ) ) 
			return (T*) Object; 
	} 

	return NULL; 
} 

unsigned long ModuleThread( void* )
{
	while ( !GetAsyncKeyState( VK_HOME ) )
        Sleep( 100 );

	//Utils::AllocateConsole("i'm going to fuck you in the ass");

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

		MenuInit();

		//SetAimbotPlayerWhitelist();

		//SecurityCheck();

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