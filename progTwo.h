/* 
 * File:   progTwo.h
 * Author: Brandon West
 * Created on November 16, 2017, 11:39 AM
 * Purpose: Numbers class declaration 
 */

#ifndef PROGTWO_H
#define PROGTWO_H

#include <iostream>
#include <string>
using namespace std;

class DayOfYr
{
private:
    int size;   //number of months
    int day;    //Day of month
    static const string month[];
public:
    DayOfYr(int);
    void pDate();
};


#endif /* PROGTWO_H */

