#pragma once
#include<iostream>
class Array
{
private:
	int *arr;
	int count;
	void init();
	void swap(int, int);
public:
	explicit Array();
	Array(int);
	~Array();
	void BubleSort();
	friend std::ostream& operator <<(std::ostream&, Array&);
	void InsertSorted();
	void SelectSorted();
};

