#pragma once
#include "Manager.h"
class CEO :
    public Manager
{
private:
    int shares; 
public:
    void setShares(int s);
    int getShares();

    CEO();
    CEO(string n, float sal, float b, int shr); 

    void printInfo();// override 
};

