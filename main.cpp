/* 
 * File:   main.cpp
 * Author: Brandon West
 * Created on November 14, 2017, 11:39 AM
 * Purpose: Homework for chapters 14-15. Use menu to select which homework 
 * assignment to run. 
 */

#include "numbers.h"
#include "progTwo.h"
#include "numDays.h"
#include "dayYear.h"
#include "corpS.h"
#include <string>
#include <cstdlib>

using namespace std;

//Program prototypes for chapter 14
int progOne();  //14.1
int progTwo();  //14.2
int progThr();  //14.3
int progFor();  //14.4
int progFve();  //14.10

int main(int argc, char** argv) {

    int input;     //user program choice input
    
    do
    {
        cout << "\nChoose which program to run (6 to exit):" << endl << endl;
        cout << "1. Numbers Class 14.1" << endl 
             << "2. Day of the year 14.2" << endl
             << "3. Day of the year Modification 14.3" << endl
             << "4. NumDays Class 14.4" << endl
             << "5. Corporate Sales 14.10" << endl;
        cin >> input;
        
        switch(input)
        {
            case 1: progOne();
                    break;
            case 2: progTwo();
                    break;
            case 3: progThr();
                    break;
            case 4: progFor();
                    break;
            case 5: progFve();
                    break;
            case 6: break;
            default: cout << "Enter number 1-10" << endl;
        }
        
    }while(input != 6);
    
    cout << "Thank you.";
    
    return 0;
}

//Numbers Class
int progOne()
{
    Numbers obj;
    
    obj.getNum();   //get the number to convert
    obj.ptStr();
    
    return 0;
}

//Day of the year 14.2
int progTwo()
{
    int day;    //day of year
    
    cout << "Enter the day of the year:" << endl;
    cin >> day;
    
    DayOfYr obj(day);
    obj.pDate();    //print day of year
}

//Day of the year Modification 14.3
progThr()
{
    int day;        //day of year
    string month;   //month of year
    
    cout << "Enter the day of the year:" << endl;
    cin >> day;
       
    DayYr obj(day);
    obj.pDay();    //print day of year
    
    cout << "Enter integer day 0-31:" << endl;
    cin >> day;
    while(day < 0 || day > 31)
    {
       cout << "Enter 0-31" << endl;
       cin >> day;
    }
    cout << "Enter string for month:" << endl;
    cin >> month;
    
    DayYr obj2(month,day);
  
    cout << "This will overload increment operator" << endl;
    obj2++;
    obj2.pInc();   //print new day and month
    
    cout << "This will overload decrement operator" << endl;
    obj2--;
    obj2.pInc();
    
    return 0;
}

//NumDays Class assignment 14.4
progFor()
{
    float empHr = 0.0;  //employee hours worked
        
    NumDays emp1(empHr),emp2(empHr),totEmp(empHr);  //Initialize objects
 
    cout << "Enter number of hours worked:" << endl;
    cin >> empHr;

    emp1.setDay(empHr);   //set num days worked
    emp1.pHours();        //print result 

    //Get hours for second employee
    cout << "Enter number of hours worked employee two:" << endl;
    cin >> empHr;

    emp2.setDay(empHr);
    emp2.pHours();      //Print number days worked, second person.

    totEmp = emp1 + emp2;   //overload addition operator

    cout << "This is employee one days worked + employee two days worked" 
         << endl;
    totEmp.pHours();

    totEmp = emp1 - emp2;   //overload subtraction operator

    //illustrate the subtraction overload is working
    cout << "This is employee one days - employee two days" << endl;
    totEmp.pHours();
    
    totEmp = emp2++;    //increment employee 2
    
    cout << "This is employee two hours incremented and days recalculated" 
         << endl;
    totEmp.pHours();    //output new days worked
        
    cout << "Thank you" << endl;
    
    return 0;
}

//Corporate Sales 14.10
int progFve()
{
    int size = 6;
    int div,index;
    int qtrs = 4;
    CorpS divSal[size];
    CorpS total;    
    float sOne,sTwo,sThree,sFour;
    
    for(int i = 0;i < size;i++)
    {
        cout << "Enter Sales Q1" << endl;
        cin >> sOne;
        cout << "Enter Sales Q2" << endl;
        cin >> sTwo;
        cout << "Enter Sales Q3" << endl;
        cin >> sThree;
        cout << "Enter Sales Q4" << endl;
        cin >> sFour;
        
        divSal[i].setSal(sOne,sTwo,sThree,sFour);
    }
    
    cout << "Enter which division sales totals 1-6" << endl;
    cin >> div;
    cout << "Enter which quarter to retrieve sales 1-4:" << endl;
    cin >> index;
    divSal[div-1].getSal(index-1);
    
    cout << "Sales for each division:" << endl;
    for(int i = 0;i < size;i++)
    {
        cout << "Division " << i + 1 << ":";
        divSal[i].print();
    }
    //output total
    cout << "Corporate total " <<  endl;
    cout << setprecision(2) << fixed << showpoint;
    total.getTot();

    return 0;
}