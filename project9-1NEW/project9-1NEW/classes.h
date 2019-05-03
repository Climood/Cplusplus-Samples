#pragma once
#define MAX_SIZE 100
class Set {
	int len;
	char Mas_Set[MAX_SIZE];
public:
	Set() {
		len = 0;
	}
	int find(char what) {
		int i;
		for (i = 0; i < len; i++) {
			if (what == Mas_Set[i]) return i;
		}
		return -1;
	}
	bool IsMember(char what) {
		if (find(what) != -1) return true;
		return false;
	}
	void Feel();
	void show();
	Set operator+(char x);
	Set operator+(Set op2);
	Set operator-(char x);
	Set operator-(Set op2);
	bool operator>(Set op2);
	bool operator<(Set op2);
	Set operator&(Set op2);
	Set operator|(Set op2);
};