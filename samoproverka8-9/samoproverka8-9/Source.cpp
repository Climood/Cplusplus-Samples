#include"stdafx.h"
#include<iostream>
using namespace std;
void Helper::show(char what)
{
	switch (what) {
	case '1':
		cout << "1.if(�������){��������}\nelse{��������} \n";
		break;
	case '2':
		cout << "2.switch(��������(������ ����� ��� ������))\n{case(1�� ������� ���������): break(���� �����);\ncase(2��): break;\n default:(���� �����);\n";
		break;
	case '3':
		cout << "3.for(���������� �������������;������� ������;��������� ����������) {��������} \n";
		break;
	case '4':
		cout << "4.while(�������(����� ������, ���� �������)){��������}\n";
		break;
	case '5':
		cout << "do{��������}while(�������)\n����������: ���� ���� ��������� ������� ����� ������ ��������, �.�. 1 ��� �� ���������� �����.\n";
		break;
	case '6':
		cout << "break; ��������� ���������� ����� ��� ����������� �� ����, � ����� ����� ����� ��� ������\n����������: � ������ switch �� ��������� ���������� ������� case �����\n";
		break;
	case '7':
		cout << "continue; ���������� ������� ��� �����, ������ for(x=0;x<100;x++)\n{if(x%2)continue;\ncout<<x<<' '}\n�� ������ �������� ����� ��� ����� ������������ � �� ������� �\n";
		break;
	case '8':
		cout << "�����:\n\n\n goto �����;\n������:metka1:\nfor()x++;\nif(x<100)goto metka1;\n";
		break;
	case '9':
		get_ID();
		break;
	case 'q':
		cout << "EXIT" << endl;
		break;
	default: cout << "�� ������� �������������� �����.\n";
	}
}
bool Helper::isValid(char choise)
{
	if ((choise>'1' || choise<'8') && choise != 'q')return true;
	else return false;
}
void Helper::ShowMenu()
{
	char choise;
	do {
		cout << "����� ���������� � ���������� ������� ������\n";
		cout << "�������� ������� ��:\n";
		cout << "1.if\n";
		cout << "2.switch\n";
		cout << "3.for\n";
		cout << "4.while\n";
		cout << "5.do while\n";
		cout << "6.break\n";
		cout << "7.continue\n";
		cout << "8.goto\n";
		cout << "9.������� ID �������� ������������\n";
		cout << "������� 'q' ��� ������\n\n";
		cin >> choise;
		show(choise);
		cout << '\n';
	} while (isValid(choise));
}