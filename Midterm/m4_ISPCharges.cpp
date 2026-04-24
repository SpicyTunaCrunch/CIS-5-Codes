/*
*File: Midterm Question 4 ISP Charges
*Author: Luis Roldan
*Created on April 23, 2026
*Purpose: Calculate the Bill
*/

//syslibraries
#include <iostream> //input-output libraries
#include <iomanip> // Fotmatting
using namespace std;

//prototypes
float planA(int &);
float planB(int &);
float planC(int &);

//main f(x)
int main(int argc, char** argv){
    //vairiables
    int 
    hrs; //hours of usage
    char
    choice; //plan chosen
    float 
    a, b, c; // plan totals to compate

    cout << "Choose a plan and input hours usage";
    cin >> choice >> hrs;

    a = planA(hrs);
    cout << a;
}
//defining f(x)s
float planA(int &hrs){
    //variables
    float 
    price; // includes a 16.99 monthly base charge
    //extra20, //additional hour charge up to 20 hours
    //above20; //additional hour charge above 20 hours
    //initialization 
    price= 16.99; 
    if (hrs >10 && hrs <=20 ){
        price += ((hrs-10)*.95f); 
    }
    if ( hrs >= 21 ){ 
        price += ((hrs - 20) *.85f);
    }
    return price;
}
