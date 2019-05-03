// project 5-1 QUICKSORT HOMEMADE.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include "stdafx.h"
#include <iostream>
#include <cstring>
#include<ctime>
using namespace std;
void quicksort(int *str, int entr, int end);
int main()
{
	srand(time(0));
	setlocale(LC_ALL,"RUSSIAN");
	cout << "¬ведите строку дл€ сортировки"<<endl;
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
	
	system("PAUSE");
    return 0;
}

void quicksort(int *str, int entr, int end)
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
