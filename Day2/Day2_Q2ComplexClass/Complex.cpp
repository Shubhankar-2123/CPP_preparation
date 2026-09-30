#include"Complex.h"
#include<iostream>
using namespace std;

Complex::Complex() {
	cout << "This is default constructor\n" << endl;

	x = 4, y = 4;
}

Complex::Complex(int a,int b) {

	cout << "This is Parameterized constructor\n" << endl;
	x = a;
	y = b;

}

void Complex::display() {

	cout << "Complex Number is : " << x << " + i" << y << endl;

}