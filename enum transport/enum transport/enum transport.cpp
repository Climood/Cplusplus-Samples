// enum transport.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	enum transport { car,boat,airplane,truck,traine};
	char names[][30] = {
		"car (автомобиль)",
		"boat (лодка)",
		"airplane (самолет)",
		"truck (грузовик)",
		"traine (поезд)"
	};
		transport current = car;
		cout << names[current] << endl;
		current = traine;
		cout << names[current] << endl;
		system("pause");
    return 0;
}

