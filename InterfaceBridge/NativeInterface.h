#pragma once

#ifdef INTERFACEBRIDGE_EXPORTS 
#define INTERFACEBRIDGE_API __declspec( dllexport )
#else
#define INTERFACEBRIDGE_API __declspec( dllimport )
#endif

#ifndef _WINDOWS_
#include <Windows.h>
#endif

class INTERFACEBRIDGE_API NativeInterface
{
public:
	NativeInterface();
	~NativeInterface();

	static int ShowModalDialog(HWND hwnd);
};