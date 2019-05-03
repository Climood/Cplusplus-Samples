// project4-2.cpp: определ€ет точку входа дл€ консольного приложени€.
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
	char *begin;
	char *end;
	int len;
	len = strlen(str);
	begin = str;
	char temp;
	int i = 0;
	end = &str[len-1];
	while (begin<end) {
		temp = *begin;
		*begin = *end;
		*end = temp;
		begin++;
		end--;
	}
	cout << str;
	system("PAUSE");
	return 0;
}

