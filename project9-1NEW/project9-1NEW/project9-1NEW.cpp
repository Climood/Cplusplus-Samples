// project9-1NEW.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	Set Mas1;
	Set Mas2;
	Mas1.Feel();
	Mas2.Feel();
	Mas1.show();
	Mas2.show();
	if (Mas1 < Mas2)cout << "Mas1 подмножество Mas2\n";
	if (Mas1 > Mas2)cout << "Mas1 надмножество Mas2\n";
	Set ComMas;
	ComMas = Mas1&Mas2;
	cout << "Объединение Mas1 и Mas2\n";
	ComMas.show();
	Set DizMas;
	DizMas = Mas1 | Mas2;
	cout << "Строгая дизъюнкция Mas1 и Mas2\n";
	DizMas.show();
	Mas1 = Mas1 + 'V';
	Mas1.show();
	Mas1 = Mas1 + 'M';
	Mas1.show();
	Set Mas3;
	Mas3 = Mas1 + Mas2;
	Mas3.show();
	Mas3 = Mas3 - 'M';
	Mas3.show();
	Set Mas4;
	Mas4 = Mas3 - Mas2;
	Mas4.show();
	system("pause");
    return 0;
}

