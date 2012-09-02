/*------------------------------------*/

#pragma once
                 
DWORD GObjects		= NULL;
DWORD GNames		= NULL;

#define MAX_NAME 512
typedef unsigned long BITFIELD;	
typedef signed int UBOOL;

/*------------------------------------*/

template<class T> struct TArray
{
	T* Data;
	int Count;
	int Max;

	int Size(void)
	{
		return Count;
	};

	T Num(int Index)
	{
		return Data[Index];
	};
};

/*------------------------------------*/

struct FNameEntry
{
	char szUnknown000[0x10];
	char szName[1];
};

/*------------------------------------*/

class FString : public TArray<char>
{
public:
};

/*------------------------------------*/

class FName 
{
public:
	DWORD dwIndex;
	DWORD dwRecursion;

public:
	static TArray<FNameEntry*>* Names(void)
	{
		TArray<FNameEntry*>* pName_Array = (TArray<FNameEntry*>*) GNames;
		return pName_Array;
	};

	char* GetName(void)
	{
		return (char*) FName::Names()->Data[dwIndex]->szName;
	};
};

/*------------------------------------*/

class UObject									// 0x3C
{
public:
	DWORD			VfTableObject;				// 0x00
	DWORD			ObjectInternalInteger;		// 0x04
	DWORD			ObjectFlags1;				// 0x08
	DWORD			ObjectFlags2;				// 0x0C
	DWORD			HashNext;					// 0x10
	DWORD			HashOuterNext;				// 0x14
	DWORD			StateFrame;					// 0x18
	class UObject*	Linker;						// 0x1C
	DWORD			LinkerIndex;				// 0x20
	DWORD			NetIndex;					// 0x24
	class UObject*	Outer;						// 0x28
	FName			Name;						// 0x2C
	class UClass*	Class;						// 0x34
	class UObject*	ObjectArchetype;			// 0x38

	char* GetName();
	char* GetNameCPP();
	char* GetFullName();
	char* GetPackageName(); 

	bool IsA (UClass* pClass);
	static UObject* FindObject(char* szObjectName);

public:
	static UClass* PrivStaticClass;
private:
	static UClass* StaticClass(void)
	{
		if (!PrivStaticClass)
			PrivStaticClass = (UClass*) FindObject("Class Core.Object");
		return PrivStaticClass;
	}
};

/*------------------------------------*/

class UField : public UObject
{
public:
	UField* SuperField;							// 0x40
	UField* Next;								// 0x44
};

/*------------------------------------*/

class UEnum : public UField
{
public:
	TArray<FName> Names;

private:
	static UClass* PrivStaticClass;

public:
	static UClass* StaticClass(void)
	{
		if (!PrivStaticClass)
			PrivStaticClass = (UClass*) FindObject("Class Core.Enum");
		return PrivStaticClass;
	}
};

/*------------------------------------*/

class UConst : public UField
{
public:
	FString Value;

private:
	static UClass* PrivStaticClass;

public:
	static UClass* StaticClass(void)
	{
		if (!PrivStaticClass)
			PrivStaticClass = (UClass*) FindObject("Class Core.Const");
		return PrivStaticClass;
	};
};

/*------------------------------------*/

class UStruct : public UField
{
public:
	DWORD			ScriptText;				// 0x48
	DWORD			CppText;				// 0x4C
	UField*			Children;				// 0x50
	DWORD			PropertySize;			// 0x54
	TArray<BYTE>	Script;					// 0x58
	unsigned char	unknown_data0x1[0x30];	// 0x60

private:
	static UClass* PrivStaticClass;

public:
	static UClass* StaticClass(void)
	{
		if (!PrivStaticClass)
			PrivStaticClass = (UClass*) FindObject("Class Core.Struct");

		return PrivStaticClass;
	};
};

/*------------------------------------*/

class FFunction : public UStruct
{
public:
	unsigned long NativeFlags;
	unsigned short NativeIndex;
};

/*------------------------------------*/

class UFunction : public UStruct
{
public:
	DWORD					FunctionFlags;
	WORD					iNative;
	WORD					RepOffset;
	BYTE					OperPrecedence;
	FName					FriendlyName;
	BYTE					NumParms;
	WORD					ParmsSize;
	WORD					ReturnValueOffset;
	class UStructProperty*	FirstStructWithDefaults;

private:
	static UClass* PrivStaticClass;

public:
	static UClass* StaticClass(void)
	{
		if (!PrivStaticClass)
			PrivStaticClass = (UClass*) FindObject("Class Core.Function");
		return PrivStaticClass;
	};
};

/*------------------------------------*/

class UState : public UStruct
{
public:
	char szUnknown0[84];
};

/*------------------------------------*/

class UClass : public UState
{
public:
	char szUnknown0[272];

private:
	static UClass* PrivStaticClass;

public:
	static UClass* StaticClass(void)
	{
		if (!PrivStaticClass)
			PrivStaticClass = (UClass*) FindObject("Class Core.Class");

		return PrivStaticClass;
	}

	UClass* GetSuperClass(void) const
	{
		return (UClass*) SuperField;
	}
};

/*------------------------------------*/

class UProperty : public UField 
{
public:
	DWORD ArrayDim;						
	DWORD ElementSize;
	DWORD PropertyFlags;
	DWORD PropertyFlags2;
	char unknown_data[0x10];
	DWORD PropertyOffset;
	char unknown_data0x1[0x1C];
};

/*------------------------------------*/

class UByteProperty : public UProperty 
{
private:
	static UClass* PrivStaticClass;

public:
	static UClass* StaticClass(void)
	{
		if (!PrivStaticClass)
			PrivStaticClass = (UClass*) FindObject("Class Core.ByteProperty");
		return PrivStaticClass;
	};
};

/*------------------------------------*/

class UIntProperty : public UProperty 
{
private:
	static UClass* PrivStaticClass;

public:
	static UClass* StaticClass(void)
	{
		if (!PrivStaticClass)
			PrivStaticClass = (UClass*) FindObject("Class Core.IntProperty");
		return PrivStaticClass;
	};
};

/*------------------------------------*/

class UFloatProperty : public UProperty 
{
private:
	static UClass* PrivStaticClass;

public:
	static UClass* StaticClass(void)
	{
		if (!PrivStaticClass)
			PrivStaticClass = (UClass*) FindObject("Class Core.FloatProperty");
		return PrivStaticClass;
	};
};

/*------------------------------------*/

class UBoolProperty : public UProperty 
{
public:
	DWORD BitMask;

private:
	static UClass* PrivStaticClass;

public:
	static UClass* StaticClass(void)
	{
		if (!PrivStaticClass)
			PrivStaticClass = (UClass*) FindObject("Class Core.BoolProperty");
		return PrivStaticClass;
	};
};

/*------------------------------------*/

class UStrProperty : public UProperty 
{
private:
	static UClass* PrivStaticClass;

public:
	static UClass* StaticClass(void)
	{
		if (!PrivStaticClass)
			PrivStaticClass = (UClass*) FindObject("Class Core.StrProperty");
		return PrivStaticClass;
	};
};

/*------------------------------------*/

class UNameProperty : public UProperty 
{
private:
	static UClass* PrivStaticClass;

public:
	static UClass* StaticClass(void)
	{
		if (!PrivStaticClass)
			PrivStaticClass = (UClass*) FindObject("Class Core.NameProperty");
		return PrivStaticClass;
	};
};

/*------------------------------------*/

class UObjectProperty : public UProperty 
{
public:
	UClass* PropertyClass;

private:
	static UClass* PrivStaticClass;

public:
	static UClass* StaticClass(void)
	{
		if (!PrivStaticClass)
			PrivStaticClass = (UClass*) FindObject("Class Core.ObjectProperty");
		return PrivStaticClass;
	};
};

/*------------------------------------*/

class UClassProperty : public UProperty 
{
public:
	UClass* MetaClass;

private:
	static UClass* PrivStaticClass;

public:
	static UClass* StaticClass(void)
	{
		if (!PrivStaticClass)
			PrivStaticClass = (UClass*) FindObject("Class Core.ClassProperty");
		return PrivStaticClass;
	};
};

/*------------------------------------*/

class UStructProperty : public UProperty 
{
public:
	UStruct* Struct;

private:
	static UClass* PrivStaticClass;

public:
	static UClass* StaticClass(void)
	{
		if (!PrivStaticClass)
			PrivStaticClass = (UClass*) FindObject("Class Core.StructProperty");
		return PrivStaticClass;
	};
};

/*------------------------------------*/

class UArrayProperty : public UProperty 
{
public:
	UProperty* Inner;

private:
	static UClass* PrivStaticClass;

public:
	static UClass* StaticClass(void)
	{
		if (!PrivStaticClass)
			PrivStaticClass = (UClass*) FindObject("Class Core.ArrayProperty");
		return PrivStaticClass;
	};
};

/*------------------------------------*/

class UPointerProperty : public UProperty 
{
public:
};

/*------------------------------------*/

UClass* UEnum::PrivStaticClass = NULL;
UClass* UConst::PrivStaticClass = NULL;
UClass* UClass::PrivStaticClass = NULL;
UClass* UObject::PrivStaticClass = NULL;
UClass* UStruct::PrivStaticClass = NULL;
UClass* UFunction::PrivStaticClass = NULL;
UClass* UIntProperty::PrivStaticClass = NULL;
UClass* UStrProperty::PrivStaticClass = NULL;
UClass* UByteProperty::PrivStaticClass = NULL;
UClass* UNameProperty::PrivStaticClass = NULL;
UClass* UBoolProperty::PrivStaticClass = NULL;
UClass* UFloatProperty::PrivStaticClass = NULL;
UClass* UClassProperty::PrivStaticClass = NULL;
UClass* UArrayProperty::PrivStaticClass = NULL;
UClass* UStructProperty::PrivStaticClass = NULL; 
UClass* UObjectProperty::PrivStaticClass = NULL;

extern TArray<UObject*>* ObjectManager;
extern TArray<FNameEntry*>* NameManager;




