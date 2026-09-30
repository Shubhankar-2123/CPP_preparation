#pragma once
class Date {
private:
	int date, month, year;

	static int count;
public:
	Date();

	Date(int, int, int);

	void showDate();
	static void displayCount();
};