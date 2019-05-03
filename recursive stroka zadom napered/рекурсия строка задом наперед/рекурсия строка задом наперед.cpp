// рекурсия строка задом наперед.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
#include<cstring>
using namespace std;
char reverse(char *str);
int main()
{
	setlocale(LC_ALL, "RUS");
	char str[80];
	cin >> str;
	reverse(str);
	system("PAUSE");
    return 0;
}
char reverse(char *str)
{
	if (*str)	
	{
		reverse(str+1);
		cout<<*str;
	}
	return ' ';
}
