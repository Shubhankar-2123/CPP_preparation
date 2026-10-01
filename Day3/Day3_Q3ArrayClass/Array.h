#pragma once
class Array {
	int arr[5] ;

public:
	Array() ;
	Array(int arr[5]);

	void display();

	Array operator+(Array & obj);
	Array operator++(int);



};