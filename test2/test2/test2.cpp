// test2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
#include<cstring>
using namespace std;
void quicksort(char *str, int left, int right);
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << " Введите строку для сортировки " << endl;
	char vvod[100];
	cin >> vvod;
	cout << endl;
	quicksort(vvod, 0, strlen(vvod) - 1);
	cout << " Отсортрованная строка : " << vvod<< endl;
	system("PAUSE");
    return 0;
}
void quicksort(char *str, int left, int right)
{
	int L, R;
	char mid, temp;
	mid = str[(left + right) / 2];
	L = left;
	R = right;
	do {
		while ((str[L] < mid) && (L < right))L++;
		while ((str[R] > mid) && (R > left))R--;
		if (L <= R) {
			temp = str[L];
			str[L] = str[R];
			str[R] = temp;
			L++; R--;
		}
		if (R > left)quicksort(str, left, R);
		if (L < right)quicksort(str, L, right);
	} while (L <= R);
}
