// samoproverka 8-8.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;

class Triangle {
	int base;
	int hight;
public:
	Triangle(int a=0, int b=0) { base = a; hight = b; }
	void set(int a,int b){ base = a; hight = b; }
	void show() {
		cout << " " << base << " " << hight;
	}
	int hypot() { return sqrt(base*base + hight*hight); }
	int area() { return (base*hight) / 2; }
};
void ShowTheTreys(Triangle *ob, int a);
int main()
{
	setlocale(LC_ALL, "russian");
	int number,a,b;
	cout << "Сколько треугольников создать?" << endl;
	cin>>number;
	Triangle *Trey=new Triangle[number];
	for (int i = 0; i < number; i++) {
		cout << "Введiте основание, а затем длину "<<i <<" прямоугольника";
		cin >> a >> b;
		Trey[i].set(a, b);
	}
	ShowTheTreys(Trey, number);
	for (int i = 0; i < number; i++) {
		cout << "Гипотенуза и площадь " << i << " треуггольника = "<<Trey[i].hypot()<<" "<<Trey[i].area();
	}
		system("pause");
    return 0;
}
void ShowTheTreys(Triangle *ob, int a)
{
	for (int i = 0; i < a; i++) {
		cout << "Основание и длина " << i << " прямоугольника = "; ob[i].show();
	}
}
