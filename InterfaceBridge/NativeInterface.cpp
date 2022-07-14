#include "pch.h"
#include "NativeInterface.h"
#include "DialogInterfaceWrapper.h"

NativeInterface::NativeInterface()
{
}

NativeInterface::~NativeInterface()
{
}

int NativeInterface::ShowModalDialog(HWND hwnd)
{
	IntPtr managedHWND(hwnd);
	InterfaceBridge::DialogInterfaceWrapper^ diw = gcnew InterfaceBridge::DialogInterfaceWrapper();
	return diw->ShowModalDialog(managedHWND);
}