// puzblr'.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	int temp;
	int mas[20];
	for (int i = 0; i < 20; i++) {
		mas[i] = 1 + rand() % 100;
		cout << mas[i] << " ";
	}
	cout << "\n";
	for (int i = 19; i > 0; i--) {
		for (int j = 0; j < i; j++)
		{
			if (mas[j] < mas[j + 1]) {
				temp = mas[j + 1];
				mas[j + 1] = mas[j];
				mas[j] = temp;
			}
		}
	}
	for (int i = 0; i < 20; i++)
		cout << mas[i] << " ";
	system("PAUSE");
	return 0;
}