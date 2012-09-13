#pragma once
#ifndef CRENDER_H
#define CRENDER_H

class CRender
{
public:
	static FColor CRender::MakeColor(int R, int G, int B, int A);
	static void CRender::DrawString( DrawUtils* pCanvas, float X, float Y, const FColor& Color, bool Center, wchar_t* String );
	static void CRender::DrawStringEx( DrawUtils* Canvas, float X, float Y, const FColor& Color, bool Center, wchar_t* String, ... );
	static void CRender::DrawRect( DrawUtils* Canvas, float X, float Y, float W, float H, const FLinearColor& Color );
	static void CRender::DrawBox( DrawUtils* Canvas, float X, float Y, float W, float H, const FLinearColor& Color );
	static void CRender::DrawLine(DrawUtils* pCanvas, float startX, float startY, float endX, float endY, FColor cColor );
	static void CRender::DrawBlackBorderString(DrawUtils* pCanvas, int x, int y, FColor& Color, const WCHAR* szText, ...);
	static void CRender::DrawGradientBox(DrawUtils* pCanvas, float x, float y, float width, float height, FColor& Color, int SharpnessR, int SharpnessG, int SharpnessB);
};

#endif