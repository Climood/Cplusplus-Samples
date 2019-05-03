#pragma once
#define Maxsize 100
class Set {
	int len;
	char Mas[Maxsize];
public:
	Set(){
		len = 0;
	}
	int find(char what) {
		int i;
		for (i = 0; i < len; i++) {
			if (Mas[i] == what) return i;
		}
		return -1;
	}
	bool IsMember(char x) {
		if (find(x) != -1) return true;
		return false;
	}
	void showSet();
	int get_len() {
		int i;
		while (Mas[i]) {
			i++;
		}
		return i;
	}
	void FeelTheMas();
	Set operator+(Set op2);
	Set operator+(char x);
	Set operator-(Set op2);
	Set operator-(char x);
};