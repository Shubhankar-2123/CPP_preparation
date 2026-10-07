#include"Account.h"
#include<iostream>
using namespace std;

int Account::acc_no = 100;
float Account::int_rate = 2.5f;

Account::Account() {

	balance = 1000;
	strcpy_s(name, 20, "Default");
	acc_no++;

}

Account::Account(float b,const char n[]) {
	balance = b;
	strcpy_s(name, 20, n);
	acc_no++;
}


void Account::display() {
	cout << "Account NO.: "<<acc_no<<endl;
	cout << "Name: "<<name<<endl;
	cout << "Initial Balance: "<<balance<<endl;
	balance += balance * int_rate/100;
	cout << "Balance with added intrest: "<<balance<<endl;
	
}
void Account::upadateIntRate() {
	cout << "Before Update Interest Rate is: " << int_rate << endl;
	int_rate += 0.5f;
	cout << "After Update Interest Rate is: " << int_rate << endl;
}