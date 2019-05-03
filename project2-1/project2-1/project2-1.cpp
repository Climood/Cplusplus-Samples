// project2-1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	double dis = 34000000;
	double spd = 186000;
	double zad = dis / spd;
	cout << "Задержка в секундах равна " << zad << "\n" << "Задержка в минутах равна" << zad / 60;
	system("PAUSE");
    return 0;
}

