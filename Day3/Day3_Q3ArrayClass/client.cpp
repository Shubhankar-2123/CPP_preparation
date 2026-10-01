#include"Array.h"
#include<iostream>
using namespace std;

int main() {
	int my_arr[5] = { 1,2,3,4,5 };
	int my_arr2[5] = { 6,7,8,9,1 };
	Array a1;
	a1.display();

	Array a2(my_arr);
	a2.display();

	Array a3(my_arr2);
	a3.display();

	a1 = a2 + a3;
	cout << "addition of 2 array is :";
	a1.display();

	a1 = a2++;
	cout << "Post-increment of and array:\n";

	a1.display();
	a2.display();

}