#include<iostream>
using namespace std;

void max(int, int);
void max(int, int, int);
void max(double, double);
int main() {
	int a = 5, b = 10, c = 20;
	double d = 3.33, e = 5.55;

	max(a, b);
	max(a, b, c);
	max(d, e);
}
void max(int a, int b) {
	
	if (a < b) {
		cout << "The greater number is : " << b << endl;
	}
	else {
		cout << "The greater number is : " << a << endl;
	}
}

void max(int a, int b, int c) {
	if (a > b && a > c) {
		cout << "The greater number is : " << a << endl;
	}
	else if(b>c) {
		cout << "The greater number is : " << b << endl;
	}
	else {
		cout << "The greater number is : " << c << endl;
	}
}

void max(double a, double b) {
	if (a < b) {
		cout << "The greater number is : " << b << endl;
	}
	else {
		cout << "The greater number is : " << a << endl;
	}
}