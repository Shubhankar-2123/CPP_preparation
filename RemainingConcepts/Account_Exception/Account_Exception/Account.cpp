#include"Account.h"
#include<iostream>
using namespace std;

int Account::acc_no = 100;

Account::Account() {

	balance = 1000;
	strcpy_s(name, 20, "Default");
	acc_no++;

}

Account::Account(float b, char n[]) {
	balance = b;
	strcpy_s(name, 20, n);
	acc_no++;
}

void Account::accept() {
	cout << "Enter Your name: ";
	cin >> name;
	cout << "Enter Balance: ";
	cin >> balance;
	
}
void Account::display() {
	cout << "Account NO.: "<<acc_no<<endl;
	cout << "Name: "<<name<<endl;
	cout << "Balance: "<<balance<<endl;
}