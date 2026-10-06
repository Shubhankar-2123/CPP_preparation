#pragma once
#include"Student.h"
#include"Trainer.h"



int main() {
	ofstream out;
	out.open("MyFile.txt");
	if (!out.is_open()) {
		cout << "Cannot open File.";
		exit(0);
	}
	Trainer::Trainer t1(1001, "Tom");
	t1.display();
	Trainer::writeFile(t1,out);
	Student::Student s1(2001, "mom");
	s1.display();
	Student::writeFile(s1,out);

	out.close();
    ifstream in;
    in.open("MyFile.txt");

    if (in.fail()) {
        cout << "\nFile not found or cannot be opened.";
        return 1;
    }

    cout << "\n--- Reading Data Back From File ---" << endl;

    // Create fresh, empty objects to load the file data into
    Trainer::Trainer t2;
    Student::Student s2;

    // Call the correct READ functions, passing the input stream 'in'
    Trainer::readFile(t2, in);
    Student::readFile(s2, in);

    // Display the newly populated objects to verify it worked
    t2.display();
    s2.display();

    in.close(); // Clean up the input stream
    return 0;
}