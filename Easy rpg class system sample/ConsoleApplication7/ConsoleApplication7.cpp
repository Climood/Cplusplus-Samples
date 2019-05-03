// ConsoleApplication7.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"



int main()
{
	Player pl(new PeopleArcher(new People()));
	pl.AddPerk(new Watch(pl.level));
	pl.AddPerk(new Strong(pl.level));
	pl.levelUp();
	pl.Display();
	pl.DisplayPerk();
	pl.Display();
	system("Pause");
    return 0;
}

