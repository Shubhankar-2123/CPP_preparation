#include<iostream>
using namespace std;

int main() {
	float basic_salary, hra, pf, da, gross_salary;
	cout << "Enter Basic salary: ";
	cin >> basic_salary;

	hra = 0.15 * basic_salary;
	da = 0.30 * basic_salary;
	

	gross_salary = basic_salary + da + hra;
	pf = 0.125 * gross_salary;

	cout << "The Basic Salary  : " << basic_salary << endl;
	cout << "HRA : " << hra << endl;
	cout << "DA : " << da << endl;
	cout << "PF : " << pf << endl;
	cout << "Gross Salary : " << gross_salary;
}