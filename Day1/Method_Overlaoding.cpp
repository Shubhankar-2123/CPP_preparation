#include<iostream>
using namespace std;



void calculate(int a, int b) {
	cout << "The sum of the 2 int numbers is: " << a + b<<endl;
}
void calculate(float a, float b) {
	cout << "The sum of the 2 float numbers is: " << a + b<<endl;
}

void calculate(int a, int b, int c) {
	cout << "The multiplication of 3 numbers is : " << a * b * c<<endl;
}

int main() {
	int a = 4, b = 6;
	float c = 6.66, d = 3.33;
	calculate(a, b);
	calculate(c, d);
	calculate(3, 4, 5);


}