#include"stdafx.h"
#include<iostream>
using namespace std;

void Set::Feel(){
	int number;
	cout << "Сколько элементов хотите положить в множество? \n";
	cin >> number;
	char x;
	for (int i = 0; i < number; i++) {
		cout << "Введите элемент для вноса в множество.\n";
		cin >> x;
		Mas_Set[i] = x;
		len++;
	}
}
void Set::show(){
	for (int i = 0; i < len; i++) {
		cout << "Mas_Set[" << i << "] =" << Mas_Set[i] << "\n";
}
	cout << "\n\n";
}
Set Set::operator+(char x) {
	Set NewMas = *this;
	if (len == MAX_SIZE) { cout << "Множество полное!\n";
	return *this;
	}
	if (find(x) == -1) {
		NewMas.Mas_Set[NewMas.len] = x;
		NewMas.len++;
	}
	return NewMas;
}
Set Set::operator+(Set op2) {
	Set NewMas = *this;
	for (int i = 0; i < op2.len; i++) {
		if (!IsMember(op2.Mas_Set[i])) {
			NewMas = NewMas + op2.Mas_Set[i];
		}
	}
	return NewMas;
}
Set Set::operator-(char x) {
	Set NewMas; 
	int f = find(x);
	for (int i = 0; i < len; i++) {
		if(f!=i) NewMas = NewMas + Mas_Set[i];
	}
	return NewMas;
}
Set Set::operator-(Set op2) {
	Set NewMas=*this;
	for (int i = 0; i < op2.len; i++) {
		NewMas = NewMas - op2.Mas_Set[i];
	}
	return NewMas;
}
bool Set::operator>(Set op2) {
	if (op2 < *this)return true;
	return false;
}
bool Set::operator<(Set op2) {
	for (int i = 0; i < len; i++) {
		if (op2.find(Mas_Set[i]) == -1)return false;
	}
	return true;
}
Set Set::operator&(Set op2) {
	Set NewMas;
	for (int i = 0; i < len; i++) {
		if (op2.find(Mas_Set[i])!=-1)NewMas = NewMas + Mas_Set[i];
	}
	return NewMas;
}
Set Set::operator|(Set op2) {
	Set NewMas;
	/* КОМПАКТНО, НО ДОЛГО*/
	NewMas = *this + op2;
	NewMas = NewMas - (*this&op2);
	return NewMas;
}