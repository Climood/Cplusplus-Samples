// copystr.cpp: ���������� ����� ����� ��� ����������� ����������.
//������� ������� � ���������� �� ���������, ������� ����� ���������� ���� ������  � ����� ������ � ���� ����, ����� 
//����������� ����� �������� , ������� ����������

#include "stdafx.h"
#include<iostream>
#include<cstring>
using namespace std;
void mystrcat(char *s1, char *s2, int len = 0);
int main()
{
	setlocale(LC_ALL, "rus");
	char s1[80];
	char s2[80];
	cout << " ������� ��� ������, ������ ����� ����������� � ������."<<endl;
	cin >> s1;
	cout << endl;
	cin >> s2;
	cout << endl;
	cout << " ����������� ��� ������ �������? (y/n): ";
	char choise;
	do {
		cin >> choise;
		cout << endl;
		switch (choise) {
		case('y'):mystrcat(s1, s2);
			break;
		case('n'):cout << "������� �������� �� ������ �����������? : ";
			int l;
			do {
				cin >> l;
				cout << endl;
				if (l > strlen(s2)) {
					cout << "����� �������� ��������� ����� ������ ������!!! ��������� ����! " << endl;
				}
			} while (l > strlen(s2));
			cout << endl;
			mystrcat(s1, s2, l);
			break;
		default: cout << "�������� �����, ��������� ����! x_x " << endl;
		}
	} while (choise != 'y' && choise != 'n');
	cout << s1;
	system("PAUSE");
    return 0;
}
void mystrcat(char *s1, char *s2, int len)
{
	while (*s1) s1++;
	if (len == 0) len = strlen(s2);
	while (*s2&&len) {
		*s1 = *s2;
		s1++; s2++; len--;
	}
	*s1 = '\0';
}
