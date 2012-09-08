#pragma once
#define NODRAWTEXT

#pragma warning(disable:4996)
#pragma warning(disable:4244)

#include <winsock2.h>
#pragma comment(lib, "ws2_32")

#include <windows.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <ctype.h>
#include <time.h>
#include <sys/stat.h>
#include <iostream>
#include <list>
#include <map>
#include <vector>
#include <wincred.h>
#include <Shlwapi.h>
#include <shlobj.h>
#include <dbghelp.h>
#include <random>
#include <algorithm>
#include <functional>

#include "ragekings.h"

#include "..\sdks\BRSDK\SdkHeaders.h"

typedef struct _PawnInfo
{
	APawn *Pawn;
	APlayerReplicationInfo *Rpi;

	BOOL IsVisible;
	BOOL IsEnemy;

	FVector Location;
	float Distance;
	FVector WorldPos;
	FVector ScreenPos;
} PawnInfo;

PawnInfo    CurrentPawns[500];
FVector		CameraLocation;
FRotator	CameraRotation;

int TotalPlayers = 0;
APBCharacter			*Char					= NULL;
APBPlayerController		*APBPController			= NULL;
UGameEngine				*GameEngine				= NULL;
ULocalPlayer			*LocalPlayer			= NULL;
APlayerController		*Controller				= NULL;

UObject					*pCallObject			= NULL;
UFunction				*pUFunc					= NULL;
void					*pParms					= NULL;
void					*pResult				= NULL;

const FVector VectorZero;
const FRotator RotatorZero;

BOOL AutorizedUser = FALSE;

#include "Utils\diskinfo.h"
#include "Utils\base64.h"
#include "Utils\web.h"
#include "Utils\vmthooks.h"
#include "Utils\Utils.h"
#include "Utils\Entry.h"

#include "Renders\CRender.h"

#include "UE3\Color.h"
#include "Menu\MenuManager.h"

vector<std::wstring> AimbotPlayerWhitelist;

#ifndef test
#include "UE3\UE3Math.h"
#include "UE3\2DRadar.h"
#include "UE3\WorldToScreen.h"
#include "UE3\IsVisible.h"
#include "UE3\ESP.h"
#include "UE3\AimBot.h"
#include "UE3\Misc.h"
#endif


#include "Hack\BRDraw.h"

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

