#include<iostream>
using namespace std;

int square(int);
int main() {
	int num, res;
	cout << "Enter a number: ";
	cin >> num;

	res = square(num);
	cout << " The square of the number is : " << res << endl;

}

inline int square(int n) {
	return n * n;
}