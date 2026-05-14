/*
*File: Savitch 9th Edition Chapter 5 Problem 1
*Author: Luis Roldan
*Created on May 7, 2026
*Putpose: Convert from military time to standard.
*/

//sys Libraries
#include <iostream> //input-output library
using namespace std; //entity organizer

//prototypes
void input(int &hr, int &min);
void convrt(int &hr, int &dhr, int &min, char &mer);
void output(int hr, int dhr, int min, char mer);
//main f(x)
int main(int argc, char** argv){
    int
    dhr, 
    hr, //hour
    min; //minutes
    char
    mer, //meridiem
    again; //repeat program?
    cout << "Military Time Converter to Standard Time\n";
    cout << "Input Military Time hh:mm\n";
    do {
    input(hr, min);
    convrt (hr, dhr, min, mer);
    output(hr, dhr, min, mer);
    cout << "Would you like to convert another time (y/n)\n";
    cin >> again;
    } while (again == 'y' || again == 'Y');
    return 0;
}
//defining f(x)
void input(int &hr, int &min){
    char 
    cologn; // ':'
    cin >> hr >> cologn >>  min;
}
void convrt(int &hr, int &dhr, int &min, char &mer){
    if (hr == 0 ){
        dhr = 12;
        mer = 'A';  }
    else if (hr < 12){
        dhr = hr;
        mer = 'A';  }
    else if ( hr == 12){
        dhr = hr;
        mer = 'P';  }
    else {
        dhr = hr - 12;
        mer = 'P';  }
}
void output(int hr, int dhr, int min, char mer){
    if (hr < 10){
        cout << "0";    }
    cout << hr << ":" << min;
    if (hr < 24 && min < 60){
    cout << " = ";
        if (dhr == 0){
            cout << "0";    }
        cout << dhr << ":";
        if (min < 10){
            cout << "0";    }
        cout << min << " ";
        if (mer == 'A'){
            cout << "AM\n";     }
        else {
            cout << "PM\n";     }
        }
    else {
        cout << " is not a valid time\n";
        }
}