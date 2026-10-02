#pragma once
#include"Account.h"

class RecurringAcc :public Account {
	float instalmentAmt;
	int noOfInstallments;
	static float int_rate;
public:
	RecurringAcc();
	RecurringAcc(float, int, float, char[]);

	void display();
	void accept();
	float calSalary();

};