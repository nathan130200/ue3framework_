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
	APBCharacter* Char = reinterpret_cast<APBCharacter*>(LocalPlayer->Actor->Pawn);

	if ( Controller == NULL || Controller->WorldInfo == NULL || Controller->PlayerReplicationInfo == NULL || Char == NULL )
		return;


	if(Char->pCurrentWeaponInfo && Char->pCurrentWeaponInfo->pCachedWeapon && Char->pCurrentWeaponInfo->pCachedWeapon->bReloadInPerfectPos )
	{
		APBPController->ReloadWeapon(0);
	}

	if(Char->pCurrentWeaponInfo && Char->pCurrentWeaponInfo->pCachedWeapon )
	{
		Char->pCurrentWeaponInfo->pCachedWeapon->bLaserDotVisible = 1;
		if( Char->pCurrentWeaponInfo->pCachedWeapon->pWeaponSettings )
		{
			Char->pCurrentWeaponInfo->pCachedWeapon->pWeaponSettings->bRecoilActive = 0;
			Char->pCurrentWeaponInfo->pCachedWeapon->pWeaponSettings->bSpreadActive = 0;

			if( Char->pCurrentWeaponInfo->WeaponParams )
			{
				CRender::DrawStringEx( pCanvas,  20, 20, ColorGreen, 0, L"SpanProjectileTime %f", Char->pCurrentWeaponInfo->WeaponParams->fSpawnProjectileTime );
				CRender::DrawStringEx( pCanvas,  20, 40, ColorGreen, 0, L"SpeedInfo %f", Char->pCurrentWeaponInfo->WeaponParams->SpeedInfo );

				//Char->pCurrentWeaponInfo->WeaponParams->bConsumeNoAmmo = TRUE;
				Char->pCurrentWeaponInfo->WeaponParams->bEnableSprintViewBobbing = FALSE;
				Char->pCurrentWeaponInfo->WeaponParams->bEnableSprintBobbing = FALSE;
				Char->pCurrentWeaponInfo->WeaponParams->bEnableRecoil = FALSE;
				//Char->pCurrentWeaponInfo->WeaponParams->bGivesKillerHeat = TRUE;
				Char->pCurrentWeaponInfo->WeaponParams->bEnableBobbing = FALSE;
				Char->pCurrentWeaponInfo->WeaponParams->bEnableTurnBobbing = FALSE;
				Char->pCurrentWeaponInfo->WeaponParams->bDisplayTotalBulletCount = TRUE;
				//Char->pCurrentWeaponInfo->WeaponParams->MagazineAmmoSize = 9999;
				//Char->pCurrentWeaponInfo->WeaponParams->StartingTotalAmmo = 9999;

				Char->pCurrentWeaponInfo->pWeaponSettings->bRecoilActive = FALSE;
				Char->pCurrentWeaponInfo->pWeaponSettings->bSpreadActive = FALSE;
				Char->pCurrentWeaponInfo->pWeaponSettings->bDebugLaserPointer = TRUE;
				Char->pCurrentWeaponInfo->pWeaponSettings->bInfiniteStamina = TRUE;
				//Char->pCurrentWeaponInfo->pWeaponSettings->bShowHitSpheres = TRUE;


				//Char->pCurrentWeaponInfo->WeaponParams->fRecoilMaxPitch = 0.0f;                                  		// 0x034C (0x0004) [0x0000000000000001]              ( CPF_Edit )
				//Char->pCurrentWeaponInfo->WeaponParams->fRecoilMaxYaw = 0.0f;                                   		// 0x0350 (0x0004) [0x0000000000000001]              ( CPF_Edit )
				//Char->pCurrentWeaponInfo->WeaponParams->fRecoilMaxRoll = 0.0f;                                   		// 0x0354 (0x0004) [0x0000000000000001]              ( CPF_Edit )
				//Char->pCurrentWeaponInfo->WeaponParams->fMinRollStep = 0.0f;                                     		// 0x0358 (0x0004) [0x0000000000000001]              ( CPF_Edit )
				//Char->pCurrentWeaponInfo->WeaponParams->fMaxRollStep = 0.0f;                                     		// 0x035C (0x0004) [0x0000000000000001]              ( CPF_Edit )
				//Char->pCurrentWeaponInfo->WeaponParams->fRecoilFiringDecay = 0.0f;                               		// 0x0360 (0x0004) [0x0000000000000001]              ( CPF_Edit )
				//Char->pCurrentWeaponInfo->WeaponParams->fRecoilDecay = 0.0f;                                    		// 0x0364 (0x0004) [0x0000000000000001]              ( CPF_Edit )
				//Char->pCurrentWeaponInfo->WeaponParams->fRecoilElasticDecay = 0.0f;                             		// 0x0368 (0x0004) [0x0000000000000001]              ( CPF_Edit )
				//Char->pCurrentWeaponInfo->WeaponParams->fRecoilElasticFiringDecay = 0.0f;                        		// 0x036C (0x0004) [0x0000000000000001]              ( CPF_Edit )
				//Char->pCurrentWeaponInfo->WeaponParams->fRecoilSpeed = 0.0f;                                    		// 0x037C (0x0004) [0x0000000000000001]              ( CPF_Edit )
				//Char->pCurrentWeaponInfo->WeaponParams->fRecoilElasticTransferSpeed = 0.0f;                      		// 0x0380 (0x0004) [0x0000000000000001]              ( CPF_Edit )
				//Char->pCurrentWeaponInfo->WeaponParams->fRecoilNodesStrength = 0.0f;                            		// 0x0384 (0x0004) [0x0000000000000001]              ( CPF_Edit )
				//Char->pCurrentWeaponInfo->WeaponParams->fRecoilStrengthModifierAim = 0.0f;                      		// 0x0388 (0x0004) [0x0000000000000001]              ( CPF_Edit )
				//Char->pCurrentWeaponInfo->WeaponParams->fRecoilSpeedModifierAim = 0.0f;                          		// 0x038C (0x0004) [0x0000000000000001]              ( CPF_Edit )
				//Char->pCurrentWeaponInfo->WeaponParams->fRecoilDecayModifierAim = 0.0f;

				//Char->pCurrentWeaponInfo->WeaponParams->fWeaponPosCrouchMoveModifier = 0.0f;                     		// 0x03B0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
				//Char->pCurrentWeaponInfo->WeaponParams->fBaseBobSpeed = 0.0f;                                    		// 0x03B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
				//Char->pCurrentWeaponInfo->WeaponParams->fBobVertAmount = 0.0f;                                   		// 0x03B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
				//Char->pCurrentWeaponInfo->WeaponParams->fBobHorizAmount = 0.0f;                                  		// 0x03BC (0x0004) [0x0000000000000001]              ( CPF_Edit )
				//Char->pCurrentWeaponInfo->WeaponParams->fBobLeftAmount = 0.0f;                                   		// 0x03C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
				//Char->pCurrentWeaponInfo->WeaponParams->fBobRightAmount = 0.0f;                                  		// 0x03C4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
				//Char->pCurrentWeaponInfo->WeaponParams->fBobAmountAimModifier = 0.0f;                            		// 0x03C8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
				//Char->pCurrentWeaponInfo->WeaponParams->fBobSpeedAddPerVelocity = 0.0f;                          		// 0x03CC (0x0004) [0x0000000000000001]              ( CPF_Edit )
				//Char->pCurrentWeaponInfo->WeaponParams->fBobOnAirSpeedModifier = 0.0f;                           		// 0x03D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
				//Char->pCurrentWeaponInfo->WeaponParams->fBobViewVertModifier = 0.0f;                            		// 0x03D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
				//Char->pCurrentWeaponInfo->WeaponParams->fBobViewHorizModifier = 0.0f;                            		// 0x03D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
				//Char->pCurrentWeaponInfo->WeaponParams->fBobViewSpeedModifier = 0.0f;                            		// 0x03DC (0x0004) [0x0000000000000001]              ( CPF_Edit )
				//Char->pCurrentWeaponInfo->WeaponParams->fTurnBobDamping = 0.0f;                                  		// 0x03E0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
				//Char->pCurrentWeaponInfo->WeaponParams->fTurnBobFadeSpeed = 0.0f;                               		// 0x03E4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
				//Char->pCurrentWeaponInfo->WeaponParams->fMinBobFadeSpeed = 0.0f;                                 		// 0x03E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
				//Char->pCurrentWeaponInfo->WeaponParams->vTurningBobCenter = FVector(0, 0, 0);                                		//

				//Char->pCurrentWeaponInfo->WeaponParams->fMaxSpreadRadius = 0.0f;                                  		// 0x02FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
				//Char->pCurrentWeaponInfo->WeaponParams->fSpreadPerBullet = 0.0f;                                  		// 0x0300 (0x0004) [0x0000000000000001]              ( CPF_Edit )
				//Char->pCurrentWeaponInfo->WeaponParams->fSpreadDecaySpeed = 0.0f;                                 		// 0x0304 (0x0004) [0x0000000000000001]              ( CPF_Edit )
				//Char->pCurrentWeaponInfo->WeaponParams->fSpreadMinChangeTime = 0.0f;                              		// 0x0308 (0x0004) [0x0000000000000001]              ( CPF_Edit )
				//Char->pCurrentWeaponInfo->WeaponParams->fSpreadMinChangeTimeAimModifier = 0.0f;                   		// 0x030C (0x0004) [0x0000000000000001]              ( CPF_Edit )
				//Char->pCurrentWeaponInfo->WeaponParams->fSpreadCenterZone = 0.0f;                                 		// 0x0310 (0x0004) [0x0000000000000001]              ( CPF_Edit )
				//Char->pCurrentWeaponInfo->WeaponParams->fSpreadHitsOnCenterZone = 0.0f;                           		// 0x0314 (0x0004) [0x0000000000000001]              ( CPF_Edit )
				//Char->pCurrentWeaponInfo->WeaponParams->fSpreadNumberOfZones = 0.0f;                              		// 0x0318 (0x0004) [0x0000000000000001]              ( CPF_Edit )
				//Char->pCurrentWeaponInfo->WeaponParams->fSpreadStandMin = 0.0f;                                   		// 0x031C (0x0004) [0x0000000000000001]              ( CPF_Edit )
				//Char->pCurrentWeaponInfo->WeaponParams->fSpreadCrouchMin = 0.0f;                                  		// 0x0320 (0x0004) [0x0000000000000001]              ( CPF_Edit )
				//Char->pCurrentWeaponInfo->WeaponParams->fSpreadAimMin = 0.0f;                                     		// 0x0324 (0x0004) [0x0000000000000001]              ( CPF_Edit )
				//Char->pCurrentWeaponInfo->WeaponParams->fSpreadCrouchMaxModifier = 0.0f;                          		// 0x0328 (0x0004) [0x0000000000000001]              ( CPF_Edit )
				//Char->pCurrentWeaponInfo->WeaponParams->fSpreadMaxJumpModifier = 0.0f;                            		// 0x032C (0x0004) [0x0000000000000001]              ( CPF_Edit )
				//Char->pCurrentWeaponInfo->WeaponParams->fSpreadAimMoveModifier = 0.0f;                            		// 0x0330 (0x0004) [0x0000000000000001]              ( CPF_Edit )
				//Char->pCurrentWeaponInfo->WeaponParams->fSpreadSlowMoveModifier = 0.0f;                          		// 0x0334 (0x0004) [0x0000000000000001]              ( CPF_Edit )
				//Char->pCurrentWeaponInfo->WeaponParams->fSpreadFastMoveModifier = 0.0f;                           		// 0x0338 (0x0004) [0x0000000000000001]              ( CPF_Edit )
				//Char->pCurrentWeaponInfo->WeaponParams->fSpreadJumpModifier = 0.0f;   

				//Char->pCurrentWeaponInfo->pCachedWeapon->fCurrentSpreadRadius = 0.0f;                             		// 0x0358 (0x0004) [0x0000000000000000]              
				//Char->pCurrentWeaponInfo->pCachedWeapon->fCurMinimumSpreadRadius = 0.0f;                          		// 0x035C (0x0004) [0x0000000000000000]              
				//Char->pCurrentWeaponInfo->pCachedWeapon->fTargetMinimumSpreadRadius = 0.0f;                       		// 0x0360 (0x0004) [0x0000000000000000]              
				//Char->pCurrentWeaponInfo->pCachedWeapon->fLastSpreadFireTime = 0.0f;                              		// 0x038C (0x0004) [0x0000000000000001]              ( CPF_Edit )
				//Char->pCurrentWeaponInfo->pCachedWeapon->fBobTime = 0.0f;                                         		// 0x0390 (0x0004) [0x0000000000000001]              ( CPF_Edit )
				//Char->pCurrentWeaponInfo->pCachedWeapon->fLastRecoilBulletCount = 0.0f;                           		// 0x03D0 (0x0004) [0x0000000000000000]              
				//Char->pCurrentWeaponInfo->pCachedWeapon->vLastRecoil = FVector(0,0,0);                                      		// 0x03D4 (0x000C) [0x0000000000000000]              
				//Char->pCurrentWeaponInfo->pCachedWeapon->fRequiredBullets = 0.0f;                                 		// 0x03E0 (0x0004) [0x0000000000000000]              
				//Char->pCurrentWeaponInfo->pCachedWeapon->vCurrentRecoil = FVector(0,0,0);                                   		// 0x03E4 (0x000C) [0x0000000000000000]              
				//Char->pCurrentWeaponInfo->pCachedWeapon->vRemainingRecoil = FVector(0,0,0);  
			}
		}
	}

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

//void SetAimbotPlayerWhitelist()
//{
//	string str = GetAimbotPlayerWhitelist();
//	vector<string> strs = explode( "|", str);
//
//	for (int i = 0; i < strs.size(); i++)
//	{
//		wstring ws = L"";
//		const char *cstr = strs[i].c_str();
//
//		for (int j = 0; j < strlen(cstr); i++)
//		{
//			ws += (WCHAR)(cstr[j]);
//		}
//
//		AimbotPlayerWhitelist.push_back((WCHAR*)ws.c_str());
//	}
//}

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