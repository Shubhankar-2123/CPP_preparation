#pragma once
class Distance {
	
	int feet;
	int inches;
public:
	Distance();
	Distance(int, int);

	void display();

	Distance operator+(Distance &obj);
	Distance operator>(Distance& obj);

};