// Prilojenie k Virtual F( ) 's    TwoDShape.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	TwoDShape *shapes[5];
	shapes[0] = &Triangle(8.0, 12.0,"Прямоугольный");
	shapes[1] = &Rectangle(10);
	shapes[2] = &Rectangle(10, 4);
	shapes[3] = &Triangle(7.0);
	shapes[4] = &TwoDShape(10, 20, "Обобщенная фигура");
	for (int i = 0; i < 5; i++) {
		cout << "Объект является " << shapes[i]->getname() << endl;
		cout << "Площадь равна" << shapes[i]->area() << endl;
	}
	system("pause");
    return 0;
}

