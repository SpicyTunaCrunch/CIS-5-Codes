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
void convrt(int &hr,char &mer);
void output(int hr, int min, char mer);
//main f(x)
int main(int argc, char** argv){
    int 
    hr, //hour
    min; //minutes
    char
    mer, //meridiem
    again; //repeat program?
    do {
    input(hr, min);
    convrt (hr, mer);
    output(hr, min, mer);
    cout << "Would you like to convert another time (y/n)\n";
    cin >> again;
    } while (again == 'y' || again == 'Y');
    return 0;
}
//defining f(x)
void input(int &hr, int &min){
    cout << "Military Time Converter to Standard Time\n";
    cout << "Input Military Time hh:mm\n";
    cin >> hr >> min;
    cout << hr << ":" << min << " = ";
}
void convrt(int &hr, char &mer){
    if (hr == 0){
        hr = 12;
        mer = 'A';  }
    else if (hr < 12){
        mer = 'A';  }
    else if ( hr == 12){
        mer = 'P';  }
    else {
        hr -= 12;
        mer = 'P';  }
}
void output(int hr, int min, char mer){
    cout << hr << ":";
    if (min < 20){
        cout << "0";    }
    cout << min << " ";
    if (mer == 'A'){
        cout << "AM\n";     }
    else {
        cout << "PM\n";     }
}