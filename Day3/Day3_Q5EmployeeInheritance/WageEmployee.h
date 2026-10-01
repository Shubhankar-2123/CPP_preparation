#pragma once
#include"Employee.h"
#include<iostream>
using namespace std;

class WageEmployee : public Employee {
	int hrs = 0;
	int ratehrs = 0;

public:
	WageEmployee() =default;
	WageEmployee(int, int, int, const char[], int, int, int);

	void display();
};