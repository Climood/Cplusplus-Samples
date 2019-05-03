#pragma once
#include<iostream>
using namespace std;
class TwoDShape {
	double width, height;
	char name[20];
public:
	TwoDShape() { width = height = 0; strcpy_s(name,"����������."); }
	TwoDShape(double w, double h, char *n) { width = w; height = h; strcpy_s(name, n); }
	TwoDShape(double x,char *n) { width = height = x; strcpy_s(name, n); }
	virtual double area() { cout << "area �� ���������� � ���� ������!\n"; return 0.0; }
	void showDim() {
		cout << "������ � ������ = " << width << " � " << height << "\n";
	}
	void setHeight(double h) { height = h; }
	void setWidth(double w) { width = w; }
	double getHeight() { return height; }
	double getWidth() { return width; }
	char *getname() { return name; }
};
class Triangle :public TwoDShape {
	char style[20];
public:
	Triangle() { strcpy_s(style, "����������."); }
	Triangle(double w, double h, char *n) :TwoDShape(w, h, "�����������") { strcpy_s(style, n); }
	Triangle(double x) :TwoDShape(x, "�����������") { strcpy_s(style, "��������������."); }
	void showStyle() { cout << style<<endl; }
	double area() { return getWidth()*getHeight() / 2; }
};
class Rectangle :public TwoDShape {
public:
	Rectangle(double w, double h) :TwoDShape(w, h, "�������������") {}
	Rectangle(double x):TwoDShape(x,"�������"){}
	bool isSquare() { if (getWidth() == getHeight())return true; else return false; }
	double area() { return getWidth()*getHeight(); }
};
