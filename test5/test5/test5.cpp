// test5.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
#include<cstring>
#include<ctime>
using namespace std;
#define ARRAYSIZE 10
void quicksort(int *mas, int left, int right);
int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	int mas[ARRAYSIZE];
	for (int i = 0; i< ARRAYSIZE; i++) {
		mas[i] = 0 + rand() % 100;
	}
	for (int i = 0; i< ARRAYSIZE; i++) {
		cout<<mas[i] << " ";
	}
	quicksort(mas, 0, ARRAYSIZE-1);
	cout << endl;
	for (int i = 0; i< ARRAYSIZE; i++) {
		cout << mas[i]<<" ";
	}
	system("pause");
    return 0;
}
void quicksort(int *mas, int left, int right)
{
	int L, R;
	int mid = mas[(left + right )/ 2];
	int temp;
	L = left;
	R = right;
	while (L <= R) {
		while ((mas[R] > mid)&&(R>left))R--;
		while ((mas[L] < mid)&&(L<right))L++;
		if (L <= R) {
			temp = mas[L];
			mas[L] = mas[R];
			mas[R] = temp;
			R--; L++;
		}
	}
	if (left<R)quicksort(mas, left, R);
	if(L<right)quicksort(mas,L,right);
}
