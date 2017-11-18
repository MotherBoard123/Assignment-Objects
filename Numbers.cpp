/* 
 * File:   Numbers.cpp
 * Author: Brandon West
 * Created on November 16, 2017, 11:39 AM
 * Purpose: Numbers class implementation 
 */

#include "numbers.h"
const string Numbers::less20[20] = {"zero","one","two","three","four","five",
                                    "six","seven","eight","nine","ten","eleven",
                                    "twelve","thirteen","fourteen","fifteen",
                                    "sixteen","seventeen","eighteen",
                                    "nineteen"};
const string Numbers::mids[10] = {" zero ", " ten ", "twenty ", " thirty ", " "
                                  "forty ", " fifty ", " sixty ", " seventy ", 
                                  " eighty ", " ninety "};
string Numbers::hund = "hundred";
string Numbers::thous = "thousand";
Numbers::Numbers()
{
    size = 20;
    nSize = 4;
    index = 0; 
}

void Numbers::getNum()
{
    cout << "Enter number: " << endl;
    cin >> num;
}

void Numbers::ptStr()
{
    if(num == 0)   
    {
        cout << less20[num];
    }
    
    index = num / 1000; //check 1000's place
    
    if(index > 0)
    {
        cout << less20[index] << " " << thous;
    }
    
    num = num % 1000;
    
    index = num / 100;  //check 100's place
    
    if(index > 0)
    {
        cout << less20[index] << " " << hund;
    }
    
    num = num % 100;
    
    if(num >= 20)
    {
        index = num / 10;
        
        if(index > 0)
        {
            cout << mids[index];
        }
    }
    else if(num >= 10)
    {
        cout << less20[num];
        num = 0;
    }
    
    num = num % 10;  
    
    if(num > 0)
    {
        cout << less20[num];
    }
}