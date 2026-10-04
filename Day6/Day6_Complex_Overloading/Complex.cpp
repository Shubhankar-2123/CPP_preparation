#include"Complex.h"
#include<iostream>
using namespace std;

Complex::Complex() {
	cout << "This is default constructor\n" << endl;

	real = 4, img = 4;
}

Complex::Complex(int a, int b) {

	cout << "This is Parameterized constructor\n" << endl;
	real = a;
	img = b;

}

void Complex::display() {

	cout << "Complex Number is : " << real << " + " << img << "i" << endl;


}

Complex Complex::operator++() {
	++this->real;
	++this->img;

	return *this;
}

Complex Complex::operator++(int)
{
	Complex temp = *this;

	++this->real;
	++this->img;

	return temp;

}

Complex Complex::operator-()
{
	Complex temp = *this;

	temp.real = -this->real;
	temp.img = -this->img;

	return temp;
}

Complex Complex::operator+(int num) {
	Complex temp;
	temp.real = this->real + num;
	temp.img = this->img + num;

	return temp;
}


Complex operator+(int num, Complex& obj ) {

	Complex temp;
	temp.real = num + obj.real;
	temp.img = num + obj.img;
	return temp;


}

void operator<<(ostream& out, Complex& obj) {
	
	out << "Complex Number is : " << obj.real << " + " << obj.img << "i" << endl;
}

Complex Complex::operator+(Complex& obj) {

	Complex temp;
	temp.real = this->real + obj.real;
	temp.img = this->img + obj.img;
	return temp;
}

Complex Complex::operator-(Complex& obj) {

	Complex temp;
	temp.real = this->real - obj.real;
	temp.img = this->img - obj.img;
	return temp;
}
Complex Complex::operator*(Complex& obj) {

	Complex temp;
	temp.real = (this->real*obj.real) - (this->img*obj.img);
	temp.img = (this->img * obj.real) + (this->real * obj.img) ;
	return temp;
}
Complex Complex::operator/(Complex& obj) {

	Complex temp;
	if ((obj.real * obj.real) + (obj.img * obj.img) == 0) {
		throw 'e';
	}

	temp.real = ((this->real * obj.real) + (this->img * obj.img))/ (obj.real * obj.real) + (obj.img * obj.img);
	temp.img = ((this->img * obj.real) - (this->real * obj.img)) / (obj.real * obj.real) + (obj.img * obj.img);
	return temp;
}
void operator>>(istream& in, Complex& obj) {
	in >> obj.real;
	in >> obj.img;

}
