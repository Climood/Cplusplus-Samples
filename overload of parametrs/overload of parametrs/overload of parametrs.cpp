// overload of parametrs.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class ThreeD {
	int x, y, z;
public:
	ThreeD() { x = y = z = 0; }
	ThreeD(int i, int j, int k) { x = i; y = j; z = k; }
	void show();
	ThreeD operator+(ThreeD op2);
	//ThreeD operator=(ThreeD op2);
};
ThreeD ThreeD::operator+(ThreeD op2) {
	ThreeD temp;
	temp.x = x + op2.x;
	temp.y = y + op2.y;
	temp.z = z + op2.z;
	return temp;
}
/*ThreeD ThreeD::operator=(ThreeD op2) {
	x = op2.x;
	y = op2.y;
	z = op2.z;
	return *this;
}*/
void ThreeD::show() {
	cout << x << ", ";
	cout << y << ", ";
	cout << z << "\n";
}
int main()
{
	setlocale(LC_ALL, "russian");
	ThreeD a(1, 2, 3),b(10,10,10),c;
	c = a + b;
	c.show();
	c = b = a;
	c.show();
	system("pause");
    return 0;
}

