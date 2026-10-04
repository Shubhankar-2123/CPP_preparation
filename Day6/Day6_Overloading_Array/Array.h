#pragma once
#include<iostream>
using namespace std;
class Array {
	int size ;
	int* arr;
public:

	Array() ;
	Array(int);
	Array(const Array& );
	Array& operator=(const Array&);
	void accept();
	void display();
	int& operator[](const int);
	const int& operator[](const int) const;
	Array operator+(const Array& obj);
	friend void operator>>(istream&, Array&);
	friend ostream& operator<<(ostream&, Array&);
	~Array();

};