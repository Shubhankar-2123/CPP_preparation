#include"Distance.h"
#include<iostream>
using namespace std;

int main() {
	Distance d1(4, 5);
	Distance d2(7,14);

	cout << "Distance 1:";
	d1.display();
	cout << "\nDistance 2:";
	d2.display();

	Distance d3 = d1 + d2;
	cout << "\nSum of the Distances :";
	d3.display();
	d3 = d1 > d2;
	cout << "Comparison d1 and d2:\n maxDistance is - ";
	d3.display();
	
}