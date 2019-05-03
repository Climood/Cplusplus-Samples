// поиск строки в подстроке.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
char *ptrsubvstr(char *str, char *sub);
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	char str[80];
	char sub[80];
	char *find=0;
	cout << "Введите строку, а затем слово, которое надо в ней найти. " << endl;
	cin >> str >> sub;
	find=ptrsubvstr(str,sub);
	if (*find != 'n') { cout << "Начинается с символа : " << *find<<endl; }
	system("PAUSE");
    return 0;
}
char *ptrsubvstr(char *str, char *sub) 
{
	char *start;
	char *p1;	char *p2;
	int t;
	for (t = 0; str[t]; t++) {
		p2 = &str[t];
		start = p2;
		p1 = sub;
		while (*p1 && *p1 == *p2) {
			p1++;
			p2++;
		}
		if (!*p1) {
			cout << "Подстрока найдена"<<endl;
			return start;
		}

	}
	cout << "Подстрока не найдена"<<endl;
	return "no:c";

}
