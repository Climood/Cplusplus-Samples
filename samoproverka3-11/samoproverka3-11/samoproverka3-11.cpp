// samoproverka3-11.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	cout << "Вводите символы и буквы, строчные буквы будут преобразованы в прописные и наоборот.\n Для завершения ввода введите'.' ";
	char in;
	int number=0,str_v_prop = 0, prop_v_str = 0,other=0;
	do {
		cin >> in;
		if (64 < in && in < 91) {
			cout << char(in + 32) << "\n";
			prop_v_str++;
			number++;
		}
		else if (96 < in && in <123) {
			cout << char(in - 32) << "\n";
			str_v_prop++;
			number++;
		}
		else {
			other++;
			number++;
		}
	} while (in != '.');
	cout << "Число преобразований из строчных в прописные: " << str_v_prop<< "\n" << "Число преобразований из прописных в строчные: " << prop_v_str<<"\n" << "Всего введено херни: " << number<<"\n" << "Всего введено небукв: " << other<<"\n" ;
	system("PAUSE");
    return 0;
}

