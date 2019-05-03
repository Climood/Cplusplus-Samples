// project 11-1 new.cpp: определяет точку входа для консольного приложения.
//СРАВНИВАЕМДВА ФАЙЛА И ИЩЕМ

#include "stdafx.h"
#include<iostream>
#include<fstream>
using namespace std;

int main(int argc,char *argv[])
{
	setlocale(LC_ALL,"russian");
	register int i;
	int number_of_read;
	unsigned  char buf1[1024], buf2[1024];
	if (argc != 3) {
		cout << "Испольщование проги: compfiles <file1> <file2>\n";
		return 1;
	}
	ifstream in_f1(argv[1], ios::in | ios::binary);
	if (!in_f1) { cout << "Cant open file1.\n";
	return 1;
	}
	ifstream in_f2(argv[2], ios::in | ios::binary);
	if (!in_f2) {
		cout << "Cant open file2.\n";
		return 1;
	}
	do {
		in_f1.read((char*)buf1, sizeof buf1);
		in_f2.read((char*)buf2, sizeof buf2);
		if (in_f1.gcount() != in_f2.gcount()) {
			cout << "Files has diffrent lenght.\n";
			in_f1.close();
			in_f2.close();
			return 0;
		}
		for(i = 0; i < in_f1.gcount(); i++) {
			if (toupper(buf1[i]) != toupper(buf2[i])) {
				cout << "Files has diffrent containment.\n";
				cout << "diffrentment find at position " << i;
				in_f1.close();
				in_f2.close();
				return 0;
			}
		}
	} while (!in_f2.eof() && !in_f1.eof());
	cout << "Files complicated.";
	in_f1.close();
	in_f2.close();
	system("pause");
    return 0;
}

