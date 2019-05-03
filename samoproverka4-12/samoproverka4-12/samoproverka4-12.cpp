// samoproverka4-12.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
#include<cctype>
#include<cstring>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	cout << "Введите строку : ";
	char s1[80]; 
	cin >> s1;
	int count = 0;
	for (int i = 0; i < strlen(s1); i++) {
		if (isupper(s1[i])) {
			count++;
		}
	}
	cout << "Кол-во загланвых букв: "<<count;
	
	system("PAUSE");
	return 0;
}

