// Client App.cpp : Defines the entry point for the console application.
//
/*����������� ���������� ��� ������ � ������������ ��������, ������������ ���������� ������������ ����������. ������������� ��������� ������� ����������� DLL:
a. ������� ����������;
b. ����� ����������;
c. ���������� ��������.*/

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

