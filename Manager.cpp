#include "Manager.h"
#include <iostream>
using namespace std; 
void Manager::setBonus(float b)
{
	bonus = b;
}

float Manager::getBonus()
{
	return bonus;

}

Manager::Manager()
{
	setBonus(0.2);

}

Manager::Manager(string n, float sal, float b):Employee(n,sal)
{
	/*setName("Not set");
	setSalary(1000);*/

	setBonus(b);


}

void Manager::printInfo()
{
	/*cout << getName() << endl;
	cout << getSalary() << endl;*/
	Employee::printInfo(); // call printInfo from the base class 

	cout << getBonus() << endl;


}
