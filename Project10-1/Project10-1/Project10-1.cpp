// Project10-1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	Vehicle car(2, 100, 10);
	Truck cargo(10, 1000, 100,10000);
	system("pause");
    return 0;
}

