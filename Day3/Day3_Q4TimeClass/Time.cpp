#include"Time.h"
#include<iostream>
using namespace std;

Time::Time() {
	hr = 0;
	min = 0;
	sec = 0;
}

Time::Time(int h, int m, int s) {
	hr = h;
	min = m;
	sec = s;
}

Time Time::operator+(Time &obj) {
	Time temp;
	temp.hr = this->hr + obj.hr;
	temp.min = this->min + obj.min;
	temp.sec = this->sec + obj.sec;
	return temp;
}
Time Time::operator-(Time& obj) {
	Time temp;
	temp.hr = this->hr - obj.hr;
	temp.min = this->min - obj.min;
	temp.sec = this->sec - obj.sec;
	return temp;
}
Time Time::operator*(Time& obj) {
	Time temp;
	temp.hr = this->hr * obj.hr;
	temp.min = this->min * obj.min;
	temp.sec = this->sec * obj.sec;
	return temp;
}

void Time::display() {
	cout << "Time :" << hr << ":" << min << ":" << sec << endl;
}

