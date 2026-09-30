#include<iostream>
using namespace std;

void area(double);
void area(int, int);
void area(double, double);

int main() {
	int a = 4, b = 5;
	double c =3.14, d  = 4.00 ;
	area(c);
	area(a, b);
	area(c, d);
}

void area(double a) {
	cout << " Area of Circle is : " << 3.14 * a * a << endl;

}
void area(int a, int b) {
	cout << " Area of Rectangle is : " << a * b << endl;

}
void area(double a, double b) {
	cout << "Area of Triangle is : " << 0.5 * a * b << endl;
}