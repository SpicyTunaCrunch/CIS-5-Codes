/*
*File: Savitch 9th Edition Chapter 4 Problem 5
*Author: Luis Roldan
*Created on April 8, 2026
*Purpose: Esitmated cost
*/

//system libraries
#include <iostream> // input/output library
#include <iomanip>  //Formating library
using namespace std;

//f(x)s
float iR8(float &currPrice, float &oldPrice){
    float i = currPrice - oldPrice;
    return (i / oldPrice) * 100;    }
float futR8(float &currPrice, float &r8){
    r8 = r8 / 100;
    return (r8 *currPrice) + currPrice;   }

//main f(x)
int main(int argc, char** argv){
    //delcaring vatiables
    float
    y1, y2, //inflation for the next years
    cP, oP, // Current price, old price
    infl, futr; // inflation rate, future rate
    char 
    again; //repeat operation

    cout << fixed << setprecision(2);
    cout << "Enter current price:\n";
    cin >> cP;
    cout << "Enter year-ago price:\n";
    cin >> oP;
    infl = iR8(cP, oP);
    cout << "Inflation rate: " << infl <<"%\n\n";
    do {
        int 
        if (int i = 1
    }
}

