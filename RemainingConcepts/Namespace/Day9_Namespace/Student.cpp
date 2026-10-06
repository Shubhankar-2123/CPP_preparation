#include "Student.h"
#include<fstream>
namespace Student {
	Student::Student(int i, string s) {
		id = i;
		name = s;
	}
	void Student::Student::display() {
		cout << "Student id : " << id << endl;
		cout << "Student name : " << name << endl;
	}

	void writeFile(Student& obj, ofstream& fout) {

		fout << obj.id << endl;
		fout << obj.name << endl;
	}
	void readFile(Student& obj, ifstream& fin) {

		fin >> obj.id;
		fin >> obj.name;

	}
}