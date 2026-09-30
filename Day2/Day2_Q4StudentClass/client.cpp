#include"Student.h"
#include<iostream>
using namespace std;

int main() {
	Student s1;
	
	s1.displayDetails();
	s1.calculateGrade();

	Student s2(2,"Shubhankar",90);
	s2.calculateGrade();
	s2.displayDetails();

}