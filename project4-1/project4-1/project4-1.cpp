// project4-1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>
using namespace std;


int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	srand(time(NULL));
	int mas[20];
	for (int i = 0; i < 20; i++) {
		mas[i] = 1 + rand() % 100;
		cout << mas[i] << " ";
	}
	cout << '\n';
	int temp;
	for (int i = 20; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (mas[j] > mas[j + 1]) {
				temp = mas[j+1];
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

