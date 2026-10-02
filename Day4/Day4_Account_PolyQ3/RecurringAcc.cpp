#include"RecurringAcc.h"
#include<iostream>
using namespace std;

float RecurringAcc::int_rate = 7.5;
RecurringAcc::RecurringAcc() {
	instalmentAmt = 0;
	noOfInstallments = 0;
}
RecurringAcc::RecurringAcc(float i,int no,float b, char n[]) :
	Account(b, n) {
	instalmentAmt = i;
	noOfInstallments = no;
}

void RecurringAcc::display() {

	Account::display();
	cout << "Installments Amount : " << instalmentAmt << endl;
	cout << "No. of Installments : " << noOfInstallments << endl;

}
void RecurringAcc::accept() {
	Account::accept();
	cout << "Enter Installments Amount : ";
	cin >> instalmentAmt;
	cout << "Enter No. of Installments : ";
	cin >> noOfInstallments;


}

float RecurringAcc::calSalary() {
	balance = balance+(instalmentAmt *noOfInstallments * int_rate / 100);
	return balance;
}