// project8-2.cpp: ���������� ����� ����� ��� ����������� ����������.
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
		cout << "������� 1 ��� �������� ������� �������, 2 ��� stack � q ��� ������.\n";
		cin >> ch;
		switch (ch) {
		case'1':
		{
			cout << "������� ������: ";
			cin >> len;
			cout << endl;
			Queue Queue1(len);
			char ch;
			do {
				char sim;
				cout << "������� 1 ��� ����� ������� � �������, 2 ��� ������ � q ��� ������.\n";
				cin >> ch;
				switch (ch) {
				case'1':
					cout << "������� ������: ";
					cin >> sim;
					cout << endl;
					Queue1.Put(sim);
					break;
				case'2':
					sim = Queue1.Get();
					cout << "�� �������� ������: " << sim << endl;
					break;
				case'q':cout << "����� ������������� �������\n";
					break;
				default:
					cout << "�� ����� ������������ ��������.\n";
				}
			} while (ch != 'q');
			break;
		}
		case'2': {

			cout << "������� ������: ";
			cin >> len;
			cout << endl;
			Stack Stack1(len);
			do {
				char sim;
				cout << "������� 1 ��� ����� ������� � �������, 2 ��� ������ � q ��� ������.\n";
				cin >> ch;
				switch (ch) {
				case'1': {
					cout << "������� ������: ";
					cin >> sim;
					cout << endl;
					Stack1.Put(sim);
					break;
				}
				case'2': {
					sim = Stack1.Get();
					cout << "�� �������� ������: " << sim << endl;
					break;
				}
				case'q': {
					cout << "����� ������������� �������\n";
					break;
				}
				default:
					cout << "�� ����� ������������ ��������.\n";
				}
			} while (ch != 'q');

			break;
		}
		case'q': {
			cout << "�����\n";
			break; 
		}
		default:
			cout << "�� ����� ������������ ��������.\n";
		}
	} while (ch != 'q');
	system("pause");
    return 0;
}

