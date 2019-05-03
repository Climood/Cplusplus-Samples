#include"stdafx.h"
#include<iostream>
using namespace std;
void Helper::show(char what)
{
	switch (what) {
	case '1':
		cout << "1.if(условие){действия}\nelse{действия} \n";
		break;
	case '2':
		cout << "2.switch(параметр(только целое или символ))\n{case(1ый вариант параметра): break(если нужен);\ncase(2ой): break;\n default:(если нужен);\n";
		break;
	case '3':
		cout << "3.for(переменная инициализации;условие выхода;изменение переменной) {действие} \n";
		break;
	case '4':
		cout << "4.while(условие(будет делать, пока истинно)){действие}\n";
		break;
	case '5':
		cout << "do{действие}while(условие)\nПРИМЕЧАНИЕ: Этот цикл проверяет условие ПОСЛЕ первой прогонки, т.е. 1 раз он выполнится точно.\n";
		break;
	case '6':
		cout << "break; Завершает выполнения цикла вне зависимости от того, в какой части цикла был вызван\nПРИМЕЧАНИЕ: в случае switch он завершает выполнение текущей case ветви\n";
		break;
	case '7':
		cout << "continue; Пропускает текущий ШАГ цикла, пример for(x=0;x<100;x++)\n{if(x%2)continue;\ncout<<x<<' '}\nНа каждом нечетном числе шаг цикла пропускается и не выводит х\n";
		break;
	case '8':
		cout << "метка:\n\n\n goto метка;\nПРИМЕР:metka1:\nfor()x++;\nif(x<100)goto metka1;\n";
		break;
	case '9':
		get_ID();
		break;
	case 'q':
		cout << "EXIT" << endl;
		break;
	default: cout << "Вы выбрали несуществующий пункт.\n";
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
		cout << "Добро пожаловать в справочную систему сереги\n";
		cout << "Выберите справку по:\n";
		cout << "1.if\n";
		cout << "2.switch\n";
		cout << "3.for\n";
		cout << "4.while\n";
		cout << "5.do while\n";
		cout << "6.break\n";
		cout << "7.continue\n";
		cout << "8.goto\n";
		cout << "9.ВЫВЕСТИ ID ТЕКУЩЕГО ПОЛЬЗОВАТЕЛЯ\n";
		cout << "Введите 'q' для выхода\n\n";
		cin >> choise;
		show(choise);
		cout << '\n';
	} while (isValid(choise));
}