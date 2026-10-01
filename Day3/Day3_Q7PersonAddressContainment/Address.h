#pragma once
class Address {
	char city[20];
	int pincode;

public:
	Address();
	Address(const char[], int);

	void display();
};