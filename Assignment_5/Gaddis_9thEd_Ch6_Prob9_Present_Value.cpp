/*
*File: Gaddis 9th Edition Chapter 6 Probrlem 9
*Author: Luis Roldan
*Created on May 7, 2026
*Purpose: Calculate Present Value
*         P=F/(1+r)^n
*/

//sys libraries
#include <iostream> //input-output library
#include <iomanip> //formatting library
using namespace std; //entity organizer

//prototype
float psntVal(float, float, int);

//main f(x)
int main(int argc, char** argv){
    //Variables
    float 
    ftr_Val, //Future Value desire
    rate; //interest rate %
    int 
    time;   //Nuber of years
    cout << "This is a Present Value Computation\n";
    cout << "Input the Future Value in Dollars\n";
    cin >> ftr_Val;
    cout << "Input the Number of Years\n";
    cin >> time;
    cout << "Input the Interest Rate %/yr\n";
    cin >> rate;
    cout << "The Present Value = $";
    cout << fixed << setprecision(2) << psntVal(rate, ftr_Val, time);
    return 0;
}
//f(x) definition
float psntVal(float rate,float ftr_Val,int time){
    float
    power = 1,
    base = (1 + (rate/100));  
    for (int i = 0; i <time; i++){
        power *= base  ;
    }
    return (ftr_Val/ power);    
}