// samoproverka 11-12.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
#include<fstream>
using namespace std;

int main(int argc,char *argv[])
{
	setlocale(LC_ALL, "russian");
	if (argc != 3) {
		cout << "use program: copypr file1 file2";
		return 1;
	}
	char buf[2000];
	char ch;
	ifstream import(argv[1], ios::in | ios::binary);
	if (!import) {
		cout << "cant open source file.\n";
		return 1;
	}
	import.read(buf, sizeof buf);
	import.close();
	ofstream export(argv[2], ios::out | ios::binary);
	if (!export) {
		cout << "cant open source file.\n";
		return 1;
	}
	export.write(buf, sizeof buf);
	export.close();
	system("pause");
    return 0;
}

