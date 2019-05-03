// test.cpp: определяет точку входа для консольного приложения.
//
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "stdafx.h"
using namespace std;

int main()
{
	int a, b;
	int mas[20] = { 1, 5, 2, 1, 7, 8, 222, 413, 213, 212, 555, 2121, 21, 23, 43, 21, 15, 97, 1, 12 };
	for (int i = 0; i < 20; i++) {
		for (int j = i; j < 19; j++)
		{
			if (mas[j] < mas[j + 1])
				mas[j + 1] = a;
			mas[j + 1] = mas[j];
			mas[j] = a;
		}
	}
	for (int i = 0; i < 20; i++)
		cout << mas[i] << " ";
	return 0;
}


