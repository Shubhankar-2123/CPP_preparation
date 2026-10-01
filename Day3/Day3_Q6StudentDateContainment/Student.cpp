#include"Student.h"
#include<iostream>
using namespace std;

Student::Student() {
	rollno = 0;
	strcpy_s(name, 20, "Default");

}

Student::Student(int r, const char n[] , int d, int m, int y) :
	birthdate(d,m,y)
{

	rollno = r;
	strcpy_s(name, 20, n);


}

void Student::display()
{
	cout << "Rollno. :" << rollno<<endl;
	cout << "Name : " << name<<endl;
	birthdate.display();
}