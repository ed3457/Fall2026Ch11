#pragma once
#include <string>
using namespace std; 
class Employee
{
private:
	string name;
	float salary; 
public:
	void printInfo();

	void setName(string n);
	string getName();
	void setSalary();
	float getSalary();

	Employee();
	Employee(string n, float sal);
};

