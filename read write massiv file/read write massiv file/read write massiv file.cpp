// read write massiv file.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	int nums[5] = { 1,2,3,4,5 };
	register int i;
	ofstream out("nums", ios::out | ios::binary);
	if (!out) {
		cout << "Cant open file!.\n";
		return 1;
	}
	out.write((char*)&nums, sizeof nums);
	out.close();
	for (i = 0; i < 5; i++) {
		nums[i] = 0;
	}
	ifstream in("nums", ios::in | ios::binary);
	if (!in) {
		cout << "Cant open file!.\n";
		return 1;
	}
	in.read((char*)&nums, sizeof nums);
	in.close();
	for (i = 0; i < 5; i++) {
		cout<< nums[i] <<" ";
	}
	system("pause");
	return 0;
}

