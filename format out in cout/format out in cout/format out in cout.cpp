// format out in cout.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	ios::fmtflags f;
	f = cout.flags();
	if (f & ios::showpos) 
		cout << "showpos установлен для cout.\n";
	else	
		cout << "showpos сброшен для cout.\n";
	
	cout << "\nУстановим флаг showpos для cout.\n";
	cout.setf(ios::showpos);
	f = cout.flags();
	if (f & ios::showpos) 
		cout << "showpos установлен для cout.\n";
	else
		cout << "showpos сброшен для cout.\n";
	
	cout << "\nСбросим флаг showpos для cout.\n";
	cout.unsetf(ios::showpos);
	f = cout.flags();
	if (f & ios::showpos) 
		cout << "showpos установлен для cout.\n";
	else
		cout << "showpos сброшен для cout.\n";
	
	system("pause");
    return 0;
}

