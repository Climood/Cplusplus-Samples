// ConsoleApplication1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	wchar_t test;
	for (test = L'A'; test <L'Z'; test++);
	cout << wchar_t (test) << '\n';
	system("pause");
    return 0;
}

