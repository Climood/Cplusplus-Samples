// Project7-1.cpp: определяет точку входа для консольного приложения.
//Создание функций циклического побитового сдвига

#include "stdafx.h"
#include<iostream>
using namespace std;
unsigned char Rrotate(unsigned char num, int x);
unsigned char Lrotate(unsigned char num, int x);
void ShowBinary(unsigned char A);
int main()
{
	setlocale(LC_ALL, "russian");
	unsigned char A='A';
	ShowBinary(A);
	A=Rrotate(A, 3);
	cout << endl;
	ShowBinary(A);
	A= Lrotate(A, 3);
	cout << endl;
	ShowBinary(A);
	system("pause");
    return 0;
}
void ShowBinary(unsigned char A)
{
	for (int t = 128; t >= 1; t /= 2) {
		if (A & t) cout << "1";
		else cout << "0";
	}
}
unsigned char Rrotate(unsigned char num,int x)
{
	unsigned int t = num;
	t = t << 8;
	for (int i = 0; i < x; i++) {
		t = t >> 1;
		if (t & 128) {
			t = t | 32768;
		}
	}
	t = t >> 8;
	return t;
}
unsigned char Lrotate(unsigned char num, int x)
{
	unsigned int t = num;
	for (int i = 0; i < x; i++) {
		t = t << 1;
		if (t & 256) {
			t = t | 1;
		}
	}
	return t;
}