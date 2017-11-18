/* 
 * File:   progTwo.h
 * Author: Brandon West
 * Created on November 16, 2017, 11:39 AM
 * Purpose: Numbers class declaration 
 */

#ifndef DAYYEAR_H
#define DAYYEAR_H

#include <iostream>
#include <string>
using namespace std;

class DayYr
{
private:
    int size;   //number of months
    int day;    //Day of month
    int index;  //index for month
    static const string month[];

public:
    DayYr(int);
    DayYr(string,int);
    void pDay();
    void pInc();    //print increment/decrement
    DayYr operator ++ (int);
    DayYr operator -- (int);
};


#endif 