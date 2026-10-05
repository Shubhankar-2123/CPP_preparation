#include"Employee.h"
#include<iostream>
using namespace std;

Employee::Employee() {
	eid = 0;
	strcpy_s(name, 20, "default");
	salary = 0;
}

Employee::Employee(int id, const char n[],int s) \
	
{
	eid = id;
	strcpy_s(name, 20, n);
	salary = s;
}
void Employee::accept() {
	cout << "Enter Empid : ";
	cin >> eid;
	if (eid < 0) {
		throw 'c';
	}
	cout << "\nEnter Name: ";
	cin >> name;
	if (name == " " || strlen(name) == 0) {
		throw 10;
	}
	for (int i = 0;name[i] != '\0';i++) {
		if (name[i] >= 'a' && name[i] <= 'z' || name[i] >= 'A' && name[i] <= 'Z') {
			continue;
		}
		throw false;
	}
	cout << "\nEnter Salary";
	cin >> salary;
	cout << endl;
	if (salary < 0) {
		throw 'c';
	}
	

}
void Employee::display() {
	cout << "Employee id : " << eid << endl;
	cout << "Employee name :" << name << endl;
	cout << "Employee salary: " << salary << endl;;
}