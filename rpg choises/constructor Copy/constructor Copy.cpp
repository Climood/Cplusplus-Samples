// constructor Copy WARRIOR PALADIN.cpp: определяет точку входа для консольного приложения.
//пишем прогу, в которой вар может раскачаться и получить звание паладина.

#include "stdafx.h"
#include<iostream>
#define VERSION 0.1
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	cout << "Добро пожаловать в РПГ СЕРЕГИ v." << VERSION << endl;
	char ch;
	do{
		cin >> ch;
		cout << endl;
		switch (ch)
		{
		case'1':
			break;
		default:
			break;
		}
         
	}while (ch != 'q');
	system("pause");
    return 0;
}

