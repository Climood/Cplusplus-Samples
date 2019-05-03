// samoproverka..5-8PASSWORD.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char in[80];
	setlocale(LC_ALL, "RUS");
	char pass[] = "fuckyou";
	for 
		cout << " Введи пароль, мразота: ";
		cin >> in;
		if (!strcmp(pass, in)) {
			cout << endl << "Пароль верный." << endl;
			break;
		}
		else
			cout << endl << "Пароль неверный." << endl;
	}
	system("PAUSE");
    return 0;
}

