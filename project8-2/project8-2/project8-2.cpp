// project8-2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	srand(time(0));
	char ch;
	int len;
	do{
		cout << "Нажмите 1 для создания обычной очереди, 2 для stack и q для выхода.\n";
		cin >> ch;
		switch (ch) {
		case'1':
		{
			cout << "Укажите размер: ";
			cin >> len;
			cout << endl;
			Queue Queue1(len);
			char ch;
			do {
				char sim;
				cout << "Нажмите 1 для ввода символа в очередь, 2 для вывода и q для выхода.\n";
				cin >> ch;
				switch (ch) {
				case'1':
					cout << "Введите символ: ";
					cin >> sim;
					cout << endl;
					Queue1.Put(sim);
					break;
				case'2':
					sim = Queue1.Get();
					cout << "Вы вытащили символ: " << sim << endl;
					break;
				case'q':cout << "Конец использования очереди\n";
					break;
				default:
					cout << "Вы ввели недопустимое значение.\n";
				}
			} while (ch != 'q');
			break;
		}
		case'2': {

			cout << "Укажите размер: ";
			cin >> len;
			cout << endl;
			Stack Stack1(len);
			do {
				char sim;
				cout << "Нажмите 1 для ввода символа в очередь, 2 для вывода и q для выхода.\n";
				cin >> ch;
				switch (ch) {
				case'1': {
					cout << "Введите символ: ";
					cin >> sim;
					cout << endl;
					Stack1.Put(sim);
					break;
				}
				case'2': {
					sim = Stack1.Get();
					cout << "Вы вытащили символ: " << sim << endl;
					break;
				}
				case'q': {
					cout << "Конец использования очереди\n";
					break;
				}
				default:
					cout << "Вы ввели недопустимое значение.\n";
				}
			} while (ch != 'q');

			break;
		}
		case'q': {
			cout << "Конец\n";
			break; 
		}
		default:
			cout << "Вы ввели недопустимое значение.\n";
		}
	} while (ch != 'q');
	system("pause");
    return 0;
}

