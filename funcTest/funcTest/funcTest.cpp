// funcTest.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

void func(int height, int width);

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	cout << "������� ��������: ";
	int he, wi;
	cin >> he >> wi;
	func(he, wi);
	system("PAUSE");
    return 0;
}

void func(int height, int width) 
{
	cout << endl << height*width;2
}

