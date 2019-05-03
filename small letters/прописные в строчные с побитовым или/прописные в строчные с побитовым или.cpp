// прописные в строчные с побитовым или.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	register char in, newin;
	cout << "¬ведите прописную букву, с которой начать последование" << endl;
	do {
		cin >> in;
		if (in < 'A' || in > 'Z')cout << "Ќеверна€ буква(символ), повторите ввод" << endl;
	} while (in < 'A' || in > 'Z');
	for (in; in <= 90; in++) {
		cout << in;
		newin = in | 32; // сравниваем код буквы или 0010 0000, обращаем 6ой бит в 1(делаем строчными)
		cout << newin;
	}
	system("pause");
    return 0;
}

