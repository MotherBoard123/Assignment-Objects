/* 
 * File:   progTwo.cpp
 * Author: Brandon West
 * Created on November 16, 2017, 11:39 AM
 * Purpose: Numbers class implementation 
 */

#include "dayYear.h"
#include <cstring>

//static string declaration
const string DayYr::month[12] = {"January","February","March","April","May",
                                    "June","July","August","September","October",
                                    "November","December"};

DayYr::DayYr(int date)
{
    size = 12;
    day = date;
    index = 0;
}

DayYr::DayYr(string month, int nDay)
{
    day = nDay;
    
    if(month == "january")
    {
        index = 0;
    }
    else if(month == "february")
    {
        index = 1;
    }
    else if(month == "march")
    {
        index = 2;
    }
    else if(month == "april")
    {
        index = 3;
    }
    else if(month == "may")
    {
        index = 4;
    }
    else if(month == "june")
    {
        index = 5;
    }
    else if(month == "july")
    {
        index = 6;
    }
    else if(month == "august")
    {
        index = 7;
    }
    else if(month == "september")
    {
        index = 8;
    }
    else if(month == "october")
    {
        index = 9;
    }
    else if(month == "november")
    {
        index = 10;
    }
    else
    {
        index = 11;
    }
}

DayYr DayYr::operator ++(int)
{
    day++;
    if(day > 31)
    {
        ++index;
        day = 1;
    }
}

DayYr DayYr::operator --(int)
{
    day--;
    if(day == 0)
    {
        --index;
        day = 31;
    }
}

void DayYr::pDay()
{
    if(day <= 31)
    {
        //Jan
        cout << month[0] << " " << day << endl;
    }
    else if(day > 31 && day <= 59)
    {
        //Feb
        cout << month[1] << " " << day - 31 << endl;
    }
    else if(day > 59 && day <= 90)
    {
        //March
        cout << month[2] << " " << day - 58 << endl;
    }
    else if(day > 90 && day <= 120)
    {
        //April
        cout << month[3] << " " << day - 90 << endl;
    }
    else if(day > 120 && day <= 151)
    {
        //May
        cout << month[4] << " " << day - 120 << endl;
    }
    else if(day > 151 && day <= 182)
    {
        //June
        cout << month[5] << " " << day - 151 << endl;
    }
    else if(day > 182 && day <= 212)
    {
        //July
        cout << month[6] << " " << day - 181 << endl;
    }
    else if(day >= 213 && day <= 243)
    {
        //August
        cout << month[7] << " " << day - 212 << endl;
               
    }
    else if(day >= 244 && day <= 273) 
    {
        //September
        cout << month[8] << " " << day - 243 << endl;
    }
    else if(day >= 274 && day <= 304) 
    {
        //October
        cout << month[9] << " " << day - 273 << endl;
    }
    else if(day >= 305 && day <= 334) 
    {
        //November
        cout << month[10] << " " << day - 304 << endl;
    }
    else if(day >= 335 && day <= 365) 
    {
        //December
        cout << month[11] << " " << day - 334 << endl;
    }
}

void DayYr::pInc()
{
    cout << month[index] << " " << day << endl;
}