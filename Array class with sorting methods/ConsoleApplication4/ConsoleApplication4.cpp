// ConsoleApplication4.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "Array.h"


int main()
{
	Array ar = Array(20);
	std::cout << ar;
	//ar.BubleSort();
	//ar.InsertSorted();
	ar.SelectSorted();
	std::cout << ar;
	system("PAUSE");
    return 0;
}

