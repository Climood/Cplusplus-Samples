// Friend F() sravnenie color.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class Cylinder;//����������� ����������
enum colors {red,green,yellow};
class Cube {
	colors color;
public:
	Cube(colors c) { color = c; }
	friend bool sameColor(Cube x, Cylinder y);
};
class Cylinder {
	colors color;
public:
	Cylinder(colors c) { color = c; }
	friend bool sameColor(Cube x, Cylinder y);
};
bool sameColor(Cube x, Cylinder y) {
	if (x.color == y.color)return true;
	else return false;
}
int main()
{
	Cube cb1(red),cb2(green);
	Cylinder cd1(red);
	if (sameColor(cb1, cd1))cout << "1��� � 1��� ���������.\n";
	if (sameColor(cb2, cd1))cout << "2��� � 1 ��� ���������\n";
    return 0;
}

 