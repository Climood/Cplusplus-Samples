// LABA pI 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

const char* str = "строка char ";
const __wchar_t* str2 = L"строка wchar ЮЮЮЮSSSSЯЯЯЯЯ";


int main()
{
	setlocale(LC_ALL, "russian");	printf(str);
	int c;
	size_t count;
	printf("print:\n %s\n%x\n%S\n%x\n", str, str[1], str2, str[2]);


	wprintf(L"print:\n %s\n%x\n%S\n%x\n", str, str[1], str2, str[2]);
	system("pause");
    return 0;
}

