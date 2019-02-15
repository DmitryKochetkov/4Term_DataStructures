#pragma once
#include <iostream>

namespace Practice1 {

	using namespace System;

	static std::string SystemToStd(System::String ^s)
	{
		using namespace System::Runtime::InteropServices;
		const char* ptr = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		return std::string(ptr);
	}

	static System::String^ StdToSystem(std::string s)
	{
		System::String^ res = gcnew System::String(s.c_str());
		return res;
	}
}