/*
*File: Midterm Question 5 Calculate Gross Paycheck
*Author: Luis Roldan
*Created on April 24, 2026
*Purpose: Develop an application that will determine the gross pay for employees. 
*   The company pays "straight-time" for the first 20 hours worked, time and a half for all hours worked in excess of 20 hours but less than 40 hours, 
*   and double time for any hours worked over 40 hours. Inputs to the program would be hours worked and rate of pay.  Output would be gross pay.
*/

//sysLibraries
#include <iostream> // input-output library
#include <iomanip> //formatiing library
using namespace std; //entity organizer

//prototypes
float gross(float payr8, int hrsWrkd);

//main f(x)
int main(int argc, char** argv){
    //variables
    float
    payr8, //user inputs how much they get paid
    hrsWrkd; //user inputs how many hours they worked

    cout << "Paycheck Calculation.\n";
    cout << "Input payRate in $'s/hour and hours worked\n";
    cin >> payr8 >> hrsWrkd;
    cout << "$" << fixed << setprecision(2) << gross(payr8, hrsWrkd) << endl;
    return 0;
}
float gross(float payr8, int hrsWrkd){
    //variables
    float
    c = 0.00f; //paycheck starts off @ $0
    int 
    twenty = 20, //time and a half for hours from 20-40
    fourty = 40; //double for hours above 40
    if (hrsWrkd <= twenty){
        c = hrsWrkd * payr8;    }
    else if (hrsWrkd <= fourty){
        c = twenty * payr8;
        c += (hrsWrkd - twenty) * payr8 * 1.5;   }
    else{
        c = twenty * payr8;
        c += (fourty - twenty) * payr8 * 1.5;    
        c += (hrsWrkd - fourty) * payr8 * 2;    }
    return c;
}