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
#include <LR_1_Group.h>
#include <LR_1_FIO.h>
using namespace std

 int _tmain(int argc, _TCHAR* argv[]) 
{
	setlocale(LC_ALL,"RUS");

	//������ DLL
	cout << "����� ������: \n������ �������: ����� ������ ������ � ������� int: " << OutGroupInt(571227) << "\n";
	cout << "������ �������: ����� ������ ������ � ������� char: ";
    OutGroupChar();
	cout << "\n\n";

	//������ DLL
	wchar_t * str = new wchar_t [25];
	str = OutConsole();
	cout << "����� ���: \n������ �������: ����� ��� � �������: ";
	cout << OutConsole();
	cout << "\n";
	cout << "������ �������: ����� ��� �� ���������� � ���������: ";
	const char * string = Out();
	cout << string;
	cout << "\n";

	return 0;
}
