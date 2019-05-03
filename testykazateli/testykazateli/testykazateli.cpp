// testykazateli.cpp: определ€ет точку входа дл€ консольного приложени€.
//
// Ё“ќ “≈—“ќ¬јя
#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	cout << "Ёто тестова€ программа, демонстрирующа€ основные операции указателей. \n\n\n";
	double DNum;
	int INum;
	double *D_ptr; //ќбъ€вл€ем указатели типа дабл и инт
	int *I_ptr;
	D_ptr = &DNum; // ѕередаем объ€вленным указател€м адреса перменных с соот. типами
	I_ptr = &INum;
	//ѕарочка арифметических действий
	(*D_ptr) = 10;
	cout << DNum << '\n';
	(*D_ptr)++;
	cout << DNum << '\n';
	DNum = 10;
	D_ptr++;
	cout << DNum << '\n';// как видим, зачение не мен€етс€, только €чейка (ниже)
	cout<< D_ptr<< '\n';
	D_ptr++;// мен€ем €чейку пам€ти на +1 (следующую) (+8 байт, т.к. дабл)
	cout << D_ptr << '\n';
	system("PAUSE");
    return 0;
}

