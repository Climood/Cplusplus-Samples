// samoproverka8-9.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int id,U;
	cout << "Введите кол-во пользователей." << endl;
	cin >> U;
	Helper *MasObj = new Helper[U];
	for(int i=0;i<U;i++){
		cout << "Добро пожаловать в справочную систему, введите свой ID.(для выхода введите id=666)" << endl;
		cin >> id;
		if (id == 666) break;
		MasObj[i]=Helper(id);
		MasObj[i].ShowMenu();
	}
	system("PAUSE");
	return 0;
}

