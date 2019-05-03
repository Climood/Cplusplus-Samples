// RPG v1.0.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "russian");
	Player p1(new OrkRasist(new Ork()));
	p1.addperk(new Perk1(p1.stats));
	p1.addperk(new Perk2(p1.stats));
	p1.Display();
	p1.display_perks();
	p1.enable_perk(0);//работает в Player а не OrkRasist!!!!!!!!!!!
	p1.Display();
	p1.enable_perk('A');//работает в Player а не OrkRasist!!!!!!!!!!!
	p1.Display();
	p1.lvlup(1);
	p1 = new ElfArcher(p1.stats);
	p1.add_exp(100);
	p1.add_money(100);
	p1.Display();
	p1.additem(new Item1(p1.stats));
    p1.display_items(); 
	p1.equip_item(0);//работает в Player а не OrkRasist!!!!!!!!!!!
	p1.add_exp(100);//работает в Player а не OrkRasist!!!!!!!!!!!
	p1.add_money(100);//работает в Player а не OrkRasist!!!!!!!!!!!
	p1.Display();
	system("pause");
    return 0;
}

