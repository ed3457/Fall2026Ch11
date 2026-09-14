#include "Employee.h"
#include <iostream>
using namespace std;
void Employee::printInfo()
{
	cout << getName() << endl;
	cout << getSalary() << endl;
}

void Employee::setName(string n)
{
	name = n; 
}

string Employee::getName()
{
	return name; 
}

void Employee::setSalary(float s)
{   // validation 
	if (s>=1000)
	salary = s; 

	// else will come later 
}

float Employee::getSalary()
{
	return salary;

}

Employee::Employee()
{
	setName("Not set");
	setSalary(1000);
}
Employee::Employee(string n, float s)
{
	setName(n);
	setSalary(s);

}
