// project2-2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
int main()
{
	int time = 5000000;
	for (int i = 0; i < 30; i++) {
		for (int a = 0; a < time; a++);
		std::cout << '\a';
		time -= 166600;
	}
	
	system("PAUSE");
    return 0;
}

