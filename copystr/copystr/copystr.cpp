// copystr.cpp: определяет точку входа для консольного приложения.
//создать функцию с аргументом по умолчанию, которая будет копировать одну строку  в конец другой и если надо, будет 
//указываться число символов , которое уопировать

#include "stdafx.h"
#include<iostream>
#include<cstring>
using namespace std;
void mystrcat(char *s1, char *s2, int len = 0);
int main()
{
	setlocale(LC_ALL, "rus");
	char s1[80];
	char s2[80];
	cout << " Введите две строки, вторая будет скопирована в первую."<<endl;
	cin >> s1;
	cout << endl;
	cin >> s2;
	cout << endl;
	cout << " Скопировать всю строку целиком? (y/n): ";
	char choise;
	do {
		cin >> choise;
		cout << endl;
		switch (choise) {
		case('y'):mystrcat(s1, s2);
			break;
		case('n'):cout << "Сколько символов вы хотите скопировать? : ";
			int l;
			do {
				cin >> l;
				cout << endl;
				if (l > strlen(s2)) {
					cout << "Число символов превышает длину второй строки!!! Повторите ввод! " << endl;
				}
			} while (l > strlen(s2));
			cout << endl;
			mystrcat(s1, s2, l);
			break;
		default: cout << "Неверный ответ, повторите ввод! x_x " << endl;
		}
	} while (choise != 'y' && choise != 'n');
	cout << s1;
	system("PAUSE");
    return 0;
}
void mystrcat(char *s1, char *s2, int len)
{
	while (*s1) s1++;
	if (len == 0) len = strlen(s2);
	while (*s2&&len) {
		*s1 = *s2;
		s1++; s2++; len--;
	}
	*s1 = '\0';
}
