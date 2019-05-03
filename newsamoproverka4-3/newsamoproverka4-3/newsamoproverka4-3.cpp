// newsamoproverka4-3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int temp;
	srand(time(NULL));
	int raz;
	cin >> raz;
	int *mas;
	mas = new int[raz];
	for (int i = 0; i < raz; i++) {
		mas[i] = 0 + rand() %raz;
		cout << mas[i] << " ";
	}
	for (int i = raz-1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (mas[j] > mas[j + 1]) { 
				temp = mas[j + 1];
				mas[j + 1] = mas[j];
				mas[j] = temp;
			}
		}
	}
	cout << endl;
	for (int i = 0; i < raz; i++) {
		cout << mas[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < raz - 1; i++) {
		if (mas[i] == mas[i + 1]) {    
			cout << mas[i] << "  " << mas[i + 1]<<"  ";
		}
	}

	system("PAUSE");
	return 0;
}
