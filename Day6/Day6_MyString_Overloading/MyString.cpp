#include"MyString.h"
#include<iostream>
using namespace std;

MyString::MyString() {
	length = 0;
	sptr = new char[length +1];

	//*sptr = '\0';
	sptr[0] = '\0';

	cout << "Default constructor invoked." << endl;
	
}

MyString::MyString(const char s[]) {
	int len = 0;
	while (s[len] != '\0') {
		len++;
	}
	length = len;
	sptr = new char[length + 1];

	strcpy_s(sptr, length+1, s);
	cout << "Pram constructor invoked." << endl;

}

MyString::MyString(const MyString& obj) {

	this->length = obj.length;
	this->sptr = new char[length + 1];
	strcpy_s(this->sptr, length + 1, obj.sptr);
	cout << "Copy constructor invoked." << endl;


}
MyString::MyString(char s, int len) {
	this->length = len;
	this->sptr = new char[this->length + 1];
	for (int i = 0;i < this->length;i++) {
		this->sptr[i] = s;
	}
	sptr[length] = '\0';
}

void MyString::display() {

	cout << sptr << endl;
}

MyString& MyString::operator=(const MyString& obj) {
	cout << "= operator." << endl;

	if (this == &obj) {
		return *this;
	}
	else {
		if (this->sptr != NULL) {
			delete[] sptr;
			sptr = NULL;
		}
		this->length = obj.length;
		this->sptr = new char[length + 1];
		strcpy_s(this->sptr, length + 1, obj.sptr);
	}

	return *this;
	
}
MyString MyString::operator+(const MyString& obj) {
	cout << "+ operator." << endl;
	int len;
	len = this->length + obj.length;
	char *str = new char[len+ 1];
	
	for (int i=0;i < this->length;i++) {
		str[i] = this->sptr[i];
		
	}
	str[length] = ' ';

	for (int j = 0;j < obj.length;j++) {
		str[this->length + j] = obj.sptr[j];
	
	}
	str[len] = '\0';
	cout << str[len]<<"\n";
	MyString temp(str);
	delete[] str;
	return temp;
	
}

bool MyString::operator==(MyString& obj)  {
	if (this->length == obj.length) {
		for (int i = 0; this->sptr[i] != '\0' ;i++) {
			if (this->sptr[i] != obj.sptr[i]) {
				return false;
			}
		}
		return true;
	}
	return false;

	
	
}

//void operator<<(ostream& out, MyString& obj) {
//	out << obj.
//}
char& MyString::operator[]( int num) {

	return this->sptr[num];
}
MyString::~MyString() {

	cout << "Destructor invoked."<<endl;
	if (sptr != NULL) {
		delete[] sptr;
		sptr = NULL;
	}
	
	
}

