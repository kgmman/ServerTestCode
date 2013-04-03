// ClientTest.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <WinSock2.h>

int _tmain(int argc, _TCHAR* argv[])
{
	WSADATA wsaData;
	SOCKET hSocket;
	SOCKADDR_IN servAddr;

	char message[30];

	int strlen;

	if( WSAStartup(MAKEWORD(2, 2), &wsaData) != 0 )
	{

	}

	hSocket = socket(PF_INET, SOCK_STREAM, 0);

	if( hSocket == INVALID_SOCKET )
	{

	}

	memset(&servAddr, 0, sizeof(servAddr));
	servAddr.sin_family = AF_INET;
	servAddr.sin_addr.s_addr = inet_addr("192.168.31.145");
	servAddr.sin_port = htons(9190);

	if( connect(hSocket, (SOCKADDR*)&servAddr, sizeof(servAddr)) == SOCKET_ERROR )
	{

	}

	strlen = recv(hSocket, message, sizeof(message) - 1, 0);

	if( strlen == -1 )
	{

	}

	printf("message from server : %s \m", message);

	closesocket(hSocket);
	WSACleanup();

	return 0;
}

