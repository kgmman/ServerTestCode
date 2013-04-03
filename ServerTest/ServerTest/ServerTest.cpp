// ServerTest.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <WinSock2.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>

int _tmain(int argc, _TCHAR* argv[])
{
	WSADATA wsaData;
	SOCKET hServSock;
	SOCKET hClntSock;
	SOCKADDR_IN servAddr;
	SOCKADDR_IN clntAddr;

	char message[] = "Hello World!";

	int szClntAddr;

	if( WSAStartup(MAKEWORD(2,2), &wsaData) != 0 )
	{
	}

	hServSock = socket(PF_INET, SOCK_STREAM, 0);

	if( hServSock )
	{

	}

	memset(&servAddr, 0, sizeof(servAddr));

	servAddr.sin_family = AF_INET;
	servAddr.sin_addr.s_addr = htonl(INADDR_ANY);
	servAddr.sin_port = htons(9190);

	if( bind(hServSock, (SOCKADDR*)&servAddr, sizeof(servAddr)) == SOCKET_ERROR )
	{

	}

	if( listen(hServSock, 5) == SOCKET_ERROR )
	{

	}

	szClntAddr = sizeof(clntAddr);
	hClntSock = accept(hServSock, (SOCKADDR*)&clntAddr, &szClntAddr);

	if( hClntSock == INVALID_SOCKET )
	{

	}

	send(hClntSock, message, sizeof(message), 0);

	closesocket(hClntSock);
	closesocket(hServSock);

	WSACleanup();

	return 0;
}