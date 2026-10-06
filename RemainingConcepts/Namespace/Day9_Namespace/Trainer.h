#pragma once
#include<iostream>
#include<fstream>
//#include<stdlib.h>
//#include<string>
//#include<sstream>
//#include<vector>
//#include<exception>
using namespace std;

namespace Trainer {

	class Trainer {
		int id = 0;
		string name = "*";
	public:
		Trainer() = default;
		Trainer(int , string );

		void display();

		friend void writeFile(Trainer&, ofstream&);
		friend void readFile(Trainer&, ifstream&);

	};

	void writeFile(Trainer&, ofstream&);
	void readFile(Trainer&, ifstream&);
}