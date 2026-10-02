#include"Date.h"
#include<iostream>
using namespace std;

Date::Date(int d,int m,int y ) {

	day = d;
	month = m;
	year = y;

}
void Date::accept() {
	cout << "Enter date : \nday- ";
	cin >> day;
	cout << "month-";
	cin >> month;
	cout << "year-";
	cin >> year;
	cout << endl;
	
}
void Date::display() {
	cout <<"Date :" << day << "/" << month << "/" << year << endl;
}