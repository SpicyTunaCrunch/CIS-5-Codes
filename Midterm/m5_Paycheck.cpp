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


//main f(x)
int main(int argc, char** argv){
    //variables
    float
    payr8, //user inputs how much they get paid
    hrsWrkd, //user inputs how many hours they worked
    c; //Check
    cout << "Paycheck Calculation.\n";
    cout << "Input payRate in $'s/hour and hours worked\n";
    cin >> payr8 >> hrsWrkd;

    if (hrsWrkd <= 20){
        c = hrsWrkd * payr8;    }
    else if (hrsWrkd <= 40){
        c = 20 * payr8;
        c += (hrsWrkd - 20) * payr8 * 1.5;   }
    else{
        c = 20 * payr8;
        c += (20) * payr8 * 1.5;    
        c += (hrsWrkd - 40) * payr8 * 2;    }

    cout << "$" << fixed << setprecision(2) << c << endl;
    return 0;
}