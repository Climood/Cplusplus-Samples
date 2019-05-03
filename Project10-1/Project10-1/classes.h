#pragma once
class Vehicle {
	double passengers, fuelcap, mpg;
public:
	Vehicle(double a, double b, double c) {
		passengers = a;
		fuelcap = b;
		mpg = c;
	}
	void set_passengers(double x) { passengers = x; }
	void set_fuelcap(double x) { fuelcap = x; }
	void set_mpg(double x) { mpg = x; }
	double get_passengers() { return passengers; }
	double get_fuelcap(){return fuelcap;}
	double get_mpg() { return mpg; }
};
class Truck :public Vehicle {
	double carryweight;
public:
	Truck(double a, double b, double c, double e) :Vehicle(a, b, c) {
		carryweight = e;
	}
	void set_carryweight(double x) { carryweight = x; }
	double get_carryweight() { return carryweight; }
};
