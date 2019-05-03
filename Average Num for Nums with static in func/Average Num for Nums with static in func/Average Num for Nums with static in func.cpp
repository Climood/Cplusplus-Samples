// Average Num for Nums with static in func.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int avg_nums(int num);
void reset();
int main()
{
	setlocale(LC_ALL, "russian");
	int entr;
	do {
		cout << "Вводите числа для подсчета среднего значения(для прекращения введите -1,для сброса -2) : ";
		if (entr == -2)reset();
		cin >> entr;
		if(entr!=-1)cout << endl << "среднее равно : " << avg_nums(entr);
	} while (entr != -1);
	//cout << endl << "среднее равно : " << avg_nums(entr);
	system("pause");
    return 0;
}
