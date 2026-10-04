#include"Array.h"
#include<iostream>
using namespace std;



Array::Array(){
	size = 5;
	arr = new int[size];
	for (int i=0;i < size;i++) {
		arr[i] = 0;

	}
	//cout << "Default Constructor invoke.\n";
}

Array::Array(int s) {
	size = s;
	arr = new int[size];
	for (int i=0;i < size;i++) {
		arr[i] = 0;
	}
	//cout << "\nParametarize Constructor invoke.\n";
}

Array::Array(const Array& obj) {
	this->size = obj.size;             // 1. Copy the size FIRST
	this->arr = new int[this->size];   // 2. Allocate memory using the correct size

	for (int i=0;i < this->size;i++) {
		this->arr[i] = obj.arr[i];
	}
	//cout << "\nCopy Constructor invoke.\n";
}

Array& Array::operator=(const Array& obj) {
	if (this != &obj) {
		delete[] this->arr;
		this->size = obj.size;
		this->arr = new int[this->size];
		for (int i = 0; i < this->size; i++) {
			this->arr[i] = obj.arr[i];
		}
	}
	return *this;
}
void Array::accept() {
	
	for (int i = 0;i < this->size;i++) {
		cout << "Enter element: ";
		cin >> this->arr[i];
	}
}

void Array::display() {
	for (int i=0;i < size;i++) {
		cout << arr[i];
		cout << "\t";
	}
	 
}

int& Array::operator[](const int num) {
	return arr[num];
}

const int& Array::operator[](const int num) const {
	return arr[num];
}

Array Array::operator+(const Array& obj) {
	Array temp(this->size);
	for (int i = 0;i < size; i++) {
		temp.arr[i] = this->arr[i] + obj.arr[i];
	}
	return temp;
}

void operator>>(istream& in, Array& obj)
{
	cout << "enter size of arr:" << endl;
	in >> obj.size;
	for (int i = 0;i < obj.size;i++) {
		cout<<"enter the ele" << endl;
		in >> obj.arr[i];
	}
}
ostream& operator<<(ostream& out, Array& obj) {
	for (int i = 0;i < obj.size;i++) {
		
		out << obj.arr[i];
	}
	return out;
}
Array::~Array() {
	//cout << "\nDestructor invoke.\n";
	//cout << "Memory address before delete: " << this->arr << "\n";
	if (this->arr != NULL) {
		delete[] arr;
		arr = NULL;
	}

	//cout << "Memory address after delete: " << this->arr << "\n";
	//cout << "Memory successfully released!\n";
}