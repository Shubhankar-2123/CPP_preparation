#include"Complex.h"
#include<iostream>
using namespace std;

int main() {

	Complex c1;
	c1.display();
	Complex c2(6, 7);
	Complex c3(2, 2);
	////c2.display();
	//cout << "\nPost-Increment:: ";
	//c1 = c3++;
	//c1.display();
	//c3.display();
	//cout << "\nPre-Increment:: ";
	//c1 = ++c2;
	//c1.display();
	//c2.display();

	//cout << "\nUnary - ::";
	//c1 = -c2;
	//c1.display();
	//c2.display();


	//c2 = c1 + 3;
	//c2.display();
	//c2 = 3 + c1;
	//c2.display();
	try {
		Complex c1;
		c1.display();
		Complex c2(6, 7);
		Complex c3(2, 2);
		c1 = c2 / c3;
		c1.display();
	}
	catch (char) {
		cout <<"Division by zero error!" << endl;
	}
	
	//cout << c2;

	//cin >> c1;
	//
	//cout << c1;
}