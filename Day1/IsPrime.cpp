#include<iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter any number: ";
	cin >> num;

	for (int i = 2; i * i < num; i++) {
		if (num % i == 0) {
			cout << " The number is not Prime.";
			return 0;
		}
	}
	cout << "The Given number is prime.";
	return 0;
}