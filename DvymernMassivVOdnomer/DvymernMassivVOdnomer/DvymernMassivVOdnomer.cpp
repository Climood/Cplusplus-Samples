// DvymernMassivVOdnomer.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include<iostream>
#include<ctime>
using namespace std; 

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL , "RUSSIAN");

	//����� 2��� ��� ������
	int raz1, raz2;
	cout << "������� ������� ������� ([a][b]):" ;
	cin >> raz1 >> raz2;
	int **DynMas=new int*[raz1];
	for (int i = 0; i < raz1; i++) {
		DynMas[i] = new int[raz2];
	}
	for (int i = 0; i < raz1; i++) {
		for (int j = 0; j < raz2; j++) {
			DynMas[i][j] = 0 + rand() % (raz1*raz2);
			cout << DynMas[i][j] << " ";
		}
		cout << "\t";
	}


	/*
	//������� ������� ��� ���� ���������� ����� ���������� ������ ����������
	int r = raz1*raz2;
	int m2 = raz2;
	raz1 = raz2 = 0;
	int *ykaz = new int[r];
	for (int i = 0; i < r; i++) {
		ykaz[i] = DynMas[raz1][raz2];
		if(raz2+1==m2){               //����� ����� ����, ����� ����������� ����������� ����� ���� ���, ������� �� �����
			raz1++;
			raz2 = 0; 
			continue;
		}
		raz2++;
	}
	int choise;
	do {
		cout << endl << "������� ����� �������� �������, ����� �� �� ����������:) (��� ������ -1) : ";
		cin >> choise;
		if (choise != -1) {
			cout << endl << choise << " ������� �������: " << ykaz[choise - 1];
		}
	} while (choise != -1);
	*/	
	int** oneArray; // ��������� ���� �� ���� ��� � ������
	oneArray = DynMas;
	int choise;
	do {
	cout << endl << "������� ����� �������� �������, ����� �� �� ����������:)(��� ������ -1)  ";
	cin >> choise;
	cout <<endl<< **(oneArray + choise);
	} while (choise != -1);
	system("PAUSE");
    return 0;
}

