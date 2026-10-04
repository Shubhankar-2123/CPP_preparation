#pragma once
#include<iostream>
using namespace std;
class Complex {
	int real ,img;

public:
	Complex();

	Complex(int, int);

	void display();
	Complex operator++();
	Complex operator++(int);
	Complex operator-();
	Complex operator+(int );
	Complex operator+(Complex& obj);
	Complex operator-(Complex& obj);
	Complex operator*(Complex& obj);
	Complex operator/(Complex& obj);
	friend Complex operator+(int,Complex&);
	friend void operator<<(ostream&, Complex&);
	friend void operator>>(istream&, Complex&);
};
