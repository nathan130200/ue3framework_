/*=============================================================================
	UnTex.h: Unreal texture related classes.
	Copyright 1997-1999 Epic Games, Inc. All Rights Reserved.

	Revision history:
		* Created by Tim Sweeney
=============================================================================*/

/*-----------------------------------------------------------------------------
	Constants.
-----------------------------------------------------------------------------*/

enum {NUM_PAL_COLORS=256};	// Number of colors in a standard palette.

// Constants.
enum
{
	EHiColor565_R = 0xf800,
	EHiColor565_G = 0x07e0,
	EHiColor565_B = 0x001f,

	EHiColor555_R = 0x7c00,
	EHiColor555_G = 0x03e0,
	EHiColor555_B = 0x001f,

	ETrueColor_R  = 0x00ff0000,
	ETrueColor_G  = 0x0000ff00,
	ETrueColor_B  = 0x000000ff,
};

/*-----------------------------------------------------------------------------
	UPalette.
-----------------------------------------------------------------------------*/

//
// A truecolor value.
//
#define GET_COLOR_DWORD(color) (*(DWORD*)&(color))
class ENGINE_API FColor
{
public:
	// Variables.
/*#if __INTEL_BYTE_ORDER__
	BYTE R,G,B,A;
#else
	BYTE A,B,G,R;
#endif*/

#if __INTEL_BYTE_ORDER__
	BYTE B,G,R,A;
#else
	BYTE A,R,G,B;
#endif

	// Constructors.
	FColor() {}
	FColor( BYTE InR, BYTE InG, BYTE InB )
	:	R(InR), G(InG), B(InB) {}
	FColor( BYTE InR, BYTE InG, BYTE InB, BYTE InA )
	:	R(InR), G(InG), B(InB), A(InA) {}
	FColor( const FPlane& P )
	:	R(Clamp(appFloor(P.X*256),0,255))
	,	G(Clamp(appFloor(P.Y*256),0,255))
	,	B(Clamp(appFloor(P.Z*256),0,255))
	,	A(Clamp(appFloor(P.W*256),0,255))
	{}

	// Serializer.
	friend FArchive& operator<< (FArchive &Ar, FColor &Color )
	{
		return Ar << Color.R << Color.G << Color.B << Color.A;
	}

	// Operators.
	UBOOL operator==( const FColor &C ) const
	{
		//return D==C.D;
		return *(DWORD*)this == GET_COLOR_DWORD(C);
	}
	UBOOL operator!=( const FColor& C ) const
	{
		return GET_COLOR_DWORD(*this)!=GET_COLOR_DWORD(C);
	}
	INT Brightness() const
	{
		return (2*(INT)R + 3*(INT)G + 1*(INT)B)>>3;
	}
	FLOAT FBrightness() const
	{
		return (2.f*R + 3.f*G + 1.f*B)/(6.f*256.f);
	}
	DWORD TrueColor() const
	{
		DWORD D=*(DWORD*)this;
		return ((D&0xff)<<16) + (D&0xff00) + ((D&0xff0000)>>16);
	}
	_WORD HiColor565() const
	{
		DWORD D=GET_COLOR_DWORD(*this);
		return ((D&0xf8) << 8) + ((D&0xfC00) >> 5) + ((D&0xf80000) >> 19);
	}
	_WORD HiColor555() const
	{
		DWORD D=GET_COLOR_DWORD(*this);
		return ((D&0xf8) << 7) + ((D&0xf800) >> 6) + ((D&0xf80000) >> 19);
	}
	FVector Plane() const
	{
		return FPlane(R/255.f,G/255.f,B/255.f,A/255.f);
	}
	FColor Brighten( INT Amount )
	{
		return FColor( Plane() * (1.f - Amount/24.f) );
	}
};
extern ENGINE_API FPlane FGetHSV( BYTE H, BYTE S, BYTE V );

//
// A palette object.  Holds NUM_PAL_COLORS unique FColor values,
// forming a 256-color palette which can be referenced by textures.
//
class ENGINE_API UPalette : public UObject
{
	DECLARE_CLASS(UPalette,UObject,CLASS_SafeReplace,Engine)

	// Variables.
	TArray<FColor> Colors;

	// Constructors.
	UPalette();

	// UObject interface.
	void Serialize( FArchive& Ar );

	// UPalette interface.
	BYTE BestMatch( FColor Color, INT First );
	UPalette* ReplaceWithExisting();
	void FixPalette();
};

/*-----------------------------------------------------------------------------
	UTexture and FTextureInfo.
-----------------------------------------------------------------------------*/


enum {MAX_TEXTURE_LOD=4};

//
// Base mipmap.
//
struct ENGINE_API FMipmapBase
{
public:
	BYTE*			DataPtr;		// Pointer to data, valid only when locked.
	INT				USize,  VSize;	// Power of two tile dimensions.
	BYTE			UBits,  VBits;	// Power of two tile bits.
	FMipmapBase( BYTE InUBits, BYTE InVBits )
	:	DataPtr		(0)
	,	USize		(1<<InUBits)
	,	VSize		(1<<InVBits)
	,	UBits		(InUBits)
	,	VBits		(InVBits)
	{}
	FMipmapBase()
	{}
};

//
// Texture mipmap.
//
struct ENGINE_API FMipmap : public FMipmapBase
{
public:
	TLazyArray<BYTE> DataArray; // Data.
	FMipmap()
	{}
	FMipmap( BYTE InUBits, BYTE InVBits )
	:	FMipmapBase( InUBits, InVBits )
	,	DataArray( USize * VSize )
	{}
	FMipmap( BYTE InUBits, BYTE InVBits, INT InSize )
	:	FMipmapBase( InUBits, InVBits )
	,	DataArray( InSize )
	{}
	void Clear()
	{
		guard(FMipmap::Clear);
		appMemzero( &DataArray(0), DataArray.Num() );
		unguard;
	}
	friend FArchive& operator<<( FArchive& Ar, FMipmap& M )
	{
		guard(FMipmap<<);
		Ar << M.DataArray;
		Ar << M.USize << M.VSize << M.UBits << M.VBits;
		return Ar;
		unguard;
	}
};

enum ESurfaceTypes
{
	EST_Default,
	EST_Rock,
	EST_Dirt,
	EST_Metal,
	EST_Wood,
	EST_Plant,
	EST_Flesh,
	EST_Ice,
	EST_Snow,
	EST_Water,
	EST_Glass,
	EST_Custom00,
	EST_Custom01,
	EST_Custom02,
	EST_Custom03,
	EST_Custom04,
	EST_Custom05,
	EST_Custom06,
	EST_Custom07,
	EST_Custom08,
	EST_Custom09,
	EST_Custom10,
	EST_Custom11,
	EST_Custom12,
	EST_Custom13,
	EST_Custom14,
	EST_Custom15,
	EST_Custom16,
	EST_Custom17,
	EST_Custom18,
	EST_Custom19,
	EST_Custom20,
	EST_Custom21,
	EST_Custom22,
	EST_Custom23,
	EST_Custom24,
	EST_Custom25,
	EST_Custom26,
	EST_Custom27,
	EST_Custom28,
	EST_Custom29,
	EST_Custom30,
	EST_Custom31,
};


enum ETexClampMode
{
	TC_Wrap,
	TC_Clamp,
};

enum ETextureFormat
{
	TEXF_P8,
	TEXF_RGBA7,
	TEXF_RGB16,
	TEXF_DXT1,
	TEXF_RGB8,
	TEXF_RGBA8,
	TEXF_NODATA,
	TEXF_DXT3,
	TEXF_DXT5,
	TEXF_L8,
	TEXF_G16,
	TEXF_RRRGGGBBB,
};

enum ELODSet
{
	LODSET_None,
	LODSET_World,
	LODSET_PlayerSkin,
	LODSET_WeaponSkin,
	LODSET_Terrain,
	LODSET_Interface,
	LODSET_RenderMap,
	LODSET_Lightmap,
};

enum EEnvMapTransformType
{
	EMTT_ViewSpace,
	EMTT_WorldSpace,
	EMTT_LightSpace,
};

//
// A low-level bitmap.
//
class ENGINE_API UBitmap : public UObject
{
	DECLARE_ABSTRACT_CLASS(UBitmap,UObject,0,Engine)

	// General bitmap information.
	BYTE		Format;				// ETextureFormat.
	UPalette*	Palette;			// Palette if 8-bit palettized.
	BYTE		UBits, VBits;		// # of bits in USize, i.e. 8 for 256.
	INT			USize, VSize;		// Size, must be power of 2.
	INT			UClamp, VClamp;		// Clamped width, must be <= size.
	FColor		MipZero;			// Overall average color of texture.
	FColor		MaxColor;			// Maximum color for normalization.
	INT			__LastUpdateTime[2];// Last time texture was locked for rendering.

	// Static.
	static class UClient* __Client;

	// Constructor.
	UBitmap();

	// UBitmap interface.
	virtual void Lock( FTextureInfo& TextureInfo, FTime Time, INT LOD, URenderDevice* RenDev )=0;
	virtual void Unlock( FTextureInfo& TextureInfo )=0;
	virtual FMipmapBase* GetMip( INT i )=0;
	FTime GetLastUpdateTime() {FTime T; appMemcpy(&T,&__LastUpdateTime,sizeof(FTime)); return T;}
	void SetLastUpdateTime(FTime T) {appMemcpy(&__LastUpdateTime,&T,sizeof(FTime));}
};

//
// A complex material texture.
//


class DLL_IMPORT UMaterial : public UObject
{
public:
	class UMaterial* FallbackMaterial;		// Offset 40 (0x28)	Size 4	PFlags (0x1) 0|CPF_Edit
	class UMaterial* DefaultMaterial;		// Offset 44 (0x2c)	Size 4	PFlags (0x0) 0
	BITFIELD UseFallback:1;		// Offset 48 (0x30)	Size 4	PFlags (0x2002) 0|CPF_Const|CPF_Transient|CPF_PropagateFromStruct
	BITFIELD Validated:1;		// Offset 48 (0x30)	Size 4	PFlags (0x2002) 0|CPF_Const|CPF_Transient|CPF_PropagateFromStruct
	BYTE SurfaceType;		// Offset 52 (0x34)	Size 1	PFlags (0x1) 0|CPF_Edit
	INT MaterialType;		// Offset 56 (0x38)	Size 4	PFlags (0x0) 0
	DECLARE_FUNCTION(execReset);

	DECLARE_CLASS(UMaterial,UObject,0|CLASS_SafeReplace|CLASS_RuntimeStatic|CLASS_NoUserCreate|CLASS_Inherit|CLASS_RecompilerClear,Engine)
};

class DLL_IMPORT URenderedMaterial : public UMaterial
{
public:
	INT renderedmaterial_dummy;		// Offset 60 (0x3c)	Size 4	PFlags (0x0) 0

	DECLARE_CLASS(URenderedMaterial,UMaterial,0|CLASS_SafeReplace|CLASS_RuntimeStatic|CLASS_NoUserCreate|CLASS_Inherit|CLASS_RecompilerClear,Engine)
};


class DLL_IMPORT UBitmapMaterial : public URenderedMaterial
{
public:
	BYTE Format;		// Offset 64 (0x40)	Size 1	PFlags (0x20003) 0|CPF_Edit|CPF_Const|CPF_EditConst|CPF_PropagateFromStruct
	BYTE UClampMode;		// Offset 65 (0x41)	Size 1	PFlags (0x1) 0|CPF_Edit
	BYTE VClampMode;		// Offset 66 (0x42)	Size 1	PFlags (0x1) 0|CPF_Edit
	BYTE UBits;		// Offset 67 (0x43)	Size 1	PFlags (0x2) 0|CPF_Const|CPF_PropagateFromStruct
	BYTE VBits;		// Offset 68 (0x44)	Size 1	PFlags (0x2) 0|CPF_Const|CPF_PropagateFromStruct
	INT USize;		// Offset 72 (0x48)	Size 4	PFlags (0x2) 0|CPF_Const|CPF_PropagateFromStruct
	INT VSize;		// Offset 76 (0x4c)	Size 4	PFlags (0x2) 0|CPF_Const|CPF_PropagateFromStruct
	INT UClamp;		// Offset 80 (0x50)	Size 4	PFlags (0x3) 0|CPF_Edit|CPF_Const|CPF_PropagateFromStruct
	INT VClamp;		// Offset 84 (0x54)	Size 4	PFlags (0x3) 0|CPF_Edit|CPF_Const|CPF_PropagateFromStruct

	DECLARE_CLASS(UBitmapMaterial,URenderedMaterial,0|CLASS_SafeReplace|CLASS_RuntimeStatic|CLASS_NoUserCreate|CLASS_Inherit|CLASS_RecompilerClear,Engine)
};


class DLL_IMPORT UTexture : public UBitmapMaterial
{
public:
	class UPalette* Palette;		// Offset 88 (0x58)	Size 4	PFlags (0x1) 0|CPF_Edit
	class UMaterial* Detail;		// Offset 92 (0x5c)	Size 4	PFlags (0x1) 0|CPF_Edit
	FLOAT DetailScale;		// Offset 96 (0x60)	Size 4	PFlags (0x1) 0|CPF_Edit
	FColor MipZero;		// Offset 100 (0x64)	Size 4	PFlags (0x2) 0|CPF_Const|CPF_PropagateFromStruct
	FColor MaxColor;		// Offset 104 (0x68)	Size 4	PFlags (0x2) 0|CPF_Const|CPF_PropagateFromStruct
	INT InternalTime[2];		// Offset 108 (0x6c)	Size 4	PFlags (0x2) 0|CPF_Const|CPF_PropagateFromStruct
	class UTexture* DetailTexture;		// Offset 116 (0x74)	Size 4	PFlags (0x20000000) 0
	class UTexture* EnvironmentMap;		// Offset 120 (0x78)	Size 4	PFlags (0x20000000) 0
	BYTE EnvMapTransformType;		// Offset 124 (0x7c)	Size 1	PFlags (0x20000000) 0
	FLOAT Specular;		// Offset 128 (0x80)	Size 4	PFlags (0x20000000) 0
	BITFIELD bMasked:1;		// Offset 132 (0x84)	Size 4	PFlags (0x1) 0|CPF_Edit
	BITFIELD bAlphaTexture:1;		// Offset 132 (0x84)	Size 4	PFlags (0x1) 0|CPF_Edit
	BITFIELD bTwoSided:1;		// Offset 132 (0x84)	Size 4	PFlags (0x1) 0|CPF_Edit
	BITFIELD bHighColorQuality:1;		// Offset 132 (0x84)	Size 4	PFlags (0x1) 0|CPF_Edit
	BITFIELD bHighTextureQuality:1;		// Offset 132 (0x84)	Size 4	PFlags (0x1) 0|CPF_Edit
	BITFIELD bRealtime:1;		// Offset 132 (0x84)	Size 4	PFlags (0x0) 0
	BITFIELD bParametric:1;		// Offset 132 (0x84)	Size 4	PFlags (0x0) 0
	BITFIELD bRealtimeChanged:1;		// Offset 132 (0x84)	Size 4	PFlags (0x2000) 0|CPF_Transient|CPF_PropagateFromStruct
	BITFIELD bHasComp:1;		// Offset 132 (0x84)	Size 4	PFlags (0x20002) 0|CPF_Const|CPF_EditConst|CPF_PropagateFromStruct
	BYTE LODSet;		// Offset 136 (0x88)	Size 1	PFlags (0x1) 0|CPF_Edit
	INT NormalLOD;		// Offset 140 (0x8c)	Size 4	PFlags (0x1) 0|CPF_Edit
	INT MinLOD;		// Offset 144 (0x90)	Size 4	PFlags (0x0) 0
	INT MaxLOD;		// Offset 148 (0x94)	Size 4	PFlags (0x2000) 0|CPF_Transient|CPF_PropagateFromStruct
	class UTexture* AnimNext;		// Offset 152 (0x98)	Size 4	PFlags (0x1) 0|CPF_Edit
	class UTexture* AnimCurrent;		// Offset 156 (0x9c)	Size 4	PFlags (0x2000) 0|CPF_Transient|CPF_PropagateFromStruct
	BYTE PrimeCount;		// Offset 160 (0xa0)	Size 1	PFlags (0x1) 0|CPF_Edit
	BYTE PrimeCurrent;		// Offset 161 (0xa1)	Size 1	PFlags (0x2000) 0|CPF_Transient|CPF_PropagateFromStruct
	FLOAT MinFrameRate;		// Offset 164 (0xa4)	Size 4	PFlags (0x1) 0|CPF_Edit
	FLOAT MaxFrameRate;		// Offset 168 (0xa8)	Size 4	PFlags (0x1) 0|CPF_Edit
	FLOAT Accumulator;		// Offset 172 (0xac)	Size 4	PFlags (0x2000) 0|CPF_Transient|CPF_PropagateFromStruct
	TArray<INT> Mips;		// Offset 176 (0xb0)	Size 12	PFlags (0x1002) 0|CPF_Const|CPF_Native|CPF_PropagateFromStruct
	BYTE CompFormat;		// Offset 188 (0xbc)	Size 1	PFlags (0x20002) 0|CPF_Const|CPF_EditConst|CPF_PropagateFromStruct
	BYTE PS2FirstMip;		// Offset 189 (0xbd)	Size 1	PFlags (0x0) 0
	BYTE PS2NumMips;		// Offset 190 (0xbe)	Size 1	PFlags (0x0) 0
	INT RenderInterface;		// Offset 192 (0xc0)	Size 4	PFlags (0x2002) 0|CPF_Const|CPF_Transient|CPF_PropagateFromStruct
	INT __LastUpdateTime[2];		// Offset 196 (0xc4)	Size 4	PFlags (0x2002) 0|CPF_Const|CPF_Transient|CPF_PropagateFromStruct

	DECLARE_CLASS(UTexture,UBitmapMaterial,0|CLASS_SafeReplace|CLASS_RuntimeStatic|CLASS_NoUserCreate|CLASS_Inherit|CLASS_RecompilerClear,Engine)
};

//
// Information about a locked texture. Used for ease of rendering.
//
enum {MAX_MIPS=12};
struct ENGINE_API FTextureInfo
{
	friend class UBitmap;
	friend class UTexture;

	// Variables.
	UTexture*		Texture;				// Optional texture.
	QWORD			CacheID;				// Unique cache ID.
	QWORD			PaletteCacheID;			// Unique cache ID of palette.
	FVector			Pan;					// Panning value relative to texture planes.
	FColor*			MaxColor;				// Maximum color in texture and all its mipmaps.
	ETextureFormat	Format;					// Texture format.
	FLOAT			UScale;					// U Scaling.
	FLOAT			VScale;					// V Scaling.
	INT				USize;					// Base U size.
	INT				VSize;					// Base V size.
	INT				UClamp;					// U clamping value, or 0 if none.
	INT				VClamp;					// V clamping value, or 0 if none.
	INT				NumMips;				// Number of mipmaps.
	INT				LOD;					// Level of detail, 0=highest.
	FColor*			Palette;				// Palette colors.
	BITFIELD		bHighColorQuality:1;	// High color quality hint.
	BITFIELD		bHighTextureQuality:1;	// High color quality hint.
	BITFIELD		bRealtime:1;			// Texture changes in realtime.
	BITFIELD		bParametric:1;			// Texture data need not be stored.
	BITFIELD		bRealtimeChanged:1;		// Changed since last render.
	FMipmapBase*	Mips[MAX_MIPS];			// Array of NumMips of mipmaps.

	// Functions.
	void Load();
	void Unload();
	void CacheMaxColor();
};

/*-----------------------------------------------------------------------------
	UFont.
-----------------------------------------------------------------------------*/

// Font constants.
enum {NUM_FONT_PAGES=256};
enum {NUM_FONT_CHARS=256};

//
// Information about one font glyph which resides in a texture.
//
struct ENGINE_API FFontCharacter
{
	// Variables.
	INT StartU, StartV;
	INT USize, VSize;

	// Serializer.
	friend FArchive& operator<<( FArchive& Ar, FFontCharacter& Ch )
	{
		guard(FFontCharacter<<);
		return Ar << Ch.StartU << Ch.StartV << Ch.USize << Ch.VSize;
		unguard;
	}
};

//
// A font page.
//
struct ENGINE_API FFontPage
{
	// Variables.
	UTexture* Texture;
	TArray<FFontCharacter> Characters;

	// Serializer.
	friend FArchive& operator<<( FArchive& Ar, FFontPage& Ch )
	{
		guard(FFontCharacter<<);
		return Ar << Ch.Texture << Ch.Characters;
		unguard;
	}
};

//
// A font object, containing information about a set of glyphs.
// The glyph bitmaps are stored in the contained textures, while
// the font database only contains the coordinates of the individual
// glyph.
//
class ENGINE_API UFont : public UObject
{
	DECLARE_CLASS(UFont,UObject,0,Engine)

	// Variables.
	INT CharactersPerPage;
	TArray<FFontPage> Pages;
	TMap<TCHAR,TCHAR> CharRemap;
	UBOOL IsRemapped;

	// Constructors.
	UFont();

	// UObject interface.
	void Serialize( FArchive& Ar );

	// UFont interface
	TCHAR RemapChar(TCHAR ch)
	{
		TCHAR *p;
		if( !IsRemapped )
			return ch;
		p = CharRemap.Find(ch);
		return p ? *p : 32; // return space if not found.
	}
};

/*----------------------------------------------------------------------------
	The End.
----------------------------------------------------------------------------*/
