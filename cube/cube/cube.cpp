// cube.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include "stdafx.h"
#include<iostream>
#include<ctime>
#include<cmath>
using namespace std;
void cube(int **ptrArr,int raz1, int raz2);
int main()
{
	srand(time(0));
	int r1,r2;
	setlocale(LC_ALL, "rus");
	cout << "¬ведите размеры массива, его рандомные значени€ будут возведены в куб и выведены на экран. " << endl;
	cin >> r1>>r2;
	cout << endl;
	int **DynMas = new int*[r1];
	for (int i = 0; i < r1; i++) {
		DynMas[i] = new int[r2];
	}
	for (int i = 0; i < r1; i++) {
		for (int j = 0; j < r2; j++) {
			DynMas[i][j] = 0 + rand() % (r1*r2);
			cout << DynMas[i][j] << " ";
		}
		cout << "\t";
	}
	cout << endl;
	cube(DynMas, r1, r2);
	system("pause");
    return 0;
}
void cube(int **ptrArr, int raz1, int raz2) {
	for (int i = 0; i < raz1; i++) {
		for (int j = 0; j < raz2; j++) {
			ptrArr[i][j] = ptrArr[i][j] * ptrArr[i][j] * ptrArr[i][j];
			cout << ptrArr[i][j] <<" ";
		}
		cout << endl;
	}
}
