#pragma once
class Vehicle {
public:
	int passengers;
	int fuelcap;
	int mpg;
	int range();
	Vehicle() { };
	Vehicle(int x, int x2, int x3);
	~Vehicle();
};