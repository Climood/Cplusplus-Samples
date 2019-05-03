// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>

int main() {
	char *str = "aaasdddferrrrf";
	char *pr = "dfe";
	bool flag = false; 

	for (int i = 0; i < 11; i++) {
		for (int j = 0; j < 3; j++) {
			if (str[i + j] == pr[j])
				flag = true;
			else flag = false;
		}
		if (flag) break;
	}
	
	std::cout << flag;
	int b;
	std::cin >> b;
	return 0;
}