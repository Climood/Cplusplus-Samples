// bubblepovtor.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	srand(time(NULL));
	int raz;
	cout << "������� ������ �������: ";
	cin >> raz;
	double *DynMas;
	DynMas= new double[raz];
	for (int i = 0; i < raz; i++) {
		DynMas[i] = 1 + rand() % 1000;
		cout << DynMas[i] << " ";
	}
	cout << '\n';
	double temp;
	for (int i = 0; i < raz; i++) {
		int Index = i;
		for (int j = i; j < raz; j++) {
			if (DynMas[j] > DynMas[Index])
				Index = j;
		}

		int  Temp = DynMas[i];
		DynMas[i] = DynMas[Index];
		DynMas[Index] = Temp;
	}

	/*     �������
	double temp;
	for (int i = raz; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (DynMas[j] < DynMas[j + 1]) {
				temp = DynMas[j + 1];
				DynMas[j + 1] = DynMas[j];
				DynMas[j] = temp;
			}
		}

	}
	*/
	cout << "����� ���������� ��������\n\n ";
	for (int i = 0; i < raz; i++) {
		cout << DynMas[i] << " ";
	}
	//�������
	//double temp;
	for (int i = raz; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (DynMas[j] < DynMas[j + 1]) {
				temp = DynMas[j + 1];
				DynMas[j + 1] = DynMas[j];
				DynMas[j] = temp;
			}
		}

	}
	cout << "����� ���������� ��������� \n\n";
	for (int i = 0; i < raz; i++) {
		cout << DynMas[i] << " ";
	}
	system("PAUSE");
    return 0;
}

