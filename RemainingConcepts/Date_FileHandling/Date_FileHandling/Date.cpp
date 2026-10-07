#include<iostream>
#include<fstream>
//#include<string>
using namespace std;

int main() {
	ofstream out;
	out.open("Date.txt");
	int day;
	int month;
	int year;

	cout << "Enter Date:" << endl;
	cout << "Day: ";
	cin >> day;
	cout << "Month: ";
	cin >> month;
	cout << "Year: ";
	cin >> year;
	out <<"\n" << day<<',' << month <<',' << year;

	out.close();

	ifstream in("Date.txt");
	if (in.fail())
	{
		cout << "\nFile not found..";
		exit(0);
	}
	int dd;
	int mm;
	int yy;
	char coma;
	do {
		in >> dd >>coma>> mm>> coma >> yy;
		cout << "\n" << dd<<coma << mm <<coma<< yy;
		if (in.eof())
			break;
	} while (!in.eof());
}