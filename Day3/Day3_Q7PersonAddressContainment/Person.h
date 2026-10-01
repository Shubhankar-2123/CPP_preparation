#pragma once
#include"Address.h"
#include"Date.h"
#include<iostream>
using namespace std;

class Person {
	int age;
	char name[20];
	Date birthdate;
	Address add;

public:
	Person();
	Person(int, const char[], int, int, int,const char[],int);

	void display();
};