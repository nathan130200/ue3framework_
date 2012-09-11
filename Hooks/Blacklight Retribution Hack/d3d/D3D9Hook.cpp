#include "../Framework/Framework.h"
#include "D3D9Hook.h"
#include "CD3DFontRenderer.h"
#include "detours.h"

CD3DManager *g_pD3DManager;
bool bLoggin = false; 
HMENU hMenu;							// Handle to store menu between toggles
static bool bInvalid = false;	// Flag To Settting D3DERR_DEVICELOST/D3DERR_DEVICNOTRESET
static bool bDoOnce = false;
std::vector<SPRITETEX>	m_SpriteTex;
BOOL IsWindowed = false;				// Flag windowed/fullscreen mode asume that we are in fullscreen from start
HMENU hMenuDeviceWnd;					// Handle to store menu between toggles
HMENU hMenuFocusWnd;	
int g_iStride = 0;
DWORD g_dwLoggedSize;

#define RESET					16
#define PRESENT					17
#define ENDSCENE				42
#define BEGINSCENE				43
#define DRAWINDEXEDPRIMITIVE	82

static bool bDoOnce1 = false;
DEF_DETOUR_FUNC(Reset,HRESULT,(IDirect3DDevice9* pDevice, D3DPRESENT_PARAMETERS* pPresentationParameters));
DEF_DETOUR_FUNC(EndScene,HRESULT,(IDirect3DDevice9* pDevice));
DEF_DETOUR_FUNC(BeginScene,HRESULT,(IDirect3DDevice9* pDevice));
DEF_DETOUR_FUNC(DrawIndexedPrimitive,HRESULT,(IDirect3DDevice9* pDevice,D3DPRIMITIVETYPE type ,INT BaseVertexIndex,UINT MinVertexIndex,UINT NumVertices,UINT startIndex,UINT primCount));
HRESULT APIENTRY Reset_Detour(IDirect3DDevice9* pDevice, D3DPRESENT_PARAMETERS* pPresentationParameters);
DWORD dwEndsceneParam1;

bool bOnScreen = false;
DWORD dwDatabase = NULL;
DWORD dwObjectDataBase = NULL;

float ConvertIntColour(int Value)
{
	return (1.0 * Value) / 255;
}

bool CD3DManager::InitializeD3DHooks( )
{

	char dbgstr[MAX_PATH]="";
	HMODULE hD3DModule = LoadLibrary("d3d9.dll");
	if (!hD3DModule )
	{
		return false;
	}

	DWORD dwAddr, *vtbl;

	dwAddr = Utils::FindPattern((DWORD)hD3DModule, 0x128000, (PBYTE)"\xC7\x06\x00\x00\x00\x00\x89\x86\x00\x00\x00\x00\x89\x86", "xx????xx????xx" );

	if( dwAddr ) 
	{
		memcpy( &vtbl,(void *)( dwAddr+2 ), 4 );

		pEndScene = (EndScene_t)DetourFunction((PBYTE)vtbl[ENDSCENE] + 0x13,(PBYTE)EndScene_Detour);	
		pReset = (Reset_t)DetourFunction((PBYTE)vtbl[RESET],(PBYTE)Reset_Detour);
		if (!pEndScene || !pReset )
		{
			return false;
			printf("D3D9 Hook: returned false\n");
			Utils::add_log("D3D9 Hook false\n");
		}
	}

	printf("D3D9 Hooked\n");
	Utils::add_log("D3D9 Hooked\n");

	return true;	
}

void CD3DManager::RemoveD3DHooks()
{
	DetourRemove((PBYTE)pEndScene,(PBYTE)EndScene_Detour);
	DetourRemove((PBYTE)pReset,(PBYTE)Reset_Detour);
	//DetourRemove((PBYTE)pBeginScene,(PBYTE)BeginScene_Detour);
	OnLostDevice();
}

HRESULT CD3DManager::OnLostDevice()
{
	cRender.onLostDevice();

	return D3D_OK;
}

HRESULT CD3DManager::OnResetDevice(IDirect3DDevice9 *pD3Ddev)
{
	cRender.onResetDevice();
	cMenu.initialize();
	return D3D_OK;
}

void drawInfo(IDirect3DDevice9* pDevice)
{
	g_pHack->Drawinfo(pDevice);
}

HRESULT APIENTRY BeginScene_Detour(IDirect3DDevice9* pDevice)
{
	
	__asm NOP
	HRESULT ret = pBeginScene(pDevice);
	drawInfo(pDevice);
	return ret;
}

HRESULT APIENTRY EndScene_Detour(IDirect3DDevice9* pDevice)
{

	__asm NOP

	static bool bInit = false;

	if(!bInit)
	{
		cRender.InitD3D(pDevice);
		cMenu.initialize();
		bInit = true;
	}

	if(bInit)
	{
		cMenu.perform(); // Call Menu
		drawInfo(pDevice);
	}

	return pEndScene(pDevice);
}


HRESULT APIENTRY Reset_Detour(IDirect3DDevice9* pDevice, D3DPRESENT_PARAMETERS* pPresentationParameters)
{
	//__asm pushad

	__asm NOP
	g_pD3DManager->OnLostDevice();
	//__asm popad
	HRESULT hResult = pReset(pDevice,pPresentationParameters);
	//__asm pushad
	if (hResult == D3D_OK)
	{
		g_pD3DManager->OnResetDevice(pDevice);
		g_pHack->OnResetinfo(pDevice);
	}
	//__asm popad
	return hResult;
}

HRESULT APIENTRY DrawIndexedPrimitive_Detour(IDirect3DDevice9* pDevice,D3DPRIMITIVETYPE type ,INT BaseVertexIndex,UINT MinVertexIndex,UINT NumVertices,UINT startIndex,UINT primCount)
{
	__asm NOP
	__asm pushad
	//pUsefull->add_log(0, "RageKings PWNS YOU" );
	__asm popad
	return pDrawIndexedPrimitive(pDevice,type,BaseVertexIndex,MinVertexIndex,NumVertices,startIndex,primCount);
}