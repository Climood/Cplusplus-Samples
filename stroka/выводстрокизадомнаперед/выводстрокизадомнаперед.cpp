// выводстрокизадомнаперед.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include "stdafx.h"
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	cout << "¬веди строку ";
	char str[200];
	cin.get(str, 200);
	char *end;
	int len;
	len = strlen(str);
	end = &str[len];
	while (end >= &str[0]) {
		cout << *end;
		end--;
	}
	system("PAUSE");
	return 0;
}


