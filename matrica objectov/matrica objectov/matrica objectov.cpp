// matrica objectov.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
class intobj {
	int x;
	int y;
	int z;
public:
	intobj(int a, int b, int c) { x = a; y = b; z = c; }
	intobj() { x = 0; y = 0; z = 0; }
};
class charobj {
	char x;
	char y;
	char z;
public:
	charobj(char a, char b, char c) { x = a; y = b; z = c; }
	charobj() { x = 'A'; y = 'A'; z = 'A'; }
};
class stringobj {
	string x;
	string y;
	string z;
public:

};
int main()
{
    return 0;
}

