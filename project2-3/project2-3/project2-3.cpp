// project2-3.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double plat,sum, zay, num, proc;
	cout << "������� ����� �����, ����� ���� �����, ����� ������ � ��� � ���������� ������\n";
	cin >> sum >> zay >> num >> proc;
	double a = (proc / num) + 1;
	double b = -(num*zay);
	double verx, niz;
	verx = proc*sum / num;
	niz = 1 - pow(a, b);
	plat = verx/niz;
	cout << "�� ������ ������� ������� ����� � �����\n" << plat;
	double proc2;
	proc2 = ((sum/(num*zay))*proc)*num*zay;
	cout << "kolvo procentov ="<< proc2;

	system("PAUSE");
    return 0;
}


