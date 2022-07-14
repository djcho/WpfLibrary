#pragma once

using namespace System;
using namespace WpfLibrary;

namespace InterfaceBridge {

	public ref class DialogInterfaceWrapper
	{
	public:
		int ShowModalDialog(IntPtr handle);
	};
}