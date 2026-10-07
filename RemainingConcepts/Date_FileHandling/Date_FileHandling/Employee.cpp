#include<iostream>
#include<fstream>
//#include<string>
using namespace std;

class Employee
{
    int empno;
    //char name[20];
    string name;
    int salary;
public:
    Employee()
    {
        empno = 0;
        //strcpy(name, "NULL");
        name = "NULL";
        salary = 0;
    }
    /*
    Person(int a, const char* nm)
    {
        age = a;
        strcpy(name, nm);
    }
    */
    Employee(int n, const string nm,int s)
    {
        empno = n;
        name = nm;
        salary = s;
    }
    void accept()
    {
        cout << "\nEnter age and name and salary:: ";
        cin >> empno >> name>>salary;
    }

    void display()
    {
        cout << "\nAge: " << empno << " Name: " << name << " Salary: " << salary;
    }
};
int main() {
	ofstream out;
	out.open("Employee.txt");
    Employee* ptr = NULL;
   
    ptr = new Employee();
    ptr->accept();
    out.write((char*)ptr, sizeof(*ptr));

    

	out.close();
	char cha;
	ifstream in("Employee.txt");
	if (in.fail()) {
		cout << "\nFile not found";
		exit(0);
	}
    do
    {
        in.read((char*)ptr, sizeof(*ptr));
        if (in.eof())
            break;

        ptr->display();
    } while (!in.fail());
    in.close();
	
}