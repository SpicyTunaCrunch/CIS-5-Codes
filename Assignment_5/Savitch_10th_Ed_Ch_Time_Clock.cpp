/*
*File: Savitch 10th Edition Chapter 5 Problem 2/3 Time Clock
*Author: Luis Roldan
*Created on May 5, 2026
*Purpose: Time clock Problem
*/

//syslibrary
#include <iostream> //input-output library
#include <cstring> //string library
using namespace std; //entity organizer

//prototypes
void time();
//mainf(x)
int main(int argc, char** argv){
//variables
    time();
    return 0;
}
//defining f(x)
void time(){
    char 
    again, //see if user wants to run program again
    mer; //Meridiem ( AM or PM)
    int
    hr, //hour
    min, //minute
    wt, //time user wants to wait in minutes
    hrcnt, //count of waitime hours
    mincnt; //count for  waititme minutes
    do{
        if (again == 'y'|| again == 'Y'){
            cout << endl;       }
        cout << "Enter hour:\n\n";
        cin >> hr;
        cout << "Enter minutes:\n\n";
        cin >> min;
        cout << "Enter A for AM, P for PM\n\n";
        cin >> mer;
        cout << "Enter waiting time:\n\n";
        cin >> wt;
        cout << "Current time = ";
//Display hours
        if (hr > 12){
            if (hr - 12 < 10){
                cout << "0" << hr -12; }
            else {cout << hr - 12;  }
        }
        else {
            cout << hr; }
        cout << ":";
//Display minutes 
        if (min < 10){
            cout << "0" << min;     }
        else {cout << min;}
//Determining AM/PM output
        if (mer == 'A' || mer == 'a'){
            cout << " AM\n";    }
        else if (mer == 'P' || mer == 'p'){
            cout << " PM\n";    }
//calculating time  after waiting period
        hrcnt = 0;
        if (wt >=60){
            for (int i = 0; wt >= 60; i++){
                wt -= 60;
                hrcnt += 1;    }
        }
        mincnt = (wt + min);
        if (mincnt >= 60){
            for (int i = 0; mincnt >= 60; i++){
                mincnt -= 60;
                hrcnt += 1;    }
        }
        //hours
        string wtmer = " "; //new watitime meridiem 
        cout << "Time after waiting period = ";
        if ((hrcnt + hr) >= 12){
            if (mer == 'a' || mer == 'A'){
                wtmer = " PM";      }
            else {
                wtmer = " AM";      }
            if ((hrcnt + hr) - 12 < 10){
                cout << "0" << (hrcnt + hr) - 12; }
            else {cout << (hrcnt + hr) - 12;  }
        }
        else {
            if (mer == 'a' || mer == 'A'){
                wtmer = " AM";      }
            else {
                wtmer = " PM";      }
            cout << hrcnt + hr;
        }
        //minutes
        cout << ":";
        if (mincnt < 10){
            cout << "0" << mincnt;     }
        else {
            cout << mincnt; }
        //Meridiem
            cout << wtmer << endl << endl;
//run program again?
        cout << "Again:\n";
        cin >> again;
    } while (again == 'Y' || again == 'y');
}