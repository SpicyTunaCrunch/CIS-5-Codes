/*
*File: Savitch 10th Edition Chapter 5 Problem 2/3 Time Clock
*Author: Luis Roldan
*Created on May 5, 2026
*Purpose: Time Converting Problem
*/

//syslibrary
#include <iostream> //input-output library
#include <cstring> //string library
using namespace std; //entity organizer

//prototypes
void time(int hr, int min, char mer, int wt);
//mainf(x)
int main(int argc, char** argv){
    //variables
    char 
    again, //see if user wants to run program again
    mer; //Meridiem ( AM or PM)
    int
    hr, //hour
    min, //minute
    wt; //time user wants to wait in minutes
    do {
        if (again == 'Y' || again == 'y'){
            cout << endl;      }
        cout << "Enter hour:\n\n";
        cin >> hr;
        cout << "Enter minutes:\n\n";
        cin >> min;
        cout << "Enter A for AM, P for PM:\n\n";
        cin >> mer;
        cout << "Enter waiting time:\n\n";
        cin >> wt;
        time(hr, min, mer, wt);
        cout << "Again:\n";
        cin >> again;
    } while (again == 'Y' || again == 'y');
    return 0;
}
//defining f(x)
void time(int hr, int min, char mer, int wt){
    int
    hrwait,
    minwait,
    wait; // display wait time minutes 
    cout << "Current time = ";
    //Display hours
        if ( hr < 10) {
            cout << "0";  }
        cout << hr << ":";
//Display minutes 
        if (min < 10){
            cout << "0";   }
        cout << min;
//Determining AM/PM output
        if (mer == 'A' || mer == 'a'){
            cout << " AM\n";    }
        else {
            cout << " PM\n";    }
//calculating time  after waiting period
//converting time into 24 hr
        if ((mer == 'p' || mer == 'P') && hr != 12){
            hr += 12;   }
        if ((mer ==  'A' || mer == 'a') && hr == 12){
            hr = 0;     }
        wait = hr * 60 + wt + min;
        hrwait = wait / 60;
        minwait = wait % 60;

//displaying waititme
//meridiem
        string 
        mrdm;
        if (hrwait >= 12){
            mrdm = " PM";   }
        else {
            mrdm = " AM";   }
//hours
        cout << "Time after waiting period = ";
        if (hrwait == 0){
            hrwait = 12;    }
        else if (hrwait > 12){
            hrwait -= 12;   }
        if (hrwait < 10){
            cout << "0";    }
        cout << hrwait << ":";
//minutes
        if (minwait < 10) {
            cout << "0";    }
        cout << minwait <<  mrdm << endl << endl;
}