#define test
#define _ENDSCENE_
#define _D3DX_RENDERING_
#define _D3DX_FONT_

#include "Framework\Framework.h"
#include "CVMTHook.h"

char FunctionName[ 256 ]; 
CVMTHookManager EventHook;

typedef VOID( WINAPI *tEndScene )( LPDIRECT3DDEVICE9 pDevice);
tEndScene oEndScene;

void *pSub_4FE900 = NULL;

typedef HRESULT ( WINAPI * tReset )( LPDIRECT3DDEVICE9 pDevice, D3DPRESENT_PARAMETERS * pPresent );
tReset oReset;

#define GObjects_Pattern		"\x8b\x00\x00\x00\x00\x00\x8b\x04\x00\x8b\x40\x00\x25\x00\x02\x00\x00"
#define GObjects_Mask			"x?????xx?xx?xxxxx"
#define GObjects_Offset			0x2

#define GNames_Pattern			"\x8b\x0d\x00\x00\x00\x00\x83\x3c\x81\x00\x74"
#define GNames_Mask				"xx????xxxxx"
#define GNames_Offset			0x2

#define ES	0
#define RST 1
#define DIP	2

#define HOOK(func,addy)	o##func = (t##func)DetourFunction((PBYTE)addy,(PBYTE)hk##func)

LPD3DXFONT pFont;
D3DXVECTOR3 vMyHeadPos;
D3DXVECTOR3 vMyOrigin[4];
D3DXVECTOR3 vMyAngles[4];
AFoxGRI* GRI = NULL;

void DrawString(IDirect3DDevice9* pDevice, int x, int y, DWORD color, DWORD dwFormat, const char *fmt, ...)
{
	RECT FontPos;
	FontPos.left	= x - 1;  
	FontPos.right	= x + 1;  
	FontPos.top		= y - 1;  
	FontPos.bottom	= y + 1;

	char buf[1024] = {'\0'};
	va_list va_alist;
	dwFormat	|= DT_NOCLIP;
	va_start(va_alist, fmt);
	vsprintf_s(buf, fmt, va_alist);
	va_end(va_alist);

	if(pFont == NULL)
		D3DXCreateFont(pDevice, 15, 0, 400, 0, FALSE, DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, DEFAULT_QUALITY, DEFAULT_PITCH | FF_DONTCARE, TEXT("Ariel"), &pFont);
	else
		pFont->DrawTextA(NULL, buf, -1, &FontPos, dwFormat, color);
}

//Class Engine.World 0x3C - 0x2DC
class UWorld : public UObject
{
public:
	BYTE Unknown0[8]; //0x3C - 0x44
	TArray<ULevel*> Levels; //0x44 - 0x50
	BYTE Unknown1[652]; //0x50 - 0x2DC

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 338 ];

		return pClassPointer;
	};
};

DWORD eaxval = 0;
DWORD ecxval = 0;

_declspec ( naked ) VOID hkSub_4FE900()
{
	_asm 
	{
		mov     eax, [ecx+4]
		mov     edx, [ecx]
		mov     eaxval, eax
		mov     ecxval, ecx
	}
	_asm pushad;

	Utils::add_log( "c:\\lol.txt", "eax %08X edx %08X\n", eaxval, ecxval);

	_asm popad;
	_asm 
	{
		call pSub_4FE900
	}
}

UClass* UWorld::pClassPointer = NULL;
UWorld* World = NULL;
void Draw( LPDIRECT3DDEVICE9 pDevice, AFoxPC* Controller )
{
	if ( !Controller )
		return;

	DrawString(pDevice, 10, 60, 0xFFFF0000, 0, "Levels: %i", World->Levels.Count);
	Utils::add_log( "c:\\lol58.txt", "World->Levels.Count %i", World->Levels.Count);

	if(World->Levels.Count > 0)
	{
		for ( int i = 0; i < World->Levels.Count; i++ )
		{
			if( World->Levels.Data[i] && World->Levels.Data[i]->Actors.Count > 0)
			{
				DrawString(pDevice, 10, 60, 0xFFFF0000, 0, "Actors.Count: %i", World->Levels.Data[i]->Actors.Count);
				Utils::add_log( "c:\\lol58.txt", "Actors.Count: %i", World->Levels.Data[i]->Actors.Count);
			}
		}
			//for ( int i = 0; i < World->Levels.Data[1]->Actors.Count; i++ )
			//{
			//	Utils::add_log( "c:\\lol58.txt", "(%0x%X)", World->Levels.Data[1]->Actors.Data[i]);
			//	AFoxPC* FoxPC = reinterpret_cast<AFoxPC*>( World->Levels.Data[1]->Actors.Data[i] );

			//	if(FoxPC)
			//		Utils::add_log( "c:\\names.txt", "%s", FoxPC->PlayerReplicationInfo->PlayerName.Data);
			//}
	}
}

template< class T > T* FindObject(char* name)
{
	while ( ! UObject::GObjObjects() ) 
		Sleep ( 100 );

	for ( DWORD i = 0x0; i <  UObject::GObjObjects()->Count; i++ )
	{
		UObject* Object = UObject::GObjObjects()->Data[ i ]; 

		if ( ! Object || !Object->IsA(T::StaticClass())) 
			continue; 

		if(! _stricmp(Object->GetFullName(), name))
		{
			return (T*)(Object);
		}
	}
}


template< class T > T* FindObject2(char* name)
{
	while ( ! UObject::GObjObjects() ) 
		Sleep ( 100 );

	for ( DWORD i = 0x0; i <  UObject::GObjObjects()->Count; i++ )
	{
		UObject* Object = UObject::GObjObjects()->Data[ i ]; 

		if ( !Object ) 
			continue; 

		if(! _stricmp(Object->GetFullName(), name))
		{
			return (T*)(Object);
		}
	}
}


bool Do_Once = false;
void RenderBackend( LPDIRECT3DDEVICE9 pDevice )
{
	if( !Do_Once )
	{
		while ( !(GameEngine = FindObject<UGameEngine>("GameEngine Transient.GameEngine")))
		{
			Sleep( 100 );
		}

		//while ( !(World = FindObject2<UWorld>("Class Engine.World")))
		//{
		//	Sleep( 100 );
		//}

		//World = (UWorld*)0x13EFD90;
		//World = (UWorld*)0x1332A70;
		//World = (UWorld*)*(DWORD*)0x1C4BBDC;
		World = (UWorld*)(0x01C4BBDC + 4);

		LocalPlayer = GameEngine->GamePlayers.Data[0];

		Do_Once = true;
	}

	if( Do_Once )
	{
		DrawString(pDevice, 10, 10, 0xFFFF0000, 0, "Test Hook");

		Controller = reinterpret_cast<APlayerController*>( LocalPlayer->Actor );
		AFoxPC* FoxPC = reinterpret_cast<AFoxPC*>( LocalPlayer->Actor );

		if ( Controller == NULL || World == NULL )
			return;

		DrawString(pDevice, 10, 20, 0xFFFF0000, 0, "Controller 0x%X", Controller);
		DrawString(pDevice, 10, 30, 0xFFFF0000, 0, "AFoxPC 0x%X", FoxPC);


		//FoxPC->eventGetPlayerViewPoint( &CameraLocation, &CameraRotation );

		//DrawString(pDevice, 10, 40, 0xFFFF0000, 0, "Camera %0.0f %0.0f %0.0f", CameraLocation.X, CameraLocation.Y, CameraLocation.Z);

		//DrawString(pDevice, 10, 50, 0xFFFF0000, 0, "AFoxGRI 0x%X", GRI);

		//if ( !GRI->GetValidPlayerPRIs().Data )
		//	return;

		//DrawString(pDevice, 10, 60, 0xFFFF0000, 0, "GetValidPlayerPRIs %i", GRI->GetValidPlayerPRIs().Count);

		Draw( pDevice, FoxPC );
	}
}

_declspec ( naked ) VOID WINAPI hkEndScene(LPDIRECT3DDEVICE9 pDevice)
{
	_asm pushad;
	
	RenderBackend(pDevice);

	_asm popad;
	_asm jmp [oEndScene];
}

HRESULT hkReset( LPDIRECT3DDEVICE9 pDevice, D3DPRESENT_PARAMETERS * pPresentParams )
{
	_asm pushad;

	if (pFont)
		pFont->OnLostDevice();

	HRESULT hRet = oReset(pDevice, pPresentParams);
	if (hRet == D3D_OK)
	{
		if (pFont)
			pFont->OnResetDevice();
	}

	_asm popad;
	return hRet;
}

//---------------------------------------------------------------------------------------------------------------------------------
// DIRECTX HOOKING
//---------------------------------------------------------------------------------------------------------------------------------

LRESULT CALLBACK MsgProc(HWND hwnd,UINT uMsg,WPARAM wParam,LPARAM lParam){return DefWindowProc(hwnd, uMsg, wParam, lParam);} 
void DirectXInit(DWORD* table)
{
	WNDCLASSEX wc = {sizeof(WNDCLASSEX),CS_CLASSDC,MsgProc,0L,0L,GetModuleHandle(NULL),NULL,NULL,NULL,NULL,L"DX",NULL};
	RegisterClassEx(&wc);
	HWND hWnd = CreateWindow(L"DX",NULL,WS_OVERLAPPEDWINDOW,100,100,300,300,GetDesktopWindow(),NULL,wc.hInstance,NULL);
	LPDIRECT3D9 pD3D = Direct3DCreate9( D3D_SDK_VERSION );
	D3DPRESENT_PARAMETERS d3dpp; 
	ZeroMemory( &d3dpp, sizeof(d3dpp) );
	d3dpp.Windowed = TRUE;
	d3dpp.SwapEffect = D3DSWAPEFFECT_DISCARD;
	d3dpp.BackBufferFormat = D3DFMT_UNKNOWN;
	LPDIRECT3DDEVICE9 pd3dDevice;
	pD3D->CreateDevice(D3DADAPTER_DEFAULT,D3DDEVTYPE_HAL,hWnd,D3DCREATE_SOFTWARE_VERTEXPROCESSING,&d3dpp,&pd3dDevice);
	DWORD* pVTable = (DWORD*)pd3dDevice;
	pVTable = (DWORD*)pVTable[0];

	table[ES]	= pVTable[42]; // [END SCENE]
	table[RST]	= pVTable[16]; // [RESET]

	DestroyWindow(hWnd);
}

bool FindGameTables( void )
{
    MODULEINFO miGame = Utils::GetModuleInfo ( NULL );
    
    GObjects = *(unsigned long*) ( Utils::FindPattern( (unsigned long) miGame.lpBaseOfDll, miGame.SizeOfImage, (unsigned char*) GObjects_Pattern, (char*) GObjects_Mask ) + GObjects_Offset );

    GNames = *(unsigned long*) ( Utils::FindPattern( (unsigned long) miGame.lpBaseOfDll, miGame.SizeOfImage, (unsigned char*) GNames_Pattern, (char*) GNames_Mask ) + GNames_Offset );

    return true;
}

unsigned long ModuleThread( void* )
{
	while ( !GetAsyncKeyState( VK_HOME ) )
        Sleep( 100 );

    if ( FindGameTables() )
    {
		DWORD VTable[3] = {0};

		while(GetModuleHandle(L"d3d9.dll")==NULL)
		{
			Sleep(250);
		}

		DirectXInit(VTable);

		//pSub_4FE900 = (VOID*)Utils::DetourFunctionX((PBYTE)0x4FE900,(PBYTE)hkSub_4FE900,5);

		HOOK(EndScene,VTable[ES] + 0x13);
		HOOK(Reset,VTable[RST]);
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