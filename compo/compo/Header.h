#pragma once
#include<iostream>

class Solv {
public:
	int test;
	Solv(int s) { test = s; };
	void display() {
		std::cout << "Solv: " << test << std::endl;
	}
};

class Dec {
public:
	Solv* f;
	virtual void display() = 0;
};

class Groo : public Dec {
public:
	Groo(Solv* t) {
		f = t;
	}

	void display() {
		std::cout << "SolvDec: " << f->test << std::endl;
		f->test += 500;
	}
};