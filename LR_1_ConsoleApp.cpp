#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>
#include <iostream>
#include "LR_1_Group.h"
#include "LR_1_FIO.h"
using namespace std;

 int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL,"Russian");

	//������ DLL
	cout << "����� ������: \n������ �������: ����� ������ ������ � ������� int: " << OutGroupInt(571227) << "\n";
	cout << "������ �������: ����� ������ ������ � ������� char: ";
	OutGroupChar();
	cout << "\n\n";

	//������ DLL
	wchar_t * str = ConsoleOut();
	cout << "����� ���: \n������ �������: ����� ��� � �������: ";
	wcout << str;
	cout << "\n";
	cout << "������ �������: ����� ��� �� ���������� � ���������: ";
	const char * string = Out();
	cout << string;
	cout << "\n";
	system("pause");
	return 0;
}
