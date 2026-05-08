/*
*File: Savitch 10th Edition Chapter 5 Problem 2/3 Time Clock
*Author: Luis Roldan
*Created on May 5, 2026
*Purpose: 2. Write a program that requests the current time and a waiting time as two integers 
*            for the number of hours and the number of minutes to wait. The program then outputs 
*            what the time will be after the waiting period. Use 24-hour notation for the times. 
*            Include a loop that lets the user repeat this calculation for additional input values 
*            until the user says she or he wants to end the program.
*         3. Modify your program for Programming Project 2 so that it uses 12-hour notation, such as 3:45 PM
*            Sample inputs will be on 1 line using the following format
*            (hrs) (mins) (ampm) (wait time) (run again)     (hrs) (mins) (ampm) (wait time) (run again) ..................
*/

//syslibrary
#include <iostream> //input-output library
using namespace std; //entity organizer

//prototypes
void time(int hr, int min, char mer);
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
    cout << "Enter hour:\n";
    cin >> hr;
    cout << "Enter minutes:\n";
    cin >> min;
    cout << "Enter A for AM, P for PM\n";
    cin >> mer;
    //cout << "Enter waiting time:\n";
    //in >> wt;
    do {
        time(hr, min, mer);
        cout << "Again:\n";
        cin >> again;
    }while (again == 'Y' || again == 'y');
    return 0;
}
//defining f(x)
void time(int hr, int min, char mer){
        cout << "Current time = ";
        if (hr > 12){
            cout << hr -12; }
        cout << ":"<< min;
        //Determining AM/PM output
        if (mer == 'A' || mer == 'a'){
            cout << " AM\n";    }
        else if (mer == 'P' || mer == 'p'){
            cout << " PM\n";    }
}