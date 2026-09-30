#include"Date.h"
#include<iostream>
using namespace std;

int Date::count = 0;

Date::Date() {

	cout << "\nThis is default Constructor.\n";
	date = month = year = 0;
}

Date::Date(int dd, int mm, int yy) {

	cout << "\nThis is a Parameterized Constructor.\n";
	date = dd;
	month = mm;
	year = yy;

}

void Date::showDate() {

	cout << "\nDate:: " << date << "/" << month << "/" << year<<endl;
	
}
void Date::displayCount() {
	count++;
	cout << "\nCount of objects created: " << count << endl;
	
}
