#include <iostream>
using namespace std;

//this is not the best type to create a class
//this is introductory section:)

class Employee {
public:
	string name;
	int id;
	string department;
};

int main() {

	//let's create objects

	Employee e1, e2, e3;

	e1.name = "John";
	e1.id = 100;
	e1.department = "HR";

	e2.name = "Kagan";
	e2.id = 111;
	e2.department = "IT";

	e3.name = "Aygun";
	e3.id = 134;
	e3.department = "CRM";

	Employee empl[] = {e1, e2, e3};

	for (int i = 0; i < 3; i++) {
		cout << "Employee name: " << empl[i].name << " employee ID: " << empl[i].id << " and employee department: " << empl[i].department <<"." << endl;
	}

	return 0;

}

/*
Employee name: John employee ID: 100 and employee department: HR.
Employee name: Kagan employee ID: 111 and employee department: IT.
Employee name: Aygun employee ID: 134 and employee department: CRM.


*/
