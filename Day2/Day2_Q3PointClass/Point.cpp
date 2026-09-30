#include"Point.h"
#include<iostream>
using namespace std;

Point::Point() {
	x = y = 1;
}
Point::Point(int a, int b) {
	x = a;
	y = b;

}
void Point::showPoint(){ 
	cout << "Cordinates: x = " << x << " and y = " << y<< endl;
}

void Point::showQuadrant() {
	if (x > 0 && y > 0) {
		cout << "Cordinates lies in 1st Quadrant" << endl;
	}
	else if (x < 0 && y > 0) {
		cout << "Cordinates lies in 2nd Quadrant" << endl;
	}
	else if (x < 0 && y < 0) {
		cout << "Cordinates lies in 3rd Quadrant" << endl;
	}
	else  {
		cout << "Cordinates lies in 4th Quadrant" << endl;
	}
	
}