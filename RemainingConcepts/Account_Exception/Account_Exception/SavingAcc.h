#pragma once
#include"Account.h"
#include<iostream>
using namespace std;

class SavingAcc : public Account{
	
	static float int_rate;
public:
	SavingAcc() = default;
	SavingAcc(float, char[]);

	void display();
	void accept();
	void withdraw(float);
	float calSalary();
};