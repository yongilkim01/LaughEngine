#pragma once

#ifdef WIN32

#include <Windows.h>

#endif

#ifdef BUILD_DLL
	#define LAUGH_API __declspec(dllexport)
#else
	#define LAUGH_API __declspec(dllimport)
#endif