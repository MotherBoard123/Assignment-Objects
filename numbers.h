/* 
 * File:   numbers.h
 * Author: Brandon West
 * Created on November 16, 2017, 11:39 AM
 * Purpose: Numbers class declaration 
 */

#ifndef NUMBERS_H
#define NUMBERS_H

#include <iostream>
#include <string>
using namespace std;

class Numbers
{
private:
    int size;   //size of string array
    int nSize;  //max number of digits able to convert
    int num;
    int index;
    static const string less20[];
    static const string mids[];
    static string hund;
    static string thous;
    
public:
    Numbers();
    void getNum();  //get number
    void ptStr();   //Convert num to string and print
};

#endif /* NUMBERS_H */
