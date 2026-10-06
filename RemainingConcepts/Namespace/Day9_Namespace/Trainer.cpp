#include "Trainer.h"
#include<fstream>
namespace Trainer {
	Trainer::Trainer(int i, string s) {
		id = i;
		name = s;
	}
	void Trainer::Trainer::display() {
		cout << "Student id : " << id << endl;
		cout << "Student name : " << name << endl;
	}

	void writeFile(Trainer& obj, ofstream& fout) {

		fout << obj.id << endl;
		fout << obj.name << endl;
	}
	void readFile(Trainer& obj, ifstream& fin) {

		fin >> obj.id;
		fin >> obj.name;

	}
}