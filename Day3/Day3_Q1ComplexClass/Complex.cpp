#include"Complex.h"
#include<iostream>
using namespace std;

Complex::Complex() {
	cout << "This is default constructor\n" << endl;

	x = 4, y = 4;
}

Complex::Complex(int a, int b) {

	cout << "This is Parameterized constructor\n" << endl;
	x = a;
	y = b;

}

void Complex::display() {

	cout << "Complex Number is : " << x << " + " << y << "i" << endl;


}

Complex Complex::operator++() {
	++this->x;
	++this->y;

	return *this;
}

Complex Complex::operator++(int)
{
	Complex temp = *this;

	++this->x;
	++this->y;

	return temp;

}

Complex Complex::operator-()
{
	Complex temp = *this;

	temp.x = -this->x;
	temp.y = -this->y;

	return temp;
}