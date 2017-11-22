#pragma once
#include "stdafx.h"
#ifdef __MYDLL__
#define SIMPLE_EXAMPLE __declspec(dllexport)
#else
#define SIMPLE_EXAMPLE __declspec(dllimport)
#endif

void test_function();