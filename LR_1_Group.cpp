#include "pch.h"
#include "LR_1_Group.h"
#include "iostream"

int __stdcall OutGroupInt(int a)
{
	return a;
}

void __stdcall OutGroupChar()
{
	const char* a = "571227";
	std::cout << a;
}

