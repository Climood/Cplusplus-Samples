#include"stdafx.h"
#include<iostream>
using namespace std;
void Set::FeelTheMas() {
	setlocale(LC_ALL, "rus");
	cout << "Сколько элементов добавить во множество?\n";
	int j; cin >> j;
	for (int i = 0; i < j; i++) {
		char temp;
		cout << "Введите элемент для внесения во множество: ";
		cin >> temp;
		Mas[i] = temp;
		len++;
	}
}
void Set::showSet() {
	for (int i = 0; i < len; i++) {
		cout << Mas[i] << " ";
	}
	cout << endl;
}
Set Set::operator+(Set op2){
	Set op3=*this;
	for (int i = 0; i < op2.len; i++) {
		op3 = op3 + op2.Mas[i];
	}
	return op3;
}
Set Set::operator+(char x){
	Set NewMas;
	if (len == Maxsize) { cout << "Множество полно.\n";
	return *this;
	}
	NewMas = *this;
	if (!IsMember(x)) {
		NewMas.Mas[NewMas.len] = x;
		NewMas.len++;
	}
	return NewMas;
}
Set Set::operator-(Set op2){
	Set NewMas;
	if (len <= op2.len) {
		if (len < op2.len)  cout << "Длина первого меньше длины второго!\n";
		if (len == op2.len)cout << "Длины равны, получим пустое множество.\n";
		return NewMas;
	}
	NewMas = *this;
	for (int i = 0; i < op2.len; i++) {
		NewMas = NewMas - op2.Mas[i];
	}
	return NewMas;

}
Set Set::operator-(char x) {
	Set NewMas;
	int i = find(x);
	for (int j = 0; j < len; j++) {
		if (j != i)NewMas = NewMas + Mas[j];
	}
	return NewMas;
}