// project6-1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
void print(int a);
void print(char a);
void print(char *a);
void print(bool a);
void print(double a);
void println(int a);
void println(char a);
void println(char *a);
void println(bool a);
void println(double a);

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	print(1);
	println('X');
	print("Перегрузка функций -бла бла");
	print(18.22);
	system("PAUSE");
    return 0;
}


void print(int a) {
	cout << (int)a;
}
void print(char a) {
	cout << (char)a;
}
void print(char *a) {
	cout << a;
}
void print(bool a) {
	if (a)cout << "true";
	else cout << "false";
}
void print(double a) {
	cout << (double)a;
}
void println(int a) {
	cout << (int)a << endl;
}
void println(char a) {
	cout << (char)a << endl;
}
void println(char *a) {
	cout <<a << endl;
}
void println(bool a) {
	
	if (a)cout << "true";
	else cout << "false";
	cout << endl;
}
void println(double a) {
	cout << (double)a << endl;
}
	