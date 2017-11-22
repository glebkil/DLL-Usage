#pragma once
#include "stdafx.h"
#ifdef __EXPORT__
#define _DECL_ __declspec(dllexport)
#else
#define _DECL_ __declspec(dllimport)
#endif

class _DECL_ Memalloc {
public:
	static void test_function();
};
