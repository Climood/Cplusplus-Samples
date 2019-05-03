// samoproverka5-4.cpp: определяет точку входа для консольного приложения.
//  ЗАДАЧА СДЕЛАТЬ СВОЮ ФУНКЦИЮ STRLEN

#include "stdafx.h"
#include<iostream>
using namespace std;
int strlenN(char *str);
int main()
{
	char vvod[80];
	cin >> vvod;
	cout << strlenN(vvod);
	system("PAUSE");
    return 0;
}
int strlenN(char *str)
{
	int i = 0;
	while (str[i] != '\0') {
		i++;
	}
	return i;
}
