#pragma once
#include"Date.h"
class Employee {
	int eid;
	char name[20];
	Date birthdate;
	

public:
	Employee();
	Employee(int, const char[], int, int, int);

	virtual void accept();
	virtual void display();
	virtual int calSalary() = 0; //pure -virtual Which make Employee a Abstract class
};