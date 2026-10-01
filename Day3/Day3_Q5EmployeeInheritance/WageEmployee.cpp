#include"WageEmployee.h"
#include<iostream>
using namespace std;

WageEmployee::WageEmployee(int h, int r, int id, const char n[], int d, int m, int y) :
	Employee(id, n, d, m, y)
{
	hrs = h;
	ratehrs = r;
}

void WageEmployee::display() {

	Employee::display();
	cout << "No. of working hours: " << hrs << endl;
	cout << " Rate per hour: " << ratehrs << endl;
}