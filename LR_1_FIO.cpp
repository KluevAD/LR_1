#include "pch.h"
#include "LR_1_FIO.h"
#include "iostream"
#include <locale.h>
#include <wchar.h>
#include <stdio.h>

const char * __stdcall Out()
{
	setlocale(LC_ALL, "rus");
	const char* a = "����� ������ ����������";
	return a;
}

void __stdcall wchar_t* myName(){
		wchar_t *name = new wchar_t [25];
		wcscpy(name,L"����� ������ ����������");
		return name;
}

