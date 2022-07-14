#include "pch.h"
#include "DialogInterfaceWrapper.h"

namespace InterfaceBridge {

	int DialogInterfaceWrapper::ShowModalDialog(IntPtr handle)
	{
		DialogInterface^ c = gcnew DialogInterface();
		int result = c->ShowModalDialog(handle);
		return result;
	}
}