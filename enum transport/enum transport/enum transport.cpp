// enum transport.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	enum transport { car,boat,airplane,truck,traine};
	char names[][30] = {
		"car (����������)",
		"boat (�����)",
		"airplane (�������)",
		"truck (��������)",
		"traine (�����)"
	};
		transport current = car;
		cout << names[current] << endl;
		current = traine;
		cout << names[current] << endl;
		system("pause");
    return 0;
}

