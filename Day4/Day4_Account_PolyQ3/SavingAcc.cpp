#include"SavingAcc.h"
#include<iostream>
using namespace std;

float SavingAcc::int_rate = 4.5;
SavingAcc::SavingAcc(float b, char n[]) :
	Account(b, n){ }

void SavingAcc::display() {

	Account::display();
	
}
void SavingAcc::accept() {
	Account::accept();
}

float SavingAcc::calSalary() {
	balance = balance + (balance * int_rate/100);
	return balance;
}