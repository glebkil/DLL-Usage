// dllmain.cpp : Defines the entry point for the DLL application.
/*����������� ���������� ������������ ���������� (DLL), ������� �������� � ���� ��������� ������� ��� ������ � ������������ ��������:
a. ������� ������������� ������������ ������;
b. ������� ������������� ������������� �������;
c. ������� ������ ������������� �������;
d. ������� �������� ������������� �������;
e. ������� ���������� �������� � ����� �������;
f. ������� ������� �������� �� ���������� �������;
g. ������� �������� �������� �� ���������� �������.
2.*/
#include <windows.h>
#define __EXPORT__
#include "header.h"
#include <iostream>
#include "stdafx.h"


BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
					 )
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}

void Memalloc::test_function()
{
	std::cout << "success!";
}


