// Project 12-1.cpp : Defines the entry point for the console application.
//ИЗМЕНИЛ ЗАДАНИЕ СРЗДАТЬ СВОЕ ПОДОБИЕ VECTOR

#include "stdafx.h"
#include<iostream>
using namespace std;
template<class X> class Queue
{
	X *DynMas;
	int Maxsize, putind, getind;
public:
	Queue(int len) {
		DynMas = new X[len];
		Maxsize = len;
		putind = getind = 0;
	}
	~Queue() {
		delete[](DynMas);
	}
	void Put(char what) {
		DynMas[putind] = what;
		if (putind<Maxsize)putind++;
	}
	X Get() {
		X a = DynMas[getind];
		if (getind<putind)getind++;
		return a;
	}
};
template<class X> class Stack
{
	X *DynMas;
	int Maxsize, putind, getind;
public:
	Stack(int len) {
		DynMas = new X[len];
		Maxsize = len;
		putind = getind = 0;
	}
	~Stack() {
		delete[](DynMas);
	}
	void Put(char what) {
		DynMas[putind] = what;
		getind = putind;
		if (putind<Maxsize)putind++;
		if (putind == Maxsize)throw 1;
	}
	X Get() {
		X a = DynMas[getind];
		if (getind>0)getind--;
		if (putind>0)putind--;
		return a;
	}
}; 
	int main()
	{
		try {
			setlocale(LC_ALL, "russian");
			cout << "Укажите размер очереди\n";
			int s;
			cin >> s;
			Queue<int> ob(s);
			ob.Put(1);
			cout << ob.Get();
			Stack<char> ob2(2);
			ob2.Put('X');
			ob2.Put('C');
			cout << ob2.Get() << ob2.Get();
		}
		catch (int i) {
			if (i == 1)cout << "Ошибка памяти\n";
		}
		system("PAUSE");
		return 0;
	}

