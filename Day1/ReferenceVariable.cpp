#include<iostream>
using namespace std;

int main() {
	int a = 6;

	int& ref = a;
	cout << "The value of a and ref before reassigning : " << a << " and " << ref<<endl;
	ref = 10;
	cout << "The value of a and ref after reassigning : " << a << " and " << ref << endl;

	
}