// samoproverka 6-8.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
void print(int a,int otstyp=0);
void print(char a, int otstyp = 0);
void print(char *a, int otstyp = 0);
void print(bool a, int otstyp = 0);
void print(double a, int otstyp = 0);
void println(int a, int otstyp = 0);
void println(char a, int otstyp = 0);
void println(char *a, int otstyp = 0);
void println(bool a, int otstyp = 0);
void println(double a, int otstyp = 0);

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	println(1);
	print("проба", 18);
	println('X');
	print("Перегрузка функций -бла бла");
	print(18.22);
	system("PAUSE");
	return 0;
}


void print(int a, int otstyp) {
	while (otstyp) {
		cout << " "; otstyp--;
	}
	cout << (int)a;
}
void print(char a, int otstyp ) {
	while (otstyp) {
		cout << " "; otstyp--;
	}
	cout << (char)a;
}
void print(char *a, int otstyp ) {
	while (otstyp) {
		cout << " "; otstyp--;
	}
	cout << a;
}
void print(bool a, int otstyp ) {
	while (otstyp) {
		cout << " "; otstyp--;
	}
	if (a)cout << "true";
	else cout << "false";
}
void print(double a, int otstyp ) {
	while (otstyp) {
		cout << " "; otstyp--;
	}
	cout << (double)a;
}
void println(int a, int otstyp ) {
	while (otstyp) {
		cout << " "; otstyp--;
	}
	cout << (int)a << endl;
}
void println(char a, int otstyp ) {
	while (otstyp) {
		cout << " "; otstyp--;
	}
	cout << (char)a << endl;
}
void println(char *a, int otstyp ) {
	while (otstyp) {
		cout << " "; otstyp--;
	}
	cout << a << endl;
}
void println(bool a, int otstyp ) {
	while (otstyp) {
		cout << " "; otstyp--;
	}

	if (a)cout << "true";
	else cout << "false";
	cout << endl;
}
void println(double a, int otstyp ) {
	while (otstyp) {
		cout << " "; otstyp--;
	}
	cout << (double)a << endl;
}
