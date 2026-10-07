#include<iostream>
#include<fstream>
//#include<string>
using namespace std;

int main() {
	ofstream out;
	out.open("Character.txt");
	char ch = 'A';
	while (ch >= 'A' && ch <= 'Z') {
		out << ' ' << ch;
		ch++;
	}

	out.close();
	char cha;
	ifstream in("Character.txt");
	if (in.fail()) {
		cout << "\nFile not found";
		exit(0);
	}
	//do {
	//	if (in.eof()) {
	//		break;
	//	}
	//	in >> cha;
	//	cout << cha << ' ';
	//	
	//} while (!in.eof());
	while (in >> cha) {
		cout << cha << ' ';
	}
}