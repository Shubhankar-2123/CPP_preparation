
#include"Employee.h"
#include<iostream>
using namespace std;

int main() {

	try {
		Employee e1;
		e1.accept();
		e1.display();
	}
	catch (int) {
		cout << "Name cannot be empty." << endl;
	}
	catch (char) {
		cout << "Value Cannot be negative." << endl;
	}
	catch (bool) {
		cout << "Special character not allowed." << endl;
	}
}