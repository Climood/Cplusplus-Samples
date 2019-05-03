#pragma once
#include<iostream>
using namespace std;
class Helper {
	int ID;
public:
	Helper(int a=000) {
		ID = a;
	}
	~Helper() {
		cout << "Был уничтожен пользователь справочника с номером " << ID << endl;
	}
	int get_ID() { return ID; }
	void show(char what);
	bool isValid(char choise);
	void ShowMenu();
};