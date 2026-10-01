#include"Student.h"
#include<iostream>
using namespace std;

int main() {
	Student s1;
	s1.display();

	Student s2(23, "Shubhankar", 23, 4, 1005);
	s2.display();
}
