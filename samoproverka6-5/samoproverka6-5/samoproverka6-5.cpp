// samoproverka6-5.cpp: ���������� ����� ����� ��� ����������� ����������.
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
		cout << "��� �� ������ ����������?(��� ���������� ������ ������� q) :" << endl << "1.������� ASCII" << endl << "2.����� �����" << endl << "3.����� � ��������� ������" << endl;
		cin >> choise;
		cout << endl;
		switch (choise)
		{
		case('1'):
			char x,y,min;
			cout << "������� 2 ���������: ";
			cin >> x>> y;
			min = min_swap(x, y);
			cout << "X= " << x << " " << "Y= " << y << " " << "MIN= " << min << endl;
			break;
		case('2'):
			int x2, y2,min2;
			cout << "������� 2 ���������: ";
			cin >> x2>> y2;
			min2 = min_swap(x2, y2);
			cout << "X= " << x2 << " "<< "Y= " << y2<<" " << "MIN= " << min2 << endl;
			break;
		case('3'):
			double x3, y3,min3;
			cout << "������� 2 ���������: ";
			cin >> x3>>y3;
			min3=min_swap(x3, y3);
			cout << "X= " << x3 << " " << "Y= " << y3 << " " << "MIN= " << min3 << endl;
			break;
		case('q'):
			break;
		default:
			cout << "������������ ������." << endl;
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