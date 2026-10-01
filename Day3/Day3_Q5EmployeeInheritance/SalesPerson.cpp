#include"SalesPerson.h"
#include<iostream>
using namespace std;

SalesPerson::SalesPerson(int n_item, int c_item, int h, int r, int id, const char name[], int d, int m, int y) :
	WageEmployee(h,r,id,name,d,m,y) {
	this->n_item = n_item;
	this->c_item = c_item;
}

void SalesPerson::display() {

	WageEmployee::display();
	cout << "Number of items sold : " << n_item<<endl;
	cout << "Commission per item : " << c_item<<endl;
}