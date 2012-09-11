#pragma once
#include "../Framework/Framework.h"
#include "CD3DFontRenderer.h"
#define DT_BB 0x00400000
CFontRenderer *g_pFont = NULL;
CFontRenderer *g_pEspFont = NULL;
CFontRenderer::CFontRenderer( )
{
	//	add_log( "CFontRenderer Constructing..." );

	m_pFont			= 0;
	m_FontColor		= D3DCOLOR_XRGB( 255, 0, 0 );
	m_bInitialized	= FALSE;
	m_Align			= /*NULL;*/DT_CENTER;

	//	add_log( "CFontRenderer Constructed" );
}

CFontRenderer::~CFontRenderer( )
{
	SAFE_RELEASE(m_pFont);
}
HRESULT CFontRenderer::OnLostDevice()
{
	SAFE_RELEASE(m_pFont);
	return D3D_OK;
}
HRESULT CFontRenderer::Initialize(IDirect3DDevice9* pDevice, D3DXFONT_DESC dDesc, D3DCOLOR FontColor )
{
	SAFE_RELEASE(m_pFont);


	D3DXCreateFontIndirectA( pDevice,&dDesc, &m_pFont );

	m_FontColor = FontColor;
	m_bInitialized = TRUE;
	return S_OK;
}

HRESULT CFontRenderer::DrawText( string *pString, D3DXVECTOR3 *vecInOut,DWORD dwAlignment )
{
	if( !m_bInitialized )
		return E_FAIL;

	HRESULT hRetVal;

	RECT FontRect = { (int)vecInOut->x,  (int)vecInOut->y, 0, 0 };
	m_pFont->DrawTextA( NULL, pString->c_str(), -1, &FontRect, DT_CALCRECT , 0 );

	int a = ( m_FontColor & 0xFF000000) >> 24;
	if (dwAlignment & DT_BB && dwAlignment & DT_VCENTER)
	{
		LONG textWidth = FontRect.right-FontRect.left;
		LONG textHight = FontRect.bottom-FontRect.top;

		FontRect.left = FontRect.left-textWidth/2;
		FontRect.right = FontRect.left+textWidth;
		FontRect.top = FontRect.top-textHight/2;
		FontRect.bottom = FontRect.top+textHight;
		RECT Rect;
		Rect.left =  FontRect.left-1;
		Rect.right = FontRect.right -1;
		Rect.top = FontRect.top;
		Rect.bottom = FontRect.bottom;

		m_pFont->DrawTextA( NULL, pString->c_str(), -1, &Rect , DT_CENTER, D3DCOLOR_ARGB(a,0,0,0) );
		Rect.left =  FontRect.left+1;
		Rect.right = FontRect.right+1;
		m_pFont->DrawTextA( NULL, pString->c_str(), -1, &Rect , DT_CENTER, D3DCOLOR_ARGB(a,0,0,0) );
		Rect.left =  FontRect.left;
		Rect.right = FontRect.right;
		Rect.top = FontRect.top-1;
		Rect.bottom = FontRect.bottom-1;
		m_pFont->DrawTextA( NULL, pString->c_str(), -1, &Rect , DT_CENTER, D3DCOLOR_ARGB(a,0,0,0) );
		Rect.top = FontRect.top+1;
		Rect.bottom = FontRect.bottom+1;
		m_pFont->DrawTextA( NULL, pString->c_str(), -1, &Rect , DT_CENTER, D3DCOLOR_ARGB(a,0,0,0) );
		return  m_pFont->DrawTextA( NULL, pString->c_str(), -1, &FontRect , DT_CENTER, m_FontColor );

	}


	if (dwAlignment & DT_VCENTER)
	{
		LONG textWidth = FontRect.right-FontRect.left;
		LONG textHight = FontRect.bottom-FontRect.top;

		FontRect.left = FontRect.left-textWidth/2;
		FontRect.right = FontRect.left+textWidth;
		FontRect.top = FontRect.top-textHight;
		FontRect.bottom = FontRect.bottom-textHight;
		return m_pFont->DrawTextA( NULL, pString->c_str(), -1, &FontRect , dwAlignment, m_FontColor );
	}

	if (dwAlignment & DT_BB)
	{
		RECT Rect;
		Rect.left =  FontRect.left-1;
		Rect.right = FontRect.right -1;
		Rect.top = FontRect.top;
		Rect.bottom = FontRect.bottom;


		m_pFont->DrawTextA( NULL, pString->c_str(), -1, &Rect , NULL, D3DCOLOR_ARGB(a,0,0,0) );
		Rect.left =  FontRect.left+1;
		Rect.right = FontRect.right+1;
		m_pFont->DrawTextA( NULL, pString->c_str(), -1, &Rect , NULL, D3DCOLOR_ARGB(a,0,0,0) );
		Rect.left =  FontRect.left;
		Rect.right = FontRect.right;
		Rect.top = FontRect.top-1;
		Rect.bottom = FontRect.bottom-1;
		m_pFont->DrawTextA( NULL, pString->c_str(), -1, &Rect , NULL, D3DCOLOR_ARGB(a,0,0,0) );
		Rect.top = FontRect.top+1;
		Rect.bottom = FontRect.bottom+1;
		m_pFont->DrawTextA( NULL, pString->c_str(), -1, &Rect , NULL, D3DCOLOR_ARGB(a,0,0,0) );
		return m_pFont->DrawTextA( NULL, pString->c_str(), -1, &FontRect , dwAlignment & ~DT_BB, m_FontColor );
	}

	hRetVal = m_pFont->DrawTextA( NULL, pString->c_str(), -1, &FontRect , dwAlignment, m_FontColor );	

	vecInOut->y = FontRect.top;
	return hRetVal;
}

HRESULT CFontRenderer::GetFontRect( string *pString, RECT *rect )
{
	return m_pFont->DrawTextA( NULL, pString->c_str(), -1, rect, DT_CALCRECT , 0 );
}