#include <iostream>
#include<fstream>
using namespace std;
void Kodirovka(char *Text,int key) {
	key %= 26;
	cout << "КЛЮЧ"<<key;
	char *curText = Text;
		while (*curText) {
			*curText += key;
			curText++;
		}
		curText =Text;
		cout << "Текст с ключом " << key << " выглядит так : ";
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
		cout << "Текст с ключом " << key << " выглядит так : ";
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
		cout << "Добро пожаловать, выберите нужную функцию.\n1.Кодировка.\n2.Декодировка.\n3.Взлом.\nДля выхода введите q.\n";
		cin >> in;
		switch (in) {
		case'1':
			cout << "Введите текст для Кодировки или укажите имя файла с текстом(файл должен находится в папке проекта) :\n ";
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
			cout << "Введите ключ: ";
			cin >> key;
			cout << "исходный текст: " << Text << "\n";
			Kodirovka(Text, key);
			cout << "Если хотите раскодировать данное сообщение - введите 1, иначе 2.\n";
			char choise;
			cin >> choise;
			if(choise=='1'){
				cout << "Введите ключ: ";
				cin >> key;
				DeKodirovka(Text,key);
			}
			break;
		case'2':
			cout << "Введите текст для Декодировки: ";
			cin >> Text;
			cout << "Введите ключ: ";
			cin >> key;
			cout << "исходный текст: " << Text << "\n";
			DeKodirovka(Text, key);
			break;
		case'3':
			cout << "Введите текст для Взлома: ";
			cin >> Text;
			cout << "исходный текст: " << Text << "\n";
			Perebor(Text);
			break;
		default:
			cout << "Вы ввели неверное значение, повторите ввод.\n";
		}
	} while (in != 'q');
	system("pause");
}