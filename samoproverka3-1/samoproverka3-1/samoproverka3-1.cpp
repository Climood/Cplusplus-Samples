// samoproverka3-1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	cout << "Вводите символы, точки будут подсчитаны, для завершения ввода введите '$'";
	char vvod;
	int number=0, number_toch = 0;
	do {
		cin >> vvod;
		if (vvod == '.')number_toch++;
		else number++;
	}while (vvod != '$');
	cout << "Всего символов введено: " << number << "\n" << "Число точек: " << number_toch << "\n";
	system("PAUSE");
    return 0;
}

