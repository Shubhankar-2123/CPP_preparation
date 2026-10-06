#include"SavingAcc.h"
#include<iostream>
using namespace std;

int main() {

	
	try {
		SavingAcc s1;
		s1.accept();
		s1.display();
		s1.withdraw(1000);
	}
	catch (int) {
		cout << "Insufficient Balance." << endl;
	}
	catch (...) {
		cout << "Some Exception occur." << endl;
	}

}