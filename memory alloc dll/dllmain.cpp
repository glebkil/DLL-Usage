// dllmain.cpp : Defines the entry point for the DLL application.
/*Разработать библиотеку динамической компоновки (DLL), которая включает в себя следующие функции для работы с динамическим массивом:
a. функцию распределения динамической памяти;
b. функцию инициализации динамического массива;
c. функцию печати динамического массива;
d. функцию удаления динамического массива;
e. функцию добавления элемента в конец массива;
f. функцию вставки элемента по указанному индексу;
g. функцию удаления элемента по указанному индексу.
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


