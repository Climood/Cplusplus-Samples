// Average Num for Nums with static in func.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int avg_nums(int num);
void reset();
int main()
{
	setlocale(LC_ALL, "russian");
	int entr;
	do {
		cout << "������� ����� ��� �������� �������� ��������(��� ����������� ������� -1,��� ������ -2) : ";
		if (entr == -2)reset();
		cin >> entr;
		if(entr!=-1)cout << endl << "������� ����� : " << avg_nums(entr);
	} while (entr != -1);
	//cout << endl << "������� ����� : " << avg_nums(entr);
	system("pause");
    return 0;
}
