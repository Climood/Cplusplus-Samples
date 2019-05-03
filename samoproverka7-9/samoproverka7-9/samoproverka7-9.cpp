// samoproverka7-9 и 7-10.cpp: определяет точку входа для консольного приложения.
//ШИФРОВАНИЕ СДВИГАМИ

#include "stdafx.h"
#include<iostream>
using namespace std;
unsigned char Rrotate(unsigned char num, int x);
unsigned char Lrotate(unsigned char num, int x);
void ShowBinary(unsigned char A);
void ShowBinaryFULL(unsigned char A);
void Shifrovka(char *A, int number);
void RASShifrovka(char *A, int number);
void ShowBinaryMasChar(char *A);
int main()
{
	setlocale(LC_ALL, "russian");
    char A[80];
	char key[80];
	int KeyNumber=0;
	cout << "Введите ключ для шифровки: ";
	cin >> key;
	for (int i = 0; i < strlen(key); i++) {
		if (key[i] % 2) KeyNumber++;
	}
	cout << endl<<"Введите строку, которую необходимо зашифровать: ";
	cin >> A;
	ShowBinaryMasChar(A);
	Shifrovka(A, KeyNumber);
	cout << endl << "В зашифрованном виде она выглядит так : " << A << endl;
	cout << "Введите ключ для расшифровки: ";
	cin >> key;
	KeyNumber = 0;
	for (int i = 0; i < strlen(key); i++) {
		if (key[i] % 2) KeyNumber++;
	}
	RASShifrovka(A, KeyNumber);
	cout << endl << "В расшифрованном виде она выглядит так : " << A << endl;
    /*	ShowBinary(A);
	A = Rrotate(A, 3);
	cout << endl;
	ShowBinary(A);
	A = Lrotate(A, 3);
	cout << endl;
	ShowBinary(A);*/
	//////////////////////// 7-10 ////////////////////
	unsigned char test = 'B';
	ShowBinaryFULL(test);
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
void ShowBinaryFULL(unsigned char A)
{
	for (int t = 32768; t >= 1; t /= 2) {  
		if (A & t) cout << "1";
		else cout << "0";
	}
}
unsigned char Rrotate(unsigned char num, int x)
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
void Shifrovka(char *A,int number)
{
	int len = strlen(A);
	cout << " Длина строки А: " << len << endl;
	for (int i = 0; i < len; i++) {
		A[i] = Lrotate(A[i], number);
		cout << "Бинарный код зашифрованного " << i << " символа: ";
		ShowBinary(A[i]);
		cout << endl;
	}
}
void RASShifrovka(char *A, int number)
{
	int len = strlen(A);
	cout << " Длина строки А: " << len << endl;
	for (int i = 0; i < len; i++) {
		A[i] = Rrotate(A[i], number);
		cout << "Бинарный код расшифрованного " << i << " символа: ";
		ShowBinary(A[i]);
		cout << endl;
	}
}
void ShowBinaryMasChar(char *A)
{
	int len = strlen(A);
	cout << " Длина строки А: " << len << endl;
	for (int i = 0; i < len; i++) {
		cout << "Бинарный код " << i << " символа: ";
		ShowBinary(A[i]);
		cout << endl;
	}
}