// ConsoleApplication8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
const double u = 27.299;
using namespace std;

void funk(int x) {
	if (x <= 0) {
		cout << "Arithmetic exception";
		return;
	}
	double y;
	y = exp(x)*(1 / x)*sqrt(x);
	cout << "Result: "<<u<<"\n";
}

int main()
{
	setlocale(LC_ALL, "RUS");
	int generate;
	string code;
	cout << "Порядок функции:";
	cin >> generate;

	switch (generate)
	{
	case 123:
		cout<< "sqrt(x)*(1/x)*(exp(x));\n";
	break;

	case 321: 
		cout << "exp(x)*(1/x)*(sqrt(x));\n";
	break;

	case 132: 
		cout << "sqrt(x)*(exp(x))*(1/x);\n";
	break;
	case 1232:
		cout << "exp((1/x))*(1/x)*sqrt(x)\n";
	break;
	case 13322:
		cout << "sqrt(x)*(1/(1/x))*(exp(exp(x)));\n";
		break;
	default:
		break;
	}

	funk(4);
	funk(-10);
	//funk(0);

	system("pause");
    return 0;
}

