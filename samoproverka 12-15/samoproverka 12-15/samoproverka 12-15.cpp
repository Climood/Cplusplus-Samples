// samoproverka 12-15.cpp : Defines the entry point for the console application.
// samoproverka 12-7.cpp : Defines the entry point for the console application.
//
// Project 12-1.cpp : Defines the entry point for the console application.
//ИЗМЕНИЛ ЗАДАНИЕ СРЗДАТЬ СВОЕ ПОДОБИЕ VECTOR

#include "stdafx.h"
#include<iostream>
using namespace std;
using namespace QueueCode;
class Sample {
	int id;
public:
	Sample() { id = 0; }
	Sample(int i) { id = i; }
	void show() { cout << id << endl; }
};
int main()
{
	try {
		setlocale(LC_ALL, "russian");
		/*cout << "Укажите размер очереди\n";
		int s;
		cin >> s;
		Queue<int> ob(s);
		ob.Put(1);
		cout << ob.Get();
		Stack<char> ob2(2);
		ob2.Put('X');
		ob2.Put('C');
		cout << ob2.Get() << ob2.Get();*/
		Queue<Sample> obs(3);
		Sample test(45);
		Sample ob1, ob2;
		obs.Put(test);
		obs.Put(ob2);
		obs.Put(ob1);
		Sample test2 = obs.Get();
		test2.show();
	}
	catch (int i) {
		if (i == 1)cout << "Ошибка памяти\n";
	}
	system("PAUSE");
	return 0;
}