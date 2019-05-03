#include"Vehicle.h"
#include"stdafx.h"
#include<iostream>
using namespace std;

int Vehicle::range()
{
	return fuelcap / mpg;
}
Vehicle::Vehicle(int x, int x2, int x3)
{
	passengers = x;
	fuelcap = x2;
	mpg = x3;
}
Vehicle::~Vehicle()
{
	cout << "Происходит уничтожение объектов\n";
}
