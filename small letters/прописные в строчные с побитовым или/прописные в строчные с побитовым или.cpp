// ��������� � �������� � ��������� ���.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	register char in, newin;
	cout << "������� ��������� �����, � ������� ������ ������������" << endl;
	do {
		cin >> in;
		if (in < 'A' || in > 'Z')cout << "�������� �����(������), ��������� ����" << endl;
	} while (in < 'A' || in > 'Z');
	for (in; in <= 90; in++) {
		cout << in;
		newin = in | 32; // ���������� ��� ����� ��� 0010 0000, �������� 6�� ��� � 1(������ ���������)
		cout << newin;
	}
	system("pause");
    return 0;
}

