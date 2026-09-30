#include<iostream>
using namespace std;

int main(){

	int a[5],sum = 0,i;
	float avg;
	for ( i = 0; i < 5;i++)
	{
		cout << "Enter the marks for subject " << i + 1<<": ";
		cin >> a[i];
		sum = sum + a[i];
	}
	avg =(float) sum / i;

	cout << "Sum of the marks is : " << sum << endl;
	cout << "Average of marks is : " << avg;

	return 0;
}