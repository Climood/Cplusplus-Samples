// samoproverka3-1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	cout << "������� �������, ����� ����� ����������, ��� ���������� ����� ������� '$'";
	char vvod;
	int number=0, number_toch = 0;
	do {
		cin >> vvod;
		if (vvod == '.')number_toch++;
		else number++;
	}while (vvod != '$');
	cout << "����� �������� �������: " << number << "\n" << "����� �����: " << number_toch << "\n";
	system("PAUSE");
    return 0;
}

