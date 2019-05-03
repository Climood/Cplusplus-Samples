// рекурс строка задом наперед.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
void reverse(char *str);
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	char vvod[80];
	cin >> vvod;
	cout << endl;
	reverse(vvod);
	system("PAUSE");
    return 0;
}
void reverse(char *str)
{
	if(*str) {
		reverse(str + 1);
	}
	else
	return;
	cout << *str;
}

