#pragma once
#include"WageEmployee.h"
#include<iostream>
using namespace std;

class SalesPerson : public WageEmployee {
	int n_item = 0;
	int c_item = 0;

public:
	SalesPerson() = default;
	SalesPerson(int, int, int, int, int, const char[], int, int, int);

	void display();
};