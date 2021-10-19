#pragma once
#pragma comment(lib, "ws2_32")
#pragma warning(disable:4996)

#include <iostream>
#include <exception>
#include <string>
#include <thread>

/* 반드시 WinSock2.h 먼저 정의해주어야 합니다. */
#include <WinSock2.h>
#include <Windows.h>
#include <WS2tcpip.h> // inet_pton()

#define BUFSIZE (0x1000)

namespace mawile {
	class ReverseShell {
	public:
		void Listen(int);
		void Connect(const char*, int);

		ReverseShell();
		ReverseShell(int);
		ReverseShell(const char*, int);
		~ReverseShell();

	private:
		SOCKET svSocket, clSocket;

	};
}