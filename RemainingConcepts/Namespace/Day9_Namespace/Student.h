#pragma once
#include<iostream>
#include<fstream>
//#include<stdlib.h>
//#include<string>
//#include<sstream>
//#include<vector>
//#include<exception>
using namespace std;

namespace Student {
	class Student {
		int id = 0;
		string name = "*";
	public:
		Student() = default;
		Student(int , string );

		void display();
		friend void writeFile(Student&, ofstream&);
		friend void readFile(Student&, ifstream&);
	};

	void writeFile(Student&, ofstream&);
	void readFile(Student&, ifstream&);
}