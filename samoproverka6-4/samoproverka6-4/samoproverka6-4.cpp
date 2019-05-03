// samoproverka6-4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;
void vround(double &x);
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	double y;
	cin >>y;
	vround(y);
	cout << endl << y;
	system("PAUSE");
    return 0;
}
void vround(double &x)
{
	double a,ost;
	ost=modf(x,&a);
	if (ost > 0.5)a++;
	x = a;
}
