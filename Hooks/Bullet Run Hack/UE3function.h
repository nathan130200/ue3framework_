#pragma  once

#ifndef __DRAWUTILS_H_
#define __DRAWUTILS_H_

class DrawUtils : public UCanvas
{
public:
	void TextSize( struct FString String, float* XL, float* YL );
	void DrawText ( struct FString Text, unsigned long CR, float XScale, float YScale, struct FFontRenderInfo* RenderInfo );
	void DrawTile ( class UTexture* Tex, float XL, float YL, float U, float V, float UL, float VL, struct FLinearColor LColor, unsigned long ClipTile, unsigned char Blend );
	void Draw2DLine ( float X1, float Y1, float X2, float Y2, struct FColor LineColor );
};

#endif

class ControllerUtils : public APBPlayerController
{
public:
	void ReloadWeapon ( unsigned char FireModeNum );
};

class AActorUtils : public  AActor
{
public:
	void GetComponentsBoundingBox ( struct FBox* ActorBox );
};