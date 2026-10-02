#pragma once
class Date
{
	int day=0;
	int month=0;
	int year=0;

public:
	Date() = default;
	Date(int, int, int);
	void accept();
	void display();
};