#include"Student.h"
#include<iostream>
using namespace std;

Student::Student(){

	roll = 0;
	strcpy_s(name, 20, "Default");
	marks = 40;
}

Student::Student(int r,  const char n[], float m) {
	roll = r;
	strcpy_s(name, 20, n);
	marks = m;
}

void Student::displayDetails() {
	
	cout << "Roll no. : " << roll << endl;
	cout << "Name : " << name << endl;
	cout << "marks : " << marks << endl;

}
void Student::calculateGrade() {

	if (marks < 60 && marks >=0) {
		cout << 'F';
	}else if(marks >= 60 && marks < 70){

		cout << 'C';
	}
	else if (marks >= 70 && marks < 80) {
		cout << 'B';
	}
	else if (marks >= 80 && marks < 90) {
		cout << 'A';
	}
	else if (marks >= 90 && marks <= 100) {
		cout << "A+";
	}
	else {
		cout << "invalid marks .";
	}
}
