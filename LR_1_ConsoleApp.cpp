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

	//Первая DLL
	cout << "Вывод группы: \nПервая функция: вывод номера группы в формате int: " << OutGroupInt(571227) << "\n";
	cout << "Вторая функция: вывод номера группы в формате char: ";
	OutGroupChar();
	cout << "\n\n";

	//Вторая DLL
	wchar_t * str = ConsoleOut();
	cout << "Вывод ФИО: \nПервая функция: вывод ФИО в консоль: ";
	wcout << str;
	cout << "\n";
	cout << "Вторая функция: вывод ФИО из переменной в программе: ";
	const char * string = Out();
	cout << string;
	cout << "\n";
	system("pause");
	return 0;
}
