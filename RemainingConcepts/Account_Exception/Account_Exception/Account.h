#pragma once
class Account {
	char name[20] ;
	static int acc_no;
protected:
	float balance ;

public:
	Account();
	Account(float, char[]);

	virtual void display();
	virtual void accept();
	virtual float calSalary() = 0;
};