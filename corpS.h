/* 
 * File:   corpS.cpp
 * Author: Brandon West
 * Created on November 16, 2017, 11:39 AM
 * Purpose: CorpS class declaration 
 */
#ifndef CORPS_H
#define CORPS_H

class CorpS
{
private:
    int size;           //number of quarters
    float total;        //corporate total
    float qtrSale[];    //quarter sales
public:
    CorpS();
    void setSal(float,float,float,float);
    void getTot();      //Get corporate total
    void getSal(int);   //sale look up
    void print();       //print table
};


#endif /* CORPS_H */

