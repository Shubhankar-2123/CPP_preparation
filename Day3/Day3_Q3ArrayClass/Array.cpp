#include"Array.h"
#include<iostream>
using namespace std;


Array::Array() {
	for (int i = 0; i < 5;i++) {
		arr[i] = 0;
	}
}

Array::Array(int a[5]) {
	for (int i = 0;i < 5; i++) {
		arr[i] = a[i];
	}
}

void Array::display() {

	for (int i = 0;i < 5; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

Array Array::operator+(Array& obj) {

	Array temp;
	for (int i = 0;i < 5; i++) {
		temp.arr[i] = this->arr[i] + obj.arr[i];
	}
	return temp;
}

Array Array::operator++(int) {
	Array temp;
	for (int i = 0;i < 5; i++) {
		temp.arr[i] = this->arr[i];
		++this->arr[i];
	}
	return temp;

}