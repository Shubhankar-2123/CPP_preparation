#include<iostream>
using namespace std;

void calculate(float, float, int);
void calculate(float);
int main() {
	float principle, rate;
	int time;
	cout << "Enter Principle amount: ";
	cin >> principle;
	cout << "\nEnter Rate : ";
	cin >> rate;
	cout << "\nEnter Time : ";
	cin >> time;


	calculate(principle, rate, time);
	calculate(principle);
}

void calculate(float principle, float rate, int time)
{
	float SI;
	SI = (float)principle * (rate / 100) * time;

	cout << "The SI at your given Rate and time is : " << SI << endl;
}

void calculate(float principle)
{
	float rate = 10;
	int time = 2;
	float SI;
	SI = (float)principle * (rate / 100) *  time;
	cout << "The SI at rate 10% and time 2year  is : " << SI << endl;

	
}