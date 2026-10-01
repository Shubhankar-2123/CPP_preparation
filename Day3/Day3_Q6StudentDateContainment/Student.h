#pragma once
#include"Date.h"
class Student {
	int rollno;
	char name[20];
	Date birthdate;
public:
	Student();
	Student(int, const char[], int, int, int);
	void display();
};