/* 
 * File:   progTwo.cpp
 * Author: Brandon West
 * Created on November 16, 2017, 11:39 AM
 * Purpose: Homework for chapters 14-15. Use menu to select which homework 
 * assignment to run. 
 */

#include "corpS.h"
#include <iostream>
#include <iomanip>
using namespace std;


CorpS::CorpS()
{
    size = 4;
    total = 0.0;
   
    for(int i = 0;i < size;i++)
    {
        qtrSale[i] = 0;
    }
}

void CorpS::setSal(float q1, float q2, float q3, float q4)
{
    qtrSale[0] = q1;
    qtrSale[1] = q2;
    qtrSale[2] = q3;
    qtrSale[3] = q4;
    
    total = q1 + q2 + q3 + q4;
}

void CorpS::getSal(int index)
{
    cout << "Sales for Q" << index + 1 << " " << qtrSale[index] << endl;
}

void CorpS::getTot()
{
    cout << "Total: " << total << endl;
}

void CorpS::print()
{
    for(int i = 0;i < size;i++)
    {
        cout << setprecision(2) << fixed << showpoint;
        cout << "Q" << i + 1 << qtrSale[i] << endl;
    }
    
}