#include "numDays.h"

NumDays::NumDays(int empHr)
{
    days = 0;
    workdy = 8;
    hours = empHr;
}

void NumDays::setDay(int empHr)
{
    hours = empHr;
    days = hours / workdy;
}

void NumDays::pHours()
{
    cout << days << " worked." << endl;
}

NumDays NumDays::operator +(const NumDays &add)
{
    NumDays temp(hours);
    
    temp.days = days + add.days;
    
    return temp;
}

NumDays NumDays::operator -(const NumDays &sub)
{
    NumDays temp(hours);
    
    temp.days = days - sub.days;
    
    return temp;
}

NumDays NumDays::operator ++(int)
{
    NumDays temp(hours);
    
    temp.hours++;    //increment hours
    temp.setDay(hours);
    
    return temp;
}

