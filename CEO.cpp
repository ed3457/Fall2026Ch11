#include "CEO.h"
#include <iostream>
using namespace std; 

void CEO::setShares(int s)
{
	shares = s; 

}

int CEO::getShares()
{
	return shares;
}

CEO::CEO()
{
	setShares(10000);
}

CEO::CEO(string n, float sal, float b, int shr):Manager(n,sal,b)
{
	setShares(shr);
}

void CEO::printInfo()
{
	Manager::printInfo();

	cout << getShares() << endl;

}
