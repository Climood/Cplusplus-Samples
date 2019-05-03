// DvymernMassivVOdnomer.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include "stdafx.h"
#include<iostream>
#include<ctime>
using namespace std; 

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL , "RUSSIAN");

	//ƒелаю 2мер дин массив
	int raz1, raz2;
	cout << "¬ведите размеры массива ([a][b]):" ;
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
	//пытаюсь ебануть его типо одномерным через одномерный массив указатедей
	int r = raz1*raz2;
	int m2 = raz2;
	raz1 = raz2 = 0;
	int *ykaz = new int[r];
	for (int i = 0; i < r; i++) {
		ykaz[i] = DynMas[raz1][raz2];
		if(raz2+1==m2){               //такую херню мучу, чтобы попробовать присваивать через один фор, быстрее же вроже
			raz1++;
			raz2 = 0; 
			continue;
		}
		raz2++;
	}
	int choise;
	do {
		cout << endl << "¬ведите номер элемента массива, будто бы он одномерный:) (дл€ выхода -1) : ";
		cin >> choise;
		if (choise != -1) {
			cout << endl << choise << " элемент массива: " << ykaz[choise - 1];
		}
	} while (choise != -1);
	*/	
	int** oneArray; // указатель того же типа что и двумер
	oneArray = DynMas;
	int choise;
	do {
	cout << endl << "¬ведите номер элемента массива, будто бы он одномерный:)(дл€ выхода -1)  ";
	cin >> choise;
	cout <<endl<< **(oneArray + choise);
	} while (choise != -1);
	system("PAUSE");
    return 0;
}

