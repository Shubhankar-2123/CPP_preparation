#pragma once


class Employee
{
    int emp_id;
    char* name;

    float salary;

public:
    Employee();
    Employee(int,const char [], float);
    ~Employee();
    void display();
    void accept();
    //void getterId();
    //void setterId(int );
    //void getterName();
    //void setterName(const char[]);
    //void getterSalary();
    //void setterSalary(float);
    //void calculateSalary(int);

};
