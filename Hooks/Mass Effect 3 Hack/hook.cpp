#include "Framework.h"

cuseful					*pCuseful;
cMenu					Menu;

unsigned long PostRender_Name = NULL;

//void Draw( UCanvas* Canvas, APlayerController* Controller, FVector CameraLocation, FRotator CameraRotation, APawn* you )
//{
//	if ( Canvas == NULL || Controller == NULL || Controller->WorldInfo == NULL || Controller->WorldInfo->PawnList == NULL || you == NULL )
//		return;
//
//	CurrentBest = 999999.0f;
//	CurrentTarget = NULL;
//
//	for ( APawn* Pawn = Controller->WorldInfo->PawnList; Pawn; Pawn = Pawn->NextPawn)
//	{
//		if ( Controller == NULL || Pawn == NULL || Pawn->PlayerReplicationInfo == NULL || Pawn->bDeleteMe || Pawn == Controller->Pawn || Pawn->Health < 1 )
//			continue;
//
//		FVector Location = Pawn->Location;
//		bool IsPlayer = ( Pawn->PlayerReplicationInfo != NULL );
//		bool IsVisible = Framework::FastTrace( Controller, Pawn, CameraLocation, Location );
//		bool IsEnemy = IsPlayer ? ( Pawn->PlayerReplicationInfo->Team != Controller->PlayerReplicationInfo->Team ) : true;
//
//		FColor DrawColor = Framework::GetTeamColor( IsPlayer, IsVisible, IsEnemy );
//
//		if( Menu.CheckBox[2][2].State )
//		{
//			Framework::DrawRadar( Pawn, Canvas, DrawColor );
//		}
//
//		if( Menu.CheckBox[0][4].State )
//		{
//			Framework::Boxes( Canvas, Pawn, DrawColor );
//		}
//
//		FVector Screen = Framework::WorldToScreen( Canvas, Location );
//
//		if( Menu.CheckBox[0][1].State )
//		{
//			Framework::DrawString( Canvas, Screen.X, Screen.Y-50, DrawColor, true, Pawn->PlayerReplicationInfo->PlayerName.Data );
//			Screen.Y += 15;
//		}
//
//		if( Menu.CheckBox[0][2].State )
//		{
//			Framework::DrawStringEx( Canvas, Screen.X, Screen.Y-50, DrawColor, 0, L"H: %i", Pawn->Health );
//			Screen.Y += 15;
//		}
//
//		if( Menu.CheckBox[0][3].State )
//		{
//			float PawnDistance = Framework::calcdist(CameraLocation,Location) /100;
//			Framework::DrawStringEx( Canvas, Screen.X, Screen.Y-50, DrawColor, 0, L"D: %0.2f", PawnDistance );
//			Screen.Y += 15;
//		}
//
//		if( Menu.CheckBox[1][2].State )
//		{
//			Framework::AimBot(IsVisible, IsEnemy, Location, Pawn);
//		}
//	}
//}

void PostRender ( UCanvas* pCanvas )
{
	if ( pCanvas == NULL || GameEngine == NULL || LocalPlayer == NULL || LocalPlayer->Actor == NULL )
		return;

	Framework::DrawString(pCanvas, 10, 10, ColorGreen, 0, L"UE3 hook by Domo" );

	if( Menu.CheckBox[2][1].State )
	{
		Framework::DrawCossHair(pCanvas, ColorGreen);
	}

	Controller = reinterpret_cast<APlayerController*>( LocalPlayer->Actor );
	APawn* Pawn = reinterpret_cast<APawn*>(LocalPlayer->Actor->Pawn);

	if ( Controller == NULL || Controller->WorldInfo == NULL || Controller->PlayerReplicationInfo == NULL )
		return;

	//CameraLocation = Controller->CalcViewLocation;
	//CameraRotation = Controller->CalcViewRotation;

	Menu.Render (pCanvas);

	//Draw( pCanvas, Controller, CameraLocation, CameraRotation, Pawn );
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

bool FindGameTables( void )
{
    MODULEINFO miGame = pCuseful->GetModuleInfo ( NULL );
    
    GObjects = *(unsigned long*) ( pCuseful->FindPattern( (unsigned  long) miGame.lpBaseOfDll, miGame.SizeOfImage,    (unsigned  char*)"\x8b\x00\x00\x00\x00\x00\x8b\x04\x00\x8b\x40\x00\x25\x00\x02\x00\x00",  (char*) "x?????xx?xx?xxxxx" ) + 0x2 );

    return true;
}

unsigned long ModuleThread( void* )
{
	while ( !GetAsyncKeyState( VK_HOME ) )
        Sleep( 100 );

    if ( FindGameTables() )
    {
		while ( !(GameEngine = UObject::FindObject<UGameEngine>("SFXEngine Transient.SFXEngine")) )
			Sleep( 100 );

		while ( GameEngine->GameViewport == NULL )
            Sleep( 100 );

        LocalPlayer = GameEngine->GamePlayers.Data[0];
		//PostRender_Name = Framework::FindName( "PostRender" );

		toolkit::VMTHook* hook = new toolkit::VMTHook(GameEngine->GameViewport); 
		pProcessEvent = hook->GetMethod<tProcessEvent>(70); 
		hook->HookMethod(&hkProcessEvent, 70);
	}

	return 0;
}
 
int __stdcall DllMain( HMODULE hModule, unsigned long dwReason, void* lpReserved )
{
	if ( dwReason == DLL_PROCESS_ATTACH )
	{
		CreateThread( 0, 0, reinterpret_cast<LPTHREAD_START_ROUTINE>(ModuleThread), 0, 0, 0 );
	}

	return	TRUE;
}