// quicksort.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include "stdafx.h"
#include<iostream>
#include<cstring>
using namespace std;
void Mqsort(char *str, int right, int left);
int main()
{
	char vvod[100];
	setlocale(LC_ALL, "RUSSIAN");
	cout << "¬ведите строку дл€ сортировки " << endl;
	cin >> vvod;
	Mqsort(vvod, 0, strlen(vvod)-1);
	cout << vvod;
	system("PAUSE");
    return 0;
}
void Mqsort(char *str, int left, int right)
{
	int L, R;
	char mid, temp;
	mid = str[(right + left) / 2];
	R = right;
	L = left;
	do {
		while ((str[L] < mid)&&(L<right)) L++;
		while ((str[R] > mid)&&(R>left))R--;
		if (L <= R) {
			temp = str[R];
			str[R] = str[L];
			str[L] = temp;
			L++; R--;
		}
	} while (L <= R);
	if(L<right)Mqsort(str, L,right);
	if(R>left)Mqsort(str, left, R);
}
