#include"SalesPerson.h"
#include<iostream>
using namespace std;

int main() {

	//SalesPerson s1;
	//s1.display();

	//SalesPerson s2(10,1000,5,3 ,101, "Shubhankar", 23, 4, 2005);
	//s2.display();

	//Employee* ptr = nullptr;

	//ptr = new WageEmployee();
	//ptr->accept();
	//ptr->display();

	//ptr = new SalesPerson();
	//ptr->accept();
	//ptr->display();

	Employee* ptr1[2];

	ptr1[0] = new WageEmployee();
	
	ptr1[1] = new SalesPerson();

	cout << "------------Accepting Details------------" << endl;
	for (int i = 0; i < 2; i++) {
		ptr1[i]->accept();
	}

	cout << "------------Displaying Details------------" << endl;
	for (int i = 0; i < 2; i++) {
		int temp;
		ptr1[i]->display();
		temp = ptr1[i]->calSalary();
	
		cout << "\nSalary of emp "<<i+1 <<" is : " << temp << endl;
		cout << "------------------------" << endl;
	}

	

	// Housekeeping
	for (int i = 0; i < 2; i++) {
		delete ptr1[i];
	}

	return 0;
}