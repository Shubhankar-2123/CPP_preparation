#pragma once
class Complex {
	int x, y;

public:
	Complex();

	Complex(int, int);

	void display();
	Complex operator++();
	Complex operator++(int);
	Complex operator-();
};
