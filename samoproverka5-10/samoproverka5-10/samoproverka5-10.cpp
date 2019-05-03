// samoproverka5-10.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
void func(int size);
int main()
{
	setlocale(LC_ALL, "rus");
	int s;
	cin >> s;
	func(s);
	system("PAUSE");
    return 0;
}
void func(int size)
{
	if (size == 0) {
		cout << 0 << " ";
		return;
	}
	cout << size << " ";
	func(size - 1);
}

