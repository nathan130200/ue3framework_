/*
#############################################################################################
# Blacklight: Retribution (0.951) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: SdkHeaders.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

/*
# ========================================================================================= #
# Defines
# ========================================================================================= #
*/

//#define GObjects			0x013D4630
//#define GNames			0x01392318

unsigned long GObjects			= NULL;
unsigned long GNames			= NULL;

/*
# ========================================================================================= #
# Structs
# ========================================================================================= #
*/

template< class T > struct TArray 
{ 
public: 
	T* Data; 
	int Count; 
	int Max; 

public: 
	TArray() 
	{ 
		Data = NULL; 
		Count = Max = 0; 
	}; 

public: 
	int Num() 
	{ 
		return this->Count; 
	}; 

	T& operator() ( int i ) 
	{ 
		return this->Data[ i ]; 
	}; 

	const T& operator() ( int i ) const 
	{ 
		return this->Data[ i ]; 
	}; 

	void Add ( T InputData ) 
	{ 
		Data = (T*) realloc ( Data, sizeof ( T ) * ( Count + 1 ) ); 
		Data[ Count++ ] = InputData; 
		Max = Count; 
	}; 

	void Clear() 
	{ 
		free ( Data ); 
		Count = Max = 0; 
	}; 
}; 

struct FNameEntry 
{ 
	unsigned char	UnknownData00[ 0x10 ]; 
	char			Name[ 0x10 ]; 
}; 

struct FName 
{ 
	int				Index; 
	unsigned char	unknownData00[ 0x4 ]; 

	FName() : Index ( 0 ) {}; 

	FName ( int i ) : Index ( i ) {}; 

	~FName() {}; 

	FName ( char* FindName ) 
	{ 
		static TArray< int > NameCache; 

		for ( int i = 0; i < NameCache.Count; ++i ) 
		{ 
		if ( ! strcmp ( this->Names()->Data[ NameCache ( i ) ]->Name, FindName ) ) 
			{ 
				Index = NameCache ( i ); 
				return; 
			} 
		} 

		for ( int i = 0; i < this->Names()->Count; ++i ) 
		{ 
			if ( this->Names()->Data[ i ] ) 
			{ 
				if ( ! strcmp ( this->Names()->Data[ i ]->Name, FindName ) ) 
				{ 
					NameCache.Add ( i ); 
					Index = i; 
				} 
			} 
		} 
	}; 

	static TArray< FNameEntry* >* Names() 
	{ 
		return (TArray< FNameEntry* >*) GNames; 
	}; 

	char* GetName() 
	{ 
		return this->Names()->Data[ Index ]->Name; 
	}; 

	bool operator == ( const FName& A ) const 
	{ 
		return ( Index == A.Index ); 
	}; 
}; 

struct FString : public TArray< wchar_t > 
{ 
	FString() {}; 

	FString ( wchar_t* Other ) 
	{ 
		this->Max = this->Count = *Other ? ( wcslen ( Other ) + 1 ) : 0; 

		if ( this->Count ) 
			this->Data = Other; 
	}; 

	~FString() {}; 

	FString operator = ( wchar_t* Other ) 
	{ 
		if ( this->Data != Other ) 
		{ 
			this->Max = this->Count = *Other ? ( wcslen ( Other ) + 1 ) : 0; 

			if ( this->Count ) 
				this->Data = Other; 
		} 

		return *this; 
	}; 
}; 

struct FScriptDelegate 
{ 
	unsigned char UnknownData00[ 0xC ]; 
}; 

/*
# ========================================================================================= #
# Includes
# ========================================================================================= #
*/

#include "SDK_HEADERS\Core_structs.h"
#include "SDK_HEADERS\Core_classes.h"
#include "SDK_HEADERS\Core_f_structs.h"
#include "SDK_HEADERS\Core_functions.h"
#include "SDK_HEADERS\Engine_structs.h"
#include "SDK_HEADERS\Engine_classes.h"
#include "SDK_HEADERS\Engine_f_structs.h"
#include "SDK_HEADERS\Engine_functions.h"
#include "SDK_HEADERS\GFxUI_structs.h"
#include "SDK_HEADERS\GFxUI_classes.h"
#include "SDK_HEADERS\GFxUI_f_structs.h"
#include "SDK_HEADERS\GFxUI_functions.h"
#include "SDK_HEADERS\GameFramework_structs.h"
#include "SDK_HEADERS\GameFramework_classes.h"
#include "SDK_HEADERS\GameFramework_f_structs.h"
#include "SDK_HEADERS\GameFramework_functions.h"
#include "SDK_HEADERS\IpDrv_structs.h"
#include "SDK_HEADERS\IpDrv_classes.h"
#include "SDK_HEADERS\IpDrv_f_structs.h"
#include "SDK_HEADERS\IpDrv_functions.h"
#include "SDK_HEADERS\XAudio2_structs.h"
#include "SDK_HEADERS\XAudio2_classes.h"
#include "SDK_HEADERS\XAudio2_f_structs.h"
#include "SDK_HEADERS\XAudio2_functions.h"
#include "SDK_HEADERS\AkAudio_structs.h"
#include "SDK_HEADERS\AkAudio_classes.h"
#include "SDK_HEADERS\AkAudio_f_structs.h"
#include "SDK_HEADERS\AkAudio_functions.h"
#include "SDK_HEADERS\WinDrv_structs.h"
#include "SDK_HEADERS\WinDrv_classes.h"
#include "SDK_HEADERS\WinDrv_f_structs.h"
#include "SDK_HEADERS\WinDrv_functions.h"
#include "SDK_HEADERS\OnlineSubsystemPW_structs.h"
#include "SDK_HEADERS\OnlineSubsystemPW_classes.h"
#include "SDK_HEADERS\OnlineSubsystemPW_f_structs.h"
#include "SDK_HEADERS\OnlineSubsystemPW_functions.h"
#include "SDK_HEADERS\FoxGame_structs.h"
#include "SDK_HEADERS\FoxGame_classes.h"
#include "SDK_HEADERS\FoxGame_f_structs.h"
#include "SDK_HEADERS\FoxGame_functions.h"
#include "SDK_HEADERS\FoxGameContent_CHA_structs.h"
#include "SDK_HEADERS\FoxGameContent_CHA_classes.h"
#include "SDK_HEADERS\FoxGameContent_CHA_f_structs.h"
#include "SDK_HEADERS\FoxGameContent_CHA_functions.h"
#include "SDK_HEADERS\FoxGameContent_DLC1_structs.h"
#include "SDK_HEADERS\FoxGameContent_DLC1_classes.h"
#include "SDK_HEADERS\FoxGameContent_DLC1_f_structs.h"
#include "SDK_HEADERS\FoxGameContent_DLC1_functions.h"
#include "SDK_HEADERS\FoxGameContent_DLC2_structs.h"
#include "SDK_HEADERS\FoxGameContent_DLC2_classes.h"
#include "SDK_HEADERS\FoxGameContent_DLC2_f_structs.h"
#include "SDK_HEADERS\FoxGameContent_DLC2_functions.h"
#include "SDK_HEADERS\FoxGameContent_WPN_structs.h"
#include "SDK_HEADERS\FoxGameContent_WPN_classes.h"
#include "SDK_HEADERS\FoxGameContent_WPN_f_structs.h"
#include "SDK_HEADERS\FoxGameContent_WPN_functions.h"
#include "SDK_HEADERS\FoxGameContent_WPNC_structs.h"
#include "SDK_HEADERS\FoxGameContent_WPNC_classes.h"
#include "SDK_HEADERS\FoxGameContent_WPNC_f_structs.h"
#include "SDK_HEADERS\FoxGameContent_WPNC_functions.h"
#include "SDK_HEADERS\FoxGameContent_WPNG_structs.h"
#include "SDK_HEADERS\FoxGameContent_WPNG_classes.h"
#include "SDK_HEADERS\FoxGameContent_WPNG_f_structs.h"
#include "SDK_HEADERS\FoxGameContent_WPNG_functions.h"
#include "SDK_HEADERS\FoxGameContent_WPNS_structs.h"
#include "SDK_HEADERS\FoxGameContent_WPNS_classes.h"
#include "SDK_HEADERS\FoxGameContent_WPNS_f_structs.h"
#include "SDK_HEADERS\FoxGameContent_WPNS_functions.h"
