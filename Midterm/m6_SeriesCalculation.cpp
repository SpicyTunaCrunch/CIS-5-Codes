/*
*File: Midterm Question 6 Series Calculation
*Author: Luis Roldan
*Created on April 27, 2026
*Purpose: Just another sequence, 
*   f(x) = x - x^3/3! + x^5/5! - x^7/7! + ............
*   Input x and the number of terms used in the sequence, output the result.
*   Note:  x^1 = x,   x^2 = x*x,  x^3 = x*x*x, 3! = 1*2*3,  5!=1*2*3*4*5
*   !!!Flowchart is needed!!!!!
*/

//sysLibraries
#include <iostream> // input-output library
#include <iomanip> // Formatting library
using namespace std;

//prototypes

//main f(x)
int main(int argc, char** argv){
    //Variables
    float x,fx,term;
    int nterms;
     
    cout << "Calculate a series f(x)=x-x^3/3!+x^5/5!-x^7/7!+......." << endl;
    cout << "Input x and the number of terms, output f(x)" << endl;
    cin >> x >> nterms;
    
    return 0;
}

//define  f(x)