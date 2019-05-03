// samoproverka 4-3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int temp;
	int mas[10] = { 1,1,5,2,3,12,3,87,43,76 };
	for (int i = 9; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (mas[j] > mas[j + 1]) {
				temp = mas[j + 1];
				mas[j + 1] = mas[j];
				mas[j] = temp;
			}
		}
	}
	cout << endl;
	for (int i = 0; i < 10; i++) {
		cout << mas[i] << " ";
	}
	int middle, search;
	system("PAUSE");
	return 0;
}
