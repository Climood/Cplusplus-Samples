// project9-1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>;
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	Set Mas1;
	Set Mas2;
	Mas1.FeelTheMas();
	Mas2.FeelTheMas();
	Mas1.showSet();
	Mas2.showSet();
	Mas1 = Mas1 + 'A';
	Mas1.showSet();
	Mas1 = Mas1 - 'A';
	Mas1.showSet();
	Set Mas3;
	Mas3 = Mas1 + Mas2;
	Mas3.showSet();
	Set Mas4;
	Mas4 = Mas3 - Mas2;
	Mas4.showSet();
	system("pause");
    return 0;
}

