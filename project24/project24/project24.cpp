// project24.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
#include <ctime>
#include "stdafx.h"
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
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 19; j++)
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
	return 0;
}

