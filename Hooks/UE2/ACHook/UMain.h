#pragma once


#include <windows.h>
#include <stdio.h>
#include <math.h>
#include <tchar.h>

#define ENGINE_API DLL_IMPORT

#include ".\SDK\Core\Inc\Core.h"				// Unreal core public header file
#include ".\SDK\Engine\Inc\UnObj.h"				// Standard object definitions.
#include ".\SDK\Engine\Inc\UnPrim.h"				// Primitive class.
#include ".\SDK\Engine\Inc\UnModel.h"			// Model class.
#include ".\SDK\Engine\Inc\UnTex.h"				// Texture and palette.
#include ".\SDK\Engine\Inc\EngineClasses.h"		// All actor classes.
#include ".\SDK\Engine\Inc\UnReach.h"			// Reach specs.
#include ".\SDK\Engine\Inc\UnURL.h"				// Uniform resource locators.
#include ".\SDK\Engine\Inc\UnLevel.h"			// Level object.
#include ".\SDK\Engine\Inc\UnPlayer.h"			// Player class.
#include ".\SDK\Engine\Inc\UnCamera.h"			// Viewport subsystem.
#include ".\SDK\Engine\Inc\UnIn.h"	


#pragma comment(lib,"Core")
#pragma comment(lib,"Engine")

// Color Defines
#define ColorWhite        FColor(255,255,255,255)
#define ColorGreen        FColor(0,255,0,255)
#define ColorRed        FColor(255,0,0,255)
#define ColorYellow        FColor(255,255,0,255)
#define ColorBlue        FColor(0,0,255,255)
#define ColorBlue2        FColor(0,128,255,255)
#define ColorBlack        FColor(0,0,0,255)
#define ColorOrange        FColor(255,125,0,255)
#define ColorLightGreen FColor(0, 255, 128, 255)
#define ColorGrey        FColor(120,120,120,255)
#define ColorSilver        FColor(40, 40, 40, 255)
#define Background        FColor(180,180,180,255)
#define Beliu        FColor(180,180,180,255)


#define FIND_FUNCTION( s ) ( UFunction* )UFunction::StaticFindObject( UFunction::StaticClass(), NULL,  s , NULL )
#define AWhiteTexture (UTexture*)UTexture::StaticLoadObject( UTexture::StaticClass(), NULL, L"KillingFloorHUD.HUD.WhiteTexture", NULL, LOAD_NoWarn, NULL )
#define InterfaceContent_ScoreBoxA (UTexture*)UTexture::StaticLoadObject( UTexture::StaticClass(), NULL, L"InterfaceContent.ScoreBoxA", NULL, LOAD_NoWarn, NULL )
#define MySmallFont (UFont*)UFont::StaticLoadObject(UFont::StaticClass(), NULL, L"Engine.DefaultFont", NULL, LOAD_NoWarn, NULL )
#define ROFonts12 (UFont*)UFont::StaticLoadObject(UFont::StaticClass(), NULL, L"ROFonts.ROBtsrmVr12", NULL, LOAD_NoWarn, NULL )

void GetAxes (FRotator R, FVector &X, FVector &Y, FVector &Z)
{	
	X = R.Vector();

	FRotator R2 = R;
	R2.Yaw += 16384;
	R2.Pitch = 0.f;

	Y = R2.Vector();
	Y.Z = 0.f;

	R.Pitch += 16384;
	Z = R.Vector();
}

float  Dot (const FVector& V1, const FVector& V2)
{
	return (V1.X*V2.X + V1.Y*V2.Y + V1.Z*V2.Z);
}

void MEMwrite(void *adr, void *ptr, int size)
{
	DWORD OldProtection;
	VirtualProtect(adr,size,PAGE_EXECUTE_READWRITE, &OldProtection);
	memcpy(adr,ptr,size);
	VirtualProtect(adr,size,OldProtection, &OldProtection);
}

void *DetourFunctionX (BYTE *src, const BYTE *dst, const int len)
{
	BYTE *jmp;
	DWORD dwback;
	DWORD jumpto, newjump;

	VirtualProtect(src,len,PAGE_READWRITE,&dwback);

	if(src[0] == 0xE9)
	{
		jmp = (BYTE*)malloc(10);
		jumpto = (*(DWORD*)(src+1))+((DWORD)src)+5;
		newjump = (jumpto-(DWORD)(jmp+5));
		jmp[0] = 0xE9;
		*(DWORD*)(jmp+1) = newjump;
		jmp += 5;
		jmp[0] = 0xE9;
		*(DWORD*)(jmp+1) = (DWORD)(src-jmp);
	}
	else
	{
		jmp = (BYTE*)malloc(5+len);
		memcpy(jmp,src,len);
		jmp += len;
		jmp[0] = 0xE9;
		*(DWORD*)(jmp+1) = (DWORD)(src+len-jmp)-5;
	}
	src[0] = 0xE9;
	*(DWORD*)(src+1) = (DWORD)(dst - src) - 5;

	for(int i = 5; i < len; i++)
		src[i] = 0x90;
	VirtualProtect(src,len,dwback,&dwback);
	return (jmp-len);
} 