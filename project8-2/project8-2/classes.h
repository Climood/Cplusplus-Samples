#pragma once
#include<iostream>
//#include<ctime>
using namespace std;
/*class DynMas
{
	double **Dynmas;
	int sizeD1, sizeD2;
public:
	Stack(int size1,int size2) {
		sizeD1 = size1;
		sizeD2 = size2;
		Dynmas = new double *[size1];
		for (int i = 0; i < size1; i++) {
			Dynmas[i] = new double[size2];
		}
	}
	~Stack() {
		for (int i = 0; i < sizeD1; i++) {
			delete[](Dynmas[i]);
		}
		delete[](Dynmas);
	}
	void FullTheArray() {
		for (int i = 0; i < sizeD1; i++) {
			for (int j = 0; j < sizeD2; j++) {
				Dynmas[i][j] = 0 + rand() % 30;
			}
		}
	}
	void ShowTheArray() {
		for (int i = 0; i < sizeD1; i++) {
			for (int j = 0; j < sizeD2; j++) {
				cout << Dynmas[i][j] << " ";
			}
			cout << endl;

		}
	}
};
*/
class Queue
{
	char *DynMas;
	int Maxsize, putind, getind;
public: 
	Queue(int len) {
		DynMas = new char[len];
		Maxsize = len;
		putind = getind = 0;
    }
	~Queue() {
		delete[](DynMas);
	}
	void Put(char what) {
		DynMas[putind] = what;
		if(putind<Maxsize)putind++;
	}
	char Get() {
		char a = DynMas[getind];
		if(getind<putind)getind++;
		return a;
}
}; 
class Stack
{
	char *DynMas;
	int Maxsize, putind, getind;
public:
	Stack(int len) {
		DynMas = new char[len];
		Maxsize = len;
		putind = getind = 0;
	}
	~Stack() {
		delete[](DynMas);
	}
	void Put(char what) {
		DynMas[putind] = what;
		getind=putind;
		if (putind<Maxsize)putind++;
	}
	char Get() {
		char a = DynMas[getind];
		if (getind>0)getind--;
		if (putind>0)putind--;
		return a;
	}
};