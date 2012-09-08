#include "web.h"


vector<string> explode( const string &delimiter, const string &str)
{
    vector<string> arr;

    int strleng = str.length();
    int delleng = delimiter.length();
    if (delleng==0)
        return arr;//no change

    int i=0;
    int k=0;
    while( i<strleng )
    {
        int j=0;
        while (i+j<strleng && j<delleng && str[i+j]==delimiter[j])
            j++;
        if (j==delleng)//found delimiter
        {
            arr.push_back(  str.substr(k, i-k) );
            i+=delleng;
            k=i;
        }
        else
        {
            i++;
        }
    }
    arr.push_back(  str.substr(k, i-k) );
    return arr;
}

char redirect[300];

void SetStringCase( char *pszString, bool bLower )
{
	if( pszString == NULL )
		return;

	for( ;*pszString != NULL; ++pszString )
	{
		if( (bLower == true && *pszString >= 'A' && *pszString <= 'Z')
		|| (bLower == false && *pszString >= 'a' && *pszString <= 'z') )
			*pszString = bLower == true ? *pszString + 32 : *pszString - 32;
	}
}

void Hex2Char(char const* szHex, unsigned char& rch)
{
	rch = 0;
	for(int i=0; i<2; i++)
	{
		if(*(szHex + i) >='0' && *(szHex + i) <= '9')
			rch = (rch << 4) + (*(szHex + i) - '0');
		else if(*(szHex + i) >='A' && *(szHex + i) <= 'F')
			rch = (rch << 4) + (*(szHex + i) - 'A' + 10);
		else
			break;
	}
}    

void Str2Long(char const* pszHexStr, unsigned char* pucCharStr)
{
	char sztmp[30];
	strcpy(sztmp, pszHexStr);
	if(strlen(sztmp) < 8)
	{
		strcpy(sztmp, "00000000");
		strcpy(&sztmp[8 - strlen(pszHexStr)], pszHexStr);

		//for(int i = 0; i < 8 - strlen(sztmp); i++) sprintf(sztmp, "0%s", sztmp);
	}
	SetStringCase(sztmp, false);

	int i;
	unsigned char ch;
	for(i=0; i<4; i++)
	{
		Hex2Char(&sztmp[2*i], ch);
		pucCharStr[3-i] = ch;
	}
}

bool gWrite(void *dest, void *src, int len)
{
	DWORD wback = 0;
	if(VirtualProtect((void*)dest, (SIZE_T)len, PAGE_EXECUTE_READWRITE, &wback) )
	{
		_asm{
			pushad;
			mov	esi, src;
			mov	edi, dest;
			mov	ecx, len;
			rep movs byte ptr [edi],[esi];
			popad;
		}
		VirtualProtect((void*)dest, (SIZE_T)len, wback, &wback);
		return true;
	}return false;
}

std::string postUrl( const char *url, const char *proxy, const std::string& postData )
{
	char buff[10000], 
		servname[200], 
		cpath[200], 
		*split;
	WSADATA wsaData;
	struct hostent *hp;	
	unsigned int addr;
	struct sockaddr_in server;
	SOCKET conn; 
	int port=0; 
	int ip = 0;
	if(WSAStartup(0x202,&wsaData)) 
	{
		return std::string("");
	}
	if((conn=socket(AF_INET,SOCK_STREAM,IPPROTO_TCP)) == INVALID_SOCKET)
	{
		WSACleanup();
		return std::string("");
	}
	if(strnicmp(url, "http://", 7) == 0)
		url += 7;

	if(!(split = strstr((char*)url, "/"))) 
		strcpy(servname, url); 
	else
	{
		strncpy(servname, url, split - url); 
		servname[split - url] = 0;
		strcpy(cpath, split);

	}
	if((addr = inet_addr(servname)) == INADDR_NONE)
		hp=gethostbyname(servname);
	else											
		hp=gethostbyaddr((char*)&addr,sizeof(addr),AF_INET);

	if(!hp)
	{
		memset(servname, 0, strlen(servname));
		memset(cpath, 0, strlen(cpath));

		closesocket(conn);
		WSACleanup();
		return 0;
	}

	server.sin_addr.s_addr=*((unsigned long*)hp->h_addr);
	server.sin_family=AF_INET;
	server.sin_port=htons(80);

	memset(buff, 0, 1000);

	if(hp->h_name)				
		gWrite(hp->h_name, buff, strlen(hp->h_name));

	int r = 0;
	while(hp->h_aliases[r])		
		gWrite(hp->h_aliases[r], buff, strlen(hp->h_aliases[r++]));

	r = 0;
	while(hp->h_addr_list[r])	
		gWrite(hp->h_addr_list[r], buff, strlen(hp->h_addr_list[r++]));

	if(connect(conn,(struct sockaddr*)&server,sizeof(server)))
	{
		memset(servname, 0, strlen(servname));
		memset(cpath, 0, strlen(cpath));
		closesocket(conn);
		WSACleanup();
		return std::string("");	
	}

	std::ostringstream post;
	post << "POST "
		 << cpath << " HTTP/1.1\r\nHost: "
		 << servname << "\r\nUser-Agent: Mozilla/5.0 (Windows; U; Windows NT 5.1; en-US; rv:1.8.1.3) Gecko/20070309\r\nContent-Length: "
		 << postData.size() << "\r\nContent-Type: application/x-www-form-urlencoded\r\nConnection: close\r\n\r\n"
		 << postData;

	send(conn,post.str().data(),post.str().size(),0);
	shutdown(conn, SD_SEND);

	memset(cpath, 0, strlen(cpath));
	memset(buff, 0, strlen(buff));

	int i = 0;
	std::string strr = "";
	do
	{
		i = recv(conn, buff, sizeof(buff), 0); 
		if(i > 0)
		{
			buff[i] = 0;
			strr += buff;
		}
	} while (i > 0);
	closesocket(conn);
	WSACleanup();
	return strr;
}

string GetAimbotPlayerWhitelist()
{
		std::ostringstream os;
		os << "1" << "&&" << "0";
		string ret = postUrl("http://gamehacking.net/hack/aimbot.php",NULL,os.str());

		return ret;
}

string GetSecurityCheck(string HWID)
{
	std::ostringstream os;
	os << HWID << "&&" << "0" << "&&" << "BR";
	string ret = postUrl("http://gamehacking.net/hack/Check.php",NULL,os.str());

	return ret;
}

string GetLoginGameName(string Name)
{
	std::ostringstream os;
	os << Name << "&&" << "0" << "&&" << "BR";
	string ret = postUrl("http://gamehacking.net/hack/ingamename.php",NULL,os.str());

	return ret;
}

//string INSERT_UGDE(const char* GID, const char* LID)
//{
//		std::ostringstream os;
//		os << GID << "&&" << LID;
//		return postUrl("http://battlefieldemulator.com/server/UGDE.php",NULL,os.str());
//}
