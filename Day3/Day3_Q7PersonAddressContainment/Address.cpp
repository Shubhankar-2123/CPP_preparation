#include"Address.h"
#include<iostream>
using namespace std;

Address::Address() {
	strcpy_s(city, 20, "Pune");
	pincode = 0;
}

Address::Address(const char c[],int p){
	strcpy_s(city, 20, "Pune");
	pincode = p;
}

void Address::display() {
	cout << "City : " << city << endl;
	cout << "pincode: " << pincode << endl;
}