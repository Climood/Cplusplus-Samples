// format out in cout.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	ios::fmtflags f;
	f = cout.flags();
	if (f & ios::showpos) 
		cout << "showpos ���������� ��� cout.\n";
	else	
		cout << "showpos ������� ��� cout.\n";
	
	cout << "\n��������� ���� showpos ��� cout.\n";
	cout.setf(ios::showpos);
	f = cout.flags();
	if (f & ios::showpos) 
		cout << "showpos ���������� ��� cout.\n";
	else
		cout << "showpos ������� ��� cout.\n";
	
	cout << "\n������� ���� showpos ��� cout.\n";
	cout.unsetf(ios::showpos);
	f = cout.flags();
	if (f & ios::showpos) 
		cout << "showpos ���������� ��� cout.\n";
	else
		cout << "showpos ������� ��� cout.\n";
	
	system("pause");
    return 0;
}

