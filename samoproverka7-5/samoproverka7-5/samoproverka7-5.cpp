// samoproverka7-5.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int counter();
int main()
{
	int x, x2;
	setlocale(LC_ALL, "russian");
	cout << "������� ��� ������� �������? : ";
	cin >> x;
	for (int i = 0; i < x; i++)x2=counter();
	cout << endl << "������� ���� ������ " << x2<< " ���." << endl;
	system("pause");
    return 0;
}
int counter()
{
	static int i = 0;
	i++;
	return i;
}
