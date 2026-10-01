#pragma once
class Time {
	int hr;
	int min;
	int sec;

public:
	Time();
	Time(int, int, int);

	void display();
	Time operator+(Time &obj);
	Time operator-(Time& obj);
	Time operator*(Time& obj);

};