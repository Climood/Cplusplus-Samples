// PROJECT 11-1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	int x;
	double y;
	char str[80];
	setlocale(LC_ALL, "russian");
	ofstream  out_file("test2");
	if (!out_file) {
		cout << "�� ����openfile\n";
	}
	out_file << 10 << " " << 12.123 << "\n;";
	out_file << "������.";
	out_file.close();
	ifstream  in_file("test2");
	if (!in_file) {
		cout << "�� ����openfile\n";
	}
	in_file >> x;
	in_file >> y;
	in_file >> str;
	cout << x << " " << y << " " << str<<endl;
	in_file.close();
	fstream IO_file;
	IO_file.open("test3", ios::in | ios::out);
	if(!IO_file) {
		cout << "�� ����openfile\n";
	}
	IO_file << 14 << " " << 12.32 << " ";
	IO_file << "������ ����� 2";
	int a;
	double b;
	char str2[80];
	IO_file >> a >> b;
	IO_file.get(str2,80);
	cout << a << " " << b << " " <<str2;
	system("pause");
    return 0;
}

