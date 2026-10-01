#include"Employee.h"
#include<iostream>
using namespace std;

Employee::Employee() {
	eid = 0;
	strcpy_s(name, 20, "default");
}

Employee::Employee(int id, const char n[], int d, int m, int y):
	birthdate(d,m,y)
{
	eid = id;
	strcpy_s(name, 20, n);
}

void Employee::display() {
	cout << "Employee id : " << eid << endl;
	cout << "Employee name :" << name << endl;
	birthdate.display();
}