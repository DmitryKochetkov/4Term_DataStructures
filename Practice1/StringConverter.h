#pragma once
#include <iostream>

using namespace System;

namespace Practice1 {

	std::string SystemToStd(String ^s)
	{
		using namespace Runtime::InteropServices;
		const char* ptr = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		return std::string(ptr);
	}

	String^ StdToSystem(std::string s)
	{
		String^ res = gcnew String(s.c_str());
		return res;
	}

}