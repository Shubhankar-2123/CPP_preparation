#pragma once
#include"Date.h"
class Employee {
	int eid;
	char name[20];
	Date birthdate;

public:
	Employee();
	Employee(int, const char[], int, int, int);

	void display();
};