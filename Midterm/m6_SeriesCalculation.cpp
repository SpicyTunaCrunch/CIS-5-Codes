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
#include <cmath> //math library
using namespace std;

//prototypes

//main f(x)
int main(int argc, char** argv){
    //Variables
    float x,fx,term;
    int nterms,
    pwr, sign;
    pwr = 1;
    sign = 1; 
    cout << fixed << setprecision(6);
    cout << "Calculate a series f(x)=x-x^3/3!+x^5/5!-x^7/7!+......." << endl;
    cout << "Input x and the number of terms, output f(x)" << endl;
    cin >> x >> nterms;
    
    for(int i = 0; i < nterms; i++){
        int 
        fact = 1;
        for (int j = 1; j <= pwr; j ++){
            fact *= j;
        }
        term = sign * (pow (x, pwr) / fact);
        fx += term;
        pwr +=2;
        sign *= -1;
    }
    cout << fx;
    return 0;
}
