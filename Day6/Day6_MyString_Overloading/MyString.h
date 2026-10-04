#pragma once


class MyString {
	int length;
	char* sptr;

public:
	MyString();
	MyString(const char[]);
	MyString(const MyString&);
	MyString(char, int);
	void display();
	MyString& operator=(const MyString&);
	MyString operator+(const MyString&);
	bool operator==(MyString&);
	//friend void operator<<(MyString&);
	char& operator[]( int num);
	~MyString();
};