// PtrNaPtr test.cpp: ���������� ����� ����� ��� ����������� ����������.
//
/*http://cppstudio.com/post/9555/ ��� ���� �������� �������, ������� ����� �������� ������������ ������ 
��� ����� ��������� ������� ���������� �  ��� �������� �������� ����� �����. ��� ������� ����� ���������,
��� ���������, ��������� �� ���������, ������ ������� ���������� � ������, ������� ���� ����� ��������
� ���������� ��� ��� ������. ����� �� ��������� ������, � ��� �� ����� ������� � �������������. 
���� ����� �� ��������� ����� ��� ������� �������.*/
#include "stdafx.h"
#include<iostream>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
char **Addptr(char **ppArr, int sizeArr, char *str);
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	char **ppArr = 0;
	int sizeArr = 0;
	char *ptrvvod;
	char vvod;
	do {
		cout << "������� ������ , ��� �� ���������� � ������ �����.��� ������ q " << endl;
		cin >> vvod;
		ptrvvod = &vvod;
		ppArr = Addptr(ppArr, sizeArr, ptrvvod);
		sizeArr++;
	} while (vvod != 'q');
	system("PAUSE");
    return 0;
}
char **Addptr(char **ppArr, int sizeArr, char *str)
{
	if (sizeArr == 0) {
		ppArr = new char*[sizeArr + 1];
	}
	else
	{
		char **copyArr = new char*[sizeArr + 1];
		for (int i = 0; i < sizeArr; i++) {
			copyArr[i] = ppArr[i];
		}
		delete[]ppArr;
		ppArr = copyArr;

	}
	ppArr[sizeArr] = new char[strlen(str) + 1];
	strcpy(ppArr[sizeArr], str);
	return ppArr;
}

