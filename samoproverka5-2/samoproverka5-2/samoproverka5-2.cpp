// samoproverka5-2.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;
double hypot(double a, double b);
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	cout << " ������� ������ ��� ���������� ���������� ������������";
	double a1, a2;
	cin >> a1 >> a2;
	cout<< " ���������� ����� = "<< hypot(a1, a2);
	system("PAUSE");
    return 0;
}
double hypot(double a, double b)
{
	double c = sqrt(a*a + b*b);
	return c;
}
