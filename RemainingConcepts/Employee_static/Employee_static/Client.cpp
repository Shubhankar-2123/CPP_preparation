
#include"Employee.h"

int main()
{
	Employee e1;
	e1.display();
	e1.accept();
	e1.display();
	//e1.setterId(1000);
	//e1.setterName("Shubhankar");
	//e1.setterSalary(70000);
	//e1.getterId();
	//e1.getterName();
	//e1.getterSalary();
	Employee e2(1001,"Tom",2000.0f);
	e2.display();


	return 0;
}