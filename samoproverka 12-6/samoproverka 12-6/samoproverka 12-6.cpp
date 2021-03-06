// samoproverka 12-6.cpp : Defines the entry point for the console application.
//
// project 5-1 QUICKSORT HOMEMADE.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <cstring>
#include<ctime>
#include<string>
using namespace std;
template<class type> void quicksort(type *str, int entr, int end)
{
	int Q, E;
	type temp;
	type mid = str[(entr + end) / 2];
	Q = entr; E = end;
	do {
		while ((str[Q] < mid) && (Q < end)) Q++;
		while ((mid < str[E]) && (entr < E))E--;
		if (Q <= E) {
			temp = str[Q];
			str[Q] = str[E];
			str[E] = temp;
			Q++; E--;
		}
	} while (Q <= E);
	if (entr < E) quicksort(str, entr, E);
	if (Q < end) quicksort(str, Q, end);
}
 void quicksort(string &str, int entr, int end)
{
	int Q, E;
	char temp;
	char mid = str[(entr + end) / 2];
	Q = entr; E = end;
	do {
		while ((str[Q] < mid) && (Q < end)) Q++;
		while ((mid < str[E]) && (entr < E))E--;
		if (Q <= E) {
			temp = str[Q];
			str[Q] = str[E];
			str[E] = temp;
			Q++; E--;
		}
	} while (Q <= E);
	if (entr < E) quicksort(str, entr, E);
	if (Q < end) quicksort(str, Q, end);
}
int main()
{
	srand(time(0));
	setlocale(LC_ALL, "RUSSIAN");
	cout << "Введите строку для сортировки" << endl;
	int mas[20];

	for (int i = 0; i < 20; i++) {
		mas[i] = 0 + rand() % 100;
	}
	for (int i = 0; i < 20; i++) {
		cout << mas[i] << " ";
	}
	cout << endl;
	quicksort(mas, 0, 19);
	for (int i = 0; i < 20; i++) {
		cout << mas[i] << " ";
	}
	char mas2[20] = "sadweqeqeqaabbdaazb";
	quicksort(mas2, 0, 19);
	for (int i = 0; i < 20; i++) {
		cout << mas2[i] << " ";
	}
	string mas3="saaddasdsbbzdas";
	quicksort(mas3, 0, mas3.size());
	for (int i = 0; i < mas3.size(); i++) {
		cout << mas3[i] << " ";
	}
	
	system("PAUSE");
	return 0;
}
