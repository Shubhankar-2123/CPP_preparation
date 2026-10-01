#include"Person.h"
#include<iostream>
using namespace std;

Person::Person() {
	age = 0;
	strcpy_s(name, 20, "Default");
}

Person::Person(int a, const char n[], int d, int m, int y,const char c[],int p) :
	birthdate(d, m, y),
	add(c,p)
{
	age = a;
	strcpy_s(name, 20, n);
}

void Person::display() {
	cout << "Name : " << name << endl;
	cout << "Age : " << age << endl;
	birthdate.display();
	add.display();
}