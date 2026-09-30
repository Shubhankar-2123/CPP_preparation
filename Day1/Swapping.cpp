#include<iostream>
using namespace std;

void passbyref(int& a, int& b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void passbyvalue(int a, int b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int main() {
	int a=10, b=20;
	cout << "Values before swapping: a = " << a << ", b = " << b << endl;
	passbyvalue(a, b);
	cout << "Values pass by value and perform swapping: a =  " << a << ", b = " << b << endl;
	passbyref(a, b);
	cout << "Values pass by ref and perform swapping: a = " << a << ", b = " << b << endl;


}