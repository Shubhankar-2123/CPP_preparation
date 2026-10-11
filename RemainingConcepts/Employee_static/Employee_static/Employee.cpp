#include"Employee.h"
#include<iostream>

using namespace std;
Employee::Employee()

{
    emp_id = 0;
    name = new char[8];
    strcpy_s(name, 8,"Default");
    salary = 0.0f;
}

Employee::Employee(int eid, const char nm[], float sal)
   
{
    emp_id = eid;
    int len = strlen(nm);
    name = new char[len + 1];
    strcpy_s(name, len+1, nm);
    salary = sal;
}
void Employee::accept() {
    cout << "Enter Employee Details:-" << endl;
    cout << "Id: ";
    cin >> emp_id;

    cout << "Name: ";
    char temp[100];
    cin >> temp;

    int newLen = strlen(temp);
    delete[] name;
    name = new char[newLen + 1];
    strcpy_s(name, newLen + 1, temp);

    cout << "Salary: ";
    cin >> salary;
}
void Employee::display()
{
    cout << "\n\n-------------------------------------------------------------\n";
    cout << "Details:-" << endl;
    cout << "\nEmp_id:: " << emp_id;
    cout << "\nName:: " << name;
    cout << "\nSalary:: " << salary;
    cout << "\n-------------------------------------------------------------\n";
}

Employee::~Employee() {
    if (name != NULL) {
        delete[] name;
        name = NULL;
    }
}
//
//void Employee::setterId(int i) {
//
//    emp_id = i;
//}
//void Employee::setterName(const char nm[]) {
//    strcpy_s(name, 20, nm);
//}
//void Employee::setterSalary(float s) {
//    salary = s;
//}
//void Employee::getterId() {
//
//    cout << "\nId: " << emp_id;
//}
//void Employee::getterName() {
//    cout << "\nName: " << name;
//}
//void Employee::getterSalary() {
//    cout << "\nSalary: " << salary;
//}

