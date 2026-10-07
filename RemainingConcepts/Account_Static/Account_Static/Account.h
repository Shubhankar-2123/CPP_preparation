#pragma once
class Account {
	char name[20] ;
	float balance ;
	static int acc_no;
	static float int_rate;

public:
	Account();
	Account(float,const char[]);

	void display();
	//void accept();
	static void upadateIntRate();
	
};