#include <iostream>
#include<fstream>
using namespace std;
void Kodirovka(char *Text,int key) {
	key %= 26;
	cout << "����"<<key;
	char *curText = Text;
		while (*curText) {
			*curText += key;
			curText++;
		}
		curText =Text;
		cout << "����� � ������ " << key << " �������� ��� : ";
		while (*curText) {
			cout << *curText;
			curText++;
		}
		curText = Text;
		cout << endl;
}
void DeKodirovka(char *Text, int key) {
	key %=26;
	char *curText = Text;
		while (*curText) {
			*curText -= key;
			curText++;
		}
		curText = Text;
		cout << "����� � ������ " << key << " �������� ��� : ";
		while (*curText) {
			cout << *curText;
			curText++;
		}
		curText = Text;
		cout << endl;
}
void Perebor(char *Text) {
	for (int i = 0; i < 26; i++) {
		DeKodirovka(Text, i);
		int j = -i;
		DeKodirovka(Text, j);
	}
}
int main() {
	setlocale(LC_ALL, "russian");
	char in;
	char Text[180];
	int key;
	do {
		cout << "����� ����������, �������� ������ �������.\n1.���������.\n2.�����������.\n3.�����.\n��� ������ ������� q.\n";
		cin >> in;
		switch (in) {
		case'1':
			cout << "������� ����� ��� ��������� ��� ������� ��� ����� � �������(���� ������ ��������� � ����� �������) :\n ";
			cin >> in;
			switch (in)
			{
			case '1':
				break;
			case '2':
				break;
			default:
				break;
			}
			cout << "������� ����: ";
			cin >> key;
			cout << "�������� �����: " << Text << "\n";
			Kodirovka(Text, key);
			cout << "���� ������ ������������� ������ ��������� - ������� 1, ����� 2.\n";
			char choise;
			cin >> choise;
			if(choise=='1'){
				cout << "������� ����: ";
				cin >> key;
				DeKodirovka(Text,key);
			}
			break;
		case'2':
			cout << "������� ����� ��� �����������: ";
			cin >> Text;
			cout << "������� ����: ";
			cin >> key;
			cout << "�������� �����: " << Text << "\n";
			DeKodirovka(Text, key);
			break;
		case'3':
			cout << "������� ����� ��� ������: ";
			cin >> Text;
			cout << "�������� �����: " << Text << "\n";
			Perebor(Text);
			break;
		default:
			cout << "�� ����� �������� ��������, ��������� ����.\n";
		}
	} while (in != 'q');
	system("pause");
}