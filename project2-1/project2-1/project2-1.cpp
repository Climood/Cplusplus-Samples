// project2-1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	double dis = 34000000;
	double spd = 186000;
	double zad = dis / spd;
	cout << "�������� � �������� ����� " << zad << "\n" << "�������� � ������� �����" << zad / 60;
	system("PAUSE");
    return 0;
}

