/* 
 * File:   progTwo.cpp
 * Author: Brandon West
 * Created on November 16, 2017, 11:39 AM
 * Purpose: Numbers class implementation 
 */

#include "progTwo.h"

//static string declaration
const string DayOfYr::month[12] = {"January","February","March","April","May",
                                    "June","July","August","September","October",
                                    "November","December"};

DayOfYr::DayOfYr(int date)
{
    size = 12;
    day = date;
}

void DayOfYr::pDate()
{
    if(day <= 31)
    {
        //Jan
        cout << month[day-1] << " " << day << endl;
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