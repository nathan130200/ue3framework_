#ifndef CRENDER_H
#define CRENDER_H

class CRender
{
public:
	static FColor CRender::MakeColor(int R, int G, int B, int A)
	{
		FColor ReturnedColor;
		ReturnedColor.R = R;
		ReturnedColor.G = G;
		ReturnedColor.B = B;
		ReturnedColor.A = A;
		return ReturnedColor;
	}

#ifdef UE3_0
	static void CRender::DrawString( UCanvas* pCanvas, float X, float Y, const FColor& Color, bool Center, wchar_t* String )
	{
		float OldCurX		= pCanvas->CurX;
		float OldCurY		= pCanvas->CurY;
		FColor OldColor		= pCanvas->DrawColor;

		pCanvas->CurX		= X;
		pCanvas->CurY		= Y;
		pCanvas->DrawColor  = Color;

		if ( Center )
		{
			float XL, YL;
			pCanvas->TextSize( String, &XL, &YL );
			pCanvas->CurX -= XL / 2;
		}

		pCanvas->DrawText(String, false, 1, 1);
    
		pCanvas->CurX      = OldCurX;
		pCanvas->CurY      = OldCurY;
		pCanvas->DrawColor  = OldColor;
	}
#endif

#ifdef UE3_5
	static void CRender::DrawString( UCanvas* pCanvas, float X, float Y, const FColor& Color, bool Center, wchar_t* String )
	{
		float OldCurX		= pCanvas->CurX;
		float OldCurY		= pCanvas->CurY;
		FColor OldColor		= pCanvas->DrawColor;

		pCanvas->CurX		= X;
		pCanvas->CurY		= Y;
		pCanvas->DrawColor  = Color;

		if ( Center )
		{
			float XL, YL;
			pCanvas->TextSize( String, &XL, &YL );
			pCanvas->CurX -= XL / 2;
		}

		pCanvas->DrawText(String, false, 1, 1, NULL);
    
		pCanvas->CurX      = OldCurX;
		pCanvas->CurY      = OldCurY;
		pCanvas->DrawColor  = OldColor;
	}
#endif

#ifdef UE3_9
	static void CRender::DrawString( UCanvas* pCanvas, float X, float Y, const FColor& Color, bool Center, wchar_t* String )
	{
		float OldCurX		= pCanvas->CurX;
		float OldCurY		= pCanvas->CurY;
		FColor OldColor		= pCanvas->DrawColor;

		pCanvas->CurX		= X;
		pCanvas->CurY		= Y;
		pCanvas->DrawColor  = Color;

		if ( Center )
		{
			float XL, YL;
			pCanvas->TextSize( String, 1, 1, &XL, &YL );
			pCanvas->CurX -= XL / 2;
		}

		pCanvas->DrawText(String, false, 1, 1, NULL);
    
		pCanvas->CurX      = OldCurX;
		pCanvas->CurY      = OldCurY;
		pCanvas->DrawColor  = OldColor;
	}
#endif

	static void CRender::DrawStringEx( UCanvas* Canvas, float X, float Y, const FColor& Color, bool Center, wchar_t* String, ... )
	{
		wchar_t StringBuffer [1024];
		memset(StringBuffer, 0, 1024*2);

		va_list ArgList;

		va_start( ArgList, String );
		vswprintf(StringBuffer, String, ArgList);
		va_end( ArgList );

		DrawString( Canvas, X, Y, Color, Center, StringBuffer );
	}


#ifdef UE3_0
	static void CRender::DrawRect( UCanvas* Canvas, float X, float Y, float W, float H, const FColor& Color )
	{
		Canvas->CurX = X;
		Canvas->CurY = Y;
		Canvas->DrawColor  = Color;

		Canvas->DrawTile( Canvas->DefaultTexture, W, H, 0, 0, 1, 1 );
	}

	static void CRender::DrawBox( UCanvas* Canvas, float X, float Y, float W, float H, const FColor& Color )
	{
		DrawRect( Canvas, X, Y, W, 1, Color );
		DrawRect( Canvas, X, Y, 1, H, Color );
		DrawRect( Canvas, X + W - 1, Y, 1, H, Color );
		DrawRect( Canvas, X, Y + H - 1, W, 1, Color );
	}
#endif

#ifdef UE3_5 || UE3_9
	static void CRender::DrawRect( UCanvas* Canvas, float X, float Y, float W, float H, const FLinearColor& Color )
	{
		Canvas->CurX = X;
		Canvas->CurY = Y;

		Canvas->DrawTile( Canvas->DefaultTexture, W, H, 0, 0, 1, 1, Color, NULL, NULL);
	}

	static void CRender::DrawBox( UCanvas* Canvas, float X, float Y, float W, float H, const FLinearColor& Color )
	{
		DrawRect( Canvas, X, Y, W, 1, Color );
		DrawRect( Canvas, X, Y, 1, H, Color );
		DrawRect( Canvas, X + W - 1, Y, 1, H, Color );
		DrawRect( Canvas, X, Y + H - 1, W, 1, Color );
	}
#endif

#ifdef UE3_9
	static void CRender::DrawRect( UCanvas* Canvas, float X, float Y, float W, float H, const FLinearColor& Color )
	{
		Canvas->CurX = X;
		Canvas->CurY = Y;

		Canvas->DrawTile( Canvas->DefaultTexture, W, H, 0, 0, 1, 1, Color, NULL, NULL);
	}

	static void CRender::DrawBox( UCanvas* Canvas, float X, float Y, float W, float H, const FLinearColor& Color )
	{
		DrawRect( Canvas, X, Y, W, 1, Color );
		DrawRect( Canvas, X, Y, 1, H, Color );
		DrawRect( Canvas, X + W - 1, Y, 1, H, Color );
		DrawRect( Canvas, X, Y + H - 1, W, 1, Color );
	}
#endif



	void CRender::DrawLine(UCanvas* pCanvas, float startX, float startY, float endX, float endY, FColor cColor )
	{
		pCanvas->Draw2DLine(startX, startY, endX, endY, cColor);
	}

#ifdef UE3_5
	void CRender::DrawHealthBar(UCanvas* pCanvas, int x, int y, float health, int w, int h, const FLinearColor& color1, const FLinearColor& color2)
	{
		DrawRect(pCanvas,x,y,w+1,h,color2);
		UINT hw = (UINT)(((h-2)*health)/100);
		DrawRect(pCanvas,x+1,y+1,w-1,hw,color1);
	}
#endif

	void CRender::DrawBlackBorderString(UCanvas* pCanvas, int x, int y, FColor& Color, const WCHAR* szText, ...) 
	{ 
		WCHAR logbuf[256] = {0};
		va_list ArgList;

		va_start( ArgList, szText );
		vswprintf(logbuf, szText, ArgList);
		va_end( ArgList );

		DrawString(pCanvas, x + 1, y,		Color, 0, logbuf);
		DrawString(pCanvas, x - 1, y,		Color, 0, logbuf);
		DrawString(pCanvas, x, y + 1,		Color, 0, logbuf);
		DrawString(pCanvas, x, y - 1,		Color, 0, logbuf);
		DrawString(pCanvas, x + 1, y + 1,	Color, 0, logbuf);
		DrawString(pCanvas, x - 1, y - 1,	Color, 0, logbuf);
		DrawString(pCanvas, x + 1, y - 1,	Color, 0, logbuf);
		DrawString(pCanvas, x - 1, y + 1,	Color, 0, logbuf);
		DrawString(pCanvas, x, y,			Color, 0, logbuf);
	} 

	static void CRender::DrawGradientBox(UCanvas* pCanvas, float x, float y, float width, float height, FColor& Color, int SharpnessR, int SharpnessG, int SharpnessB)
	{
		for(int i = 0; i < height; i++)
		{
			FColor nColor = { Color.B + (i / SharpnessB), Color.G + (i / SharpnessG), Color.R + (i / SharpnessR), Color.A};
			pCanvas->Draw2DLine(x, y + i, x + width, y + i, nColor);
		}
	}
};

#endif