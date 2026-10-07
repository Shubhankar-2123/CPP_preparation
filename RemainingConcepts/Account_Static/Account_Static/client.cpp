#include"Account.h"
#include<iostream>
using namespace std;

int main() {
	Account a1;
	a1.display();

	Account a2(1000, "Tom");
	a2.display();
	a2.upadateIntRate();

}