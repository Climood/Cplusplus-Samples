// testykazateli.cpp: ���������� ����� ����� ��� ����������� ����������.
//
// ��� ��������
#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	cout << "��� �������� ���������, ��������������� �������� �������� ����������. \n\n\n";
	double DNum;
	int INum;
	double *D_ptr; //��������� ��������� ���� ���� � ���
	int *I_ptr;
	D_ptr = &DNum; // �������� ����������� ���������� ������ ��������� � ����. ������
	I_ptr = &INum;
	//������� �������������� ��������
	(*D_ptr) = 10;
	cout << DNum << '\n';
	(*D_ptr)++;
	cout << DNum << '\n';
	DNum = 10;
	D_ptr++;
	cout << DNum << '\n';// ��� �����, ������� �� ��������, ������ ������ (����)
	cout<< D_ptr<< '\n';
	D_ptr++;// ������ ������ ������ �� +1 (���������) (+8 ����, �.�. ����)
	cout << D_ptr << '\n';
	system("PAUSE");
    return 0;
}

