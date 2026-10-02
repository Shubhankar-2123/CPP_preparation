#include"SavingAcc.h"
#include"RecurringAcc.h"
#include<iostream>
using namespace std;

int main() {

	//SavingAcc s1;
	//s1.accept();
	//s1.display();
	//
	//float temp;
	//temp = s1.calSalary();
	//cout << "SavingAcc Balance: " << temp << endl;

	RecurringAcc r1;
	r1.accept();
	r1.display();

	float temp1;
	temp1 = r1.calSalary();
	cout << "Recurring Balance: " << temp1 << endl;

}