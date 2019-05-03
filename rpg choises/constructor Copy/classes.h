#pragma once
#include<iostream>
using namespace std;

class Human {
	int health, intellege, strengh, exp = 0,lvl=1;
	bool isCopy = false;
public:
	Human(int a, int b, int c) {
		health = a; intellege = b; strengh = c;
	}
	Human(const Human &ob) {
		cout << "ѕередали копию человека.\n";
		isCopy=true;
	}
	~Human() {
		if (isCopy) cout << "”ничтожаем копию человека.\n";
		else cout << "”ничтожили оригинал человека.\n";
	}
	void set_exp(int num) {
	    exp += num;
		if (exp == 1000)lvl++;
	}
	int show_exp() { return exp; }
	int show_lvl() { return lvl; }

};
class Elf {
	int health, intellege, strengh, exp = 0,lvl=1;
	bool isCopy = false;
public:
	Elf(int a, int b, int c) {
		health = a; intellege = b; strengh = c;
	}
	Elf(const Elf &ob) {
		cout << "ѕередали копию эльфа.\n";
		isCopy = true;
	}
	~Elf() {
		if (isCopy) cout << "”ничтожаем копию эльфа.\n";
		else cout << "”ничтожили оригинал эльфа.\n";
	}
	void set_exp(int num) {
		exp += num;
		if (exp == 1000)lvl++;
	}
	int show_exp() { return exp; }
	int show_lvl() { return lvl; }
};
class Ork {
	int health, intellege, strengh, exp = 0,lvl=1;
	bool isCopy = false;
public:
	Ork(int a, int b, int c) {
		health = a; intellege = b; strengh = c;
	}
	Ork(const Ork &ob) {
		cout << "ѕередали копию орка.\n";
		isCopy = true;
	}
	~Ork() {
		if (isCopy) cout << "”ничтожаем копию орка.\n";
		else cout << "”ничтожили оригинал орка.\n";
	}
	void set_exp(int num) {
		exp += num;
		if (exp == 1000)lvl++;
	}
	int show_exp() { return exp; }
	int show_lvl() { return lvl; }
}; 