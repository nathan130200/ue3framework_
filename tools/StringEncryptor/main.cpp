#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>

void print_data_array(unsigned char *c, int len, char *name, FILE *f)
{
	int i, x;

	fprintf(f, "\nstatic unsigned char %s[%d] = \n{\n	", name, len);

	for (i = 0, x = 0; i < len; i++, x++)
	{
		if (x > 15)
		{
			fprintf(f, "\n	");
			x = 0;
		}

		fprintf(f, "0x%02X", c[i]);
		
		if (i < len-1)
			fprintf(f, ", ");
	}
	fprintf(f, "\n};\n");
}

PBYTE GenerateRandomBytes(int count)
{
	PBYTE Data = new BYTE[count];
	srand(time(NULL));

	for (int i = 0; i < count; i++)
		Data[i] = rand() & 0xFF;

	return Data;
}

LPBYTE EncryptData(unsigned char* data, unsigned char* key, unsigned int size) {
	unsigned int A = 0, B = 0;

	for (unsigned int i = 0, keycounter = 0; i < size; i++, keycounter++) {
		//data[i] ^= key[size % 0xF];
		A = data[i];
		B &= 0xFF;
		B ^= A;
		B += i;
		B &= 0xFF;
		B ^= key[i % 0xF];
		data[i] = B;
	}
	return data;
}

LPBYTE DecryptData(unsigned char* data, unsigned char* key, unsigned int size) {
	unsigned int A = 0, B = 0, C = 0, D = 0;

	for (unsigned int i = 0, keycounter = 0; i < size; i++, keycounter++) {
		//data[i] ^= key[size % 0xF];
		A = data[i];
		B = C & 0xFF;
		C = A;
		A ^= key[i % 0xF];
		A -= i;
		A ^= B;
		data[i] = A;
	}
	return data;
}

VOID EncryptAndOutputString(CHAR *StrName, PVOID Data, DWORD Length, PBYTE Key, DWORD KeyLength, FILE *f)
{
	PBYTE Unencrypted = new BYTE[Length];
	ZeroMemory(Unencrypted, Length);
	memcpy((PBYTE)Unencrypted, Data, Length);

	PBYTE Encrypted = EncryptData((PBYTE)Unencrypted, Key, Length);
	print_data_array(Encrypted, Length, StrName, f);
}

DWORD wcharsize(PWCHAR Str)
{
	return (wcslen(Str) * 2) + 2;
}

VOID GenerateHFile()
{
	PBYTE Key = GenerateRandomBytes(16);

	FILE *f = fopen("strings.h", "wb");

	if (!f)
	{
		printf("Failed to create output file!\n");
		return;
	}

	fprintf(f, "#ifndef __STRINGS_H_\n");
	fprintf(f, "#define __STRINGS_H_\n\n");

	print_data_array(Key, 16, "CipherKey", f);

	//Menu
	EncryptAndOutputString("MenuESP", L"ESP", wcharsize(L"ESP"), Key, 16, f);
	EncryptAndOutputString("MenuAimBot", L"AimBot", wcharsize(L"AimBot"), Key, 16, f);
	EncryptAndOutputString("MenuMisc", L"Misc", wcharsize(L"Misc"), Key, 16, f);

	//Menu ESP
	EncryptAndOutputString("MenuESPNames", L"Names", wcharsize(L"Names"), Key, 16, f);
	EncryptAndOutputString("MenuESPHealth", L"Health", wcharsize(L"Health"), Key, 16, f);
	EncryptAndOutputString("MenuESPDistance", L"Distance", wcharsize(L"Distance"), Key, 16, f);
	EncryptAndOutputString("MenuESPBoxs", L"Boxs", wcharsize(L"Boxs"), Key, 16, f);

	//Menu ESP
	EncryptAndOutputString("MenuAimbot180", L"Aimbot 180", wcharsize(L"Aimbot 180"), Key, 16, f);
	EncryptAndOutputString("MenuAimbot360", L"Aimbot 360", wcharsize(L"Aimbot 360"), Key, 16, f);
	EncryptAndOutputString("MenuAimbotGeneral", L"AimBot General", wcharsize(L"AimBot General"), Key, 16, f);

	//Menu Misc
	EncryptAndOutputString("MenuMiscCrosshair", L"Crosshair", wcharsize(L"Crosshair"), Key, 16, f);
	EncryptAndOutputString("MenuMiscGaydar", L"Gaydar", wcharsize(L"Gaydar"), Key, 16, f);
	EncryptAndOutputString("MenuMiscNoRecoil", L"NoRecoil", wcharsize(L"NoRecoil"), Key, 16, f);
	EncryptAndOutputString("MenuMiscShowFps", L"ShowFps", wcharsize(L"ShowFps"), Key, 16, f);

	//Hack
	EncryptAndOutputString("Engine", "GameEngine Transient.GameEngine", strlen("GameEngine Transient.GameEngine") + 1, Key, 16, f);
	EncryptAndOutputString("Render", "PostRender", strlen("PostRender") + 1, Key, 16, f);
	EncryptAndOutputString("WHealth", L"H: %i", wcharsize(L"H: %i"), Key, 16, f);
	EncryptAndOutputString("WDistance", L"D: %0.2f", wcharsize(L"D: %0.2f"), Key, 16, f);

	fprintf(f, "\n#endif\n\n");

	fflush(f);
	fclose(f);
}

int main(int argc, char **argv)
{
	GenerateHFile();
	return 0;
}
