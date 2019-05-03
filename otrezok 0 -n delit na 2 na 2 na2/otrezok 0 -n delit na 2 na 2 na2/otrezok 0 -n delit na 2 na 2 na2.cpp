// otrezok 0 -n delit na 2 na 2 na2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#define SIZE 4
#include<iostream>
using namespace std;
void razbienie(int a, int b);
int main()
{
	setlocale(LC_ALL, "russian");
	razbienie(0, SIZE-1);
	system("pause");
    return 0;
}
void razbienie(int a,int b)

{
	if (a >= b) 
	{
		return;
	}
	else
	{
	int middle;
	middle = (a + b) / 2; 
	razbienie(a, middle);
	razbienie(middle+1, b);
	cout << a<<" " << b << " "<< middle<<" "<<endl;
    }
}
