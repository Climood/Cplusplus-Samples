// samoproverka3-11.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	cout << "������� ������� � �����, �������� ����� ����� ������������� � ��������� � ��������.\n ��� ���������� ����� �������'.' ";
	char in;
	int number=0,str_v_prop = 0, prop_v_str = 0,other=0;
	do {
		cin >> in;
		if (64 < in && in < 91) {
			cout << char(in + 32) << "\n";
			prop_v_str++;
			number++;
		}
		else if (96 < in && in <123) {
			cout << char(in - 32) << "\n";
			str_v_prop++;
			number++;
		}
		else {
			other++;
			number++;
		}
	} while (in != '.');
	cout << "����� �������������� �� �������� � ���������: " << str_v_prop<< "\n" << "����� �������������� �� ��������� � ��������: " << prop_v_str<<"\n" << "����� ������� �����: " << number<<"\n" << "����� ������� ������: " << other<<"\n" ;
	system("PAUSE");
    return 0;
}

