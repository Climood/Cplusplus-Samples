// factorial.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <cmath>
#include<iostream>
using namespace std;
int fact(int n);
int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "������� ����� , �� �������� ����� ����� ��������� ";
	cin >> n;
	cout << '\n';
	n = fact(n);
	cout <<"��������� ����� " <<n;
	system("PAUSE");
    return 0;
}

int fact(int n) {
	int n_new;
	if (n == 1) return 1;
	n_new = fact(n - 1)*n;
	return(n_new);
}

