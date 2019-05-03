// samoproverka6-5.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int min_swap(int &a, int &b);
char min_swap(char &a, char &b);
double min_swap(double &a, double &b);
int main()
{
	setlocale(LC_ALL, "russian");
	char choise;
	do {
		cout << "Что вы будете сравнивать?(для завершения работы введите q) :" << endl << "1.символы ASCII" << endl << "2.целые числа" << endl << "3.числа с плавающей точкой" << endl;
		cin >> choise;
		cout << endl;
		switch (choise)
		{
		case('1'):
			char x,y,min;
			cout << "Введите 2 аргумента: ";
			cin >> x>> y;
			min = min_swap(x, y);
			cout << "X= " << x << " " << "Y= " << y << " " << "MIN= " << min << endl;
			break;
		case('2'):
			int x2, y2,min2;
			cout << "Введите 2 аргумента: ";
			cin >> x2>> y2;
			min2 = min_swap(x2, y2);
			cout << "X= " << x2 << " "<< "Y= " << y2<<" " << "MIN= " << min2 << endl;
			break;
		case('3'):
			double x3, y3,min3;
			cout << "Введите 2 аргумента: ";
			cin >> x3>>y3;
			min3=min_swap(x3, y3);
			cout << "X= " << x3 << " " << "Y= " << y3 << " " << "MIN= " << min3 << endl;
			break;
		case('q'):
			break;
		default:
			cout << "Некорректный запрос." << endl;
			break;
		}
	} while (choise != 'q');
	system("pause");
    return 0;
}
int min_swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
	if (a < b)return a;
	else return b;
}
char min_swap(char &a, char &b)
{
	char temp = a;
	a = b;
	b = temp;
	if (tolower(a) < tolower(b))return a;
	else return b;
}
double min_swap(double &a, double &b)
{
	double temp = a;
	a = b;
	b = temp;
	if (a < b)return a;
	else return b;
}