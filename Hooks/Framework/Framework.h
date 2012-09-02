#pragma once
#define NODRAWTEXT

#pragma warning(disable:4996)
#pragma warning(disable:4244)

#include <windows.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

#include "ragekings.h"

#ifdef BRSDK
#include "..\sdks\BRSDK\SdkHeaders.h"
#endif

#ifdef GASDK
#include "..\sdks\GASDK\SdkHeaders.h"
#endif

#ifdef ME3SDK
#include "..\sdks\ME3SDK\SdkHeaders.h"
#endif

#ifdef TASDK
#include "..\sdks\TASDK\SdkHeaders.h"
#endif

#ifdef ODBSDK
#include "..\sdks\ODBSDK\SdkHeaders.h"
#endif

#ifdef CCSDK
#include "..\sdks\CCSDK\SdkHeaders.h"
#endif

#ifdef APBSDK
#include "..\sdks\APBSDK\SdkHeaders.h"
#endif

#ifdef STSDK
#include "..\sdks\STSDK\SdkHeaders.h"
#endif

#ifdef SOTLSDK
#include "..\sdks\SOTLSDK\SdkHeaders.h"
#endif

#ifdef RDSDK
#include "..\sdks\RDSDK\SdkHeaders.h"
#endif

float CurrentBest = 999999.0f;
APawn *CurrentTarget = NULL;
FVector CurrentLocation;
APawn *CurrentTargetedPawn = NULL;

FVector		CameraLocation;
FRotator	CameraRotation;

UGameEngine				*GameEngine				= NULL;
ULocalPlayer			*LocalPlayer			= NULL;
APlayerController		*Controller				= NULL;

UObject					*pCallObject			= NULL;
UFunction				*pUFunc					= NULL;
void					*pParms					= NULL;
void					*pResult				= NULL;

const FVector VectorZero;
const FRotator RotatorZero;

int VisiblePlayerCount = 0;
BOOL AutoFireKeyIsPressed = FALSE;

#include "Utils\vmthooks.h"
#include "Utils\Utils.h"
#include "Utils\Entry.h"

#include "Renders\CRender.h"

#include "UE3\Color.h"

#ifndef test
#include "UE3\UE3Math.h"
#include "UE3\2DRadar.h"
#include "UE3\WorldToScreen.h"
#include "UE3\IsVisible.h"
#include "UE3\ESP.h"
#include "UE3\AimBot.h"
#include "UE3\Misc.h"
#endif

#include "Menu\MenuManager.h"

#ifdef BRSDK
#include "Hack\BRDraw.h"
#endif

#ifdef GASDK
#include "Hack\GADraw.h"
#endif

#ifdef ME3SDK
#include "Hack\ME3Draw.h"
#endif

#ifdef TASDK
#include "Hack\TADraw.h"
#endif

#ifdef ODBSDK
#include "Hack\ODBDraw.h"
#endif

#ifdef CCSDK
#include "Hack\ODBDraw.h"
#endif

#ifdef APBSDK
#include "Hack\APBDraw.h"
#endif

#ifdef STSDK
//#include "Hack\STDraw.h"
#endif

#ifdef RDSDK
#include "Hack\RDDraw.h"
#endif

class Framework
{
public:
	static unsigned long Framework::FindName( char* Name )
	{
		while ( ! FName::Names() ) 
			Sleep( 100 ); 

		static char cOutBuffer[ 256 ]; 

		for( unsigned int i = 0; i < FName::Names()->Count; i++ )
		{
			FNameEntry* Entry = FName::Names()->Data [i];
			if ( Entry )
			{
				sprintf_s( cOutBuffer, sizeof( cOutBuffer ), "%s", Entry->Name );

				if ( !strcmp( cOutBuffer, Name ) )
					return i;
			}
		}

		return NULL;
	}
};

