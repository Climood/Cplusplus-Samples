// samoproverka5-7Posledovat n+3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
void ByThrees(int size);
void reset(int size);
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	cout << "Введите размер желаемой последовательности :";
	int S;
	cin >> S;
	ByThrees(S);
	reset(S);
	system("pause");
    return 0;
}
void ByThrees(int size)
{
	if (size == 0) {
		cout << 0<<" ";
		return;
	}
	cout << size * 3<<" ";
    ByThrees(size-1);
}
void reset(int size)
{
	ByThrees(size);
}