#include"Distance.h"
#include<iostream>
using namespace std;


Distance::Distance() {
	feet = inches = 0;
}

Distance::Distance(int f, int i) {
	inches = i;
	feet = f;
	if (inches > 12)
	{
		feet += inches / 12;
		inches = inches % 12;
	}
}
void Distance::display() {
	cout << feet << " feet, " << inches << " inches" << endl;
}

Distance Distance::operator+(Distance& obj) {

	Distance temp = *this;
	temp.inches = this->inches + obj.inches;
	temp.feet = this->feet + obj.feet;
	return temp;
}
Distance Distance::operator>(Distance& obj) {

	int inch1 = (this->feet * 12) + this->inches;
	int inch2 = (obj.feet * 12) + obj.inches;

	if (inch1 < inch2) {
		return obj;
	}
	else {
		return *this;
	}

}