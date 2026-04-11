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
float iR8(float &, float &);
float ffutR8(float &, float &);

//main f(x)
int main(int argc, char** argv){
    //delcaring vatiables
    float
    y1, y2, //inflation for the next years
    cP, oP, // Current price, old price
    infl, futr; // inflation rate, future rate
    char 
    again; //repeat operation
    do {
        if (again == 'y'){
            cout << endl;   }
    cout << fixed << setprecision(2);
    cout << "Enter current price:\n";
    cin >> cP;
    cout << "Enter year-ago price:\n";
    cin >> oP;
    infl = iR8(cP, oP);
    cout << "Inflation rate: " << infl * 100 <<"%\n\n";
    y1 = ffutR8(cP, infl);
    cout << "Price in one year: $" << y1 <<endl;
    y2 = ffutR8(y1, infl);
    cout << "Price in two years: $" << y2 <<endl<<endl;
    cout <<"Again:\n";
    cin >>again;
    } while (again == 'y');
return 0;
}

//defining f(x)s
float iR8(float &currPrice, float &oldPrice){
    float i = currPrice - oldPrice;
    return (i / oldPrice);    }
float ffutR8(float &currPrice, float &r8){
    return (r8 *currPrice) + currPrice;   }
