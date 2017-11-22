// Client App.cpp : Defines the entry point for the console application.
//
/*Разработать приложение для работы с динамическим массивом, использующее библиотеку динамической компоновки. Предусмотреть различные способы подключения DLL:
a. неявное связывание;
b. явное связывание;
c. отложенная загрузка.*/

#include "stdafx.h"
#include "header.h"//dll header
#pragma comment  (lib, "memory alloc dll.lib"); 
#include <iostream>

int main()
{
	Memalloc::test_function();
	int z;
	std::cin >> z;
    return 0;
}

