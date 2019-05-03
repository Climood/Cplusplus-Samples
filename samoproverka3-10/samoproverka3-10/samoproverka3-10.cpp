// samoproverka3-10.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	for (int i = 1; i < 1000000; i *= 2)
		cout << i << "\n";
	system("PAUSE");
	return 0;
}

