// умножение 2 столбцов дин массива в функ.cpp: определяет точку входа для консольного приложения.
// 
//

#include "stdafx.h"
#include<iostream>
#include<ctime>
#include<cmath>
using namespace std;
void stolb(int **ptrArr, int raz1, int raz2);
int main()
{
	srand(time(0));
	int r2;
	setlocale(LC_ALL, "rus");
	cout << "Введите колво строк массива из 2 столбцов, значения столбцов будут перемножены и выведены на экран. " << endl;
	cin >> r2;
	cout << endl;
	int **DynMas = new int*[2];
	for (int i = 0; i < 2; i++) {
		DynMas[i] = new int[r2];
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < r2; j++) {
			DynMas[i][j] = 0 + rand() % (2*r2);
			cout << DynMas[i][j] << endl;
		}
		cout << endl<<endl;
	}
	cout << endl<<endl<<endl;
	stolb(DynMas, 2, r2);
	system("pause");
	return 0;
}
void stolb(int **ptrArr, int raz1, int raz2) {
	for (int i = 0; i < 1; i++) {
		for (int j = 0; j < raz2; j++) {
			cout << ptrArr[i][j]* ptrArr[i+1][j] << endl;
		}
		cout << endl;
	}
}
