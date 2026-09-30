#pragma once
class Student {
	int roll;
	char name[20];
	float marks;

public:
	Student();
	Student(int r, const char n[], float);
	void displayDetails();
	void calculateGrade();

};