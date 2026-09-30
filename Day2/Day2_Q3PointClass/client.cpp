#include"Point.h"
#include<iostream>
using namespace std;


int main() {
	Point p1;
	p1.showPoint();
	p1.showQuadrant();

	Point p2(-1,1);
	p2.showPoint();
	p2.showQuadrant();

	Point p3(-1,-1);
	p3.showPoint();
	p3.showQuadrant();

	Point p4(1,-1);
	p4.showPoint();
	p4.showQuadrant();
	
}