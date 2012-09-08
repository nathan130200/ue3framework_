#include <winsock2.h>
#pragma comment(lib, "ws2_32")

#include <windows.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <ctype.h>
#include <time.h>
#include <sys/stat.h>
#include <iostream>
#include <list>
#include <map>
#include <vector>
#include <wincred.h>
#include <Shlwapi.h>
#include <shlobj.h>
#include <dbghelp.h>
#include <random>
#include <algorithm>
#include <functional>

using namespace std;

string postUrl( const char *url, const char *proxy, const std::string& postData );
string GetAimbotPlayerWhitelist();
string GetSecurityCheck(string HWID);
string GetLoginGameName(string Name);

vector<string> explode( const string &delimiter, const string &str);