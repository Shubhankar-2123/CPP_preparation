#pragma once

class Employee {
	int eid;
	char name[20];
	int salary;


public:
	Employee();
	Employee(int, const char[], int);

	virtual void accept();
	virtual void display();
	
};