// rpg test.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	Player pl(new Warrior(new Ork()));
	Player p2(new Warrior(pl.ptr_char));
	pl.lvl_up();
	pl.info();
	p2.lvl_up();
	p2.info();
	system("pause");
    return 0;
}

