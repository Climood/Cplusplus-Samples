// samoproverka5-2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;
double hypot(double a, double b);
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	cout << " Введите катеты для нахождения гипотенузы треугольника";
	double a1, a2;
	cin >> a1 >> a2;
	cout<< " Гипотенуза равна = "<< hypot(a1, a2);
	system("PAUSE");
    return 0;
}
double hypot(double a, double b)
{
	double c = sqrt(a*a + b*b);
	return c;
}
