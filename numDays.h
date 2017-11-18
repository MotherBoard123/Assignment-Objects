/* 
 * File:   numDays.h
 * Author: Brandon West
 * Created on November 17, 2017, 11:30 AM
 * Purpose: NumDays class declaration
 */

#ifndef NUMDAYS_H
#define NUMDAYS_H
#include <iostream>
#include <iomanip>
using namespace std;

class NumDays
{
private:
    float days;     //number of days worked
    float hours;    //Holds hours worked
    int workdy;     //Number of hours for one workday
public:
    NumDays(int);     //constructor
    void setDay(int); //set hours
    void pHours();    //print hours
    NumDays operator + (const NumDays &);   //overload +
    NumDays operator - (const NumDays &);   //overload -
    NumDays operator ++ (int);              //overload ++
};

#endif /* NUMDAYS_H */
