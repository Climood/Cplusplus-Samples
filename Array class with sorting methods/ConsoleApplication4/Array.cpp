#include "stdafx.h"
#include "Array.h"
#include<ctime>

Array::Array() {};
Array::Array(int s) {
	arr = new int[s];
	count = s;
	init();
}


Array::~Array()
{
	delete[] arr;
}

std::ostream& operator <<(std::ostream& os, Array& a) {
	for (int i = 0; i < a.count; ++i) {
		os << a.arr[i] << " ";
	}
	os << std::endl;
	return os;
}

void Array::init() {

	srand(time(0));
	for (int i = 0; i < count; ++i) {
		*(arr + i) = 1+rand() % 100;
	}
}

void Array::BubleSort() {
	int out, in;
	for ( out = count - 1; out > 0; --out) {
		for (in = 0; in < out; ++in) {
			if (arr[in] > arr[in + 1])
				swap(in, in + 1);
		}
	}
}

void Array::swap(int f, int s) {
	int Temp = arr[f];
	arr[f] = arr[s];
	arr[s] = Temp;
}

void Array::InsertSorted() {
	for (int j = 1; j < count; j++) {
		int Temp = arr[j];
		int i = j - 1;
		while (i >= 0 && arr[i] < Temp) {
			arr[i + 1] = arr[i];
			--i;
		}
		arr[i + 1] = Temp;
	}
}

void Array::SelectSorted() {
	for (int j = 0; j < count-1; ++j) {
		int min;
		min = j;
		for (int i = j; i < count; ++i) {
			if (arr[i] < arr[min])
				min = i;
		}
		swap(j, min);
	}
}