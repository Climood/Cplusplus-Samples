// samoproverka..5-8PASSWORD.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char in[80];
	setlocale(LC_ALL, "RUS");
	char pass[] = "fuckyou";
	for 
		cout << " ����� ������, �������: ";
		cin >> in;
		if (!strcmp(pass, in)) {
			cout << endl << "������ ������." << endl;
			break;
		}
		else
			cout << endl << "������ ��������." << endl;
	}
	system("PAUSE");
    return 0;
}

