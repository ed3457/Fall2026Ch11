// Fall2026Ch11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Employee.h"
#include "Manager.h"
using namespace std; 

int main()
{
	Employee e1("Jack Smith", 20000);

	Manager m1("Mary Jones", 40000, 0.4);

	e1.printInfo();

	m1.printInfo();
}

