/*
*File: Gaddis 9th Edition Chapter 4 Problem 23
*Author: Luis Roldan
*Created on March 20, 2026
*Purpose: Internet Bill Plan
*/

//Sys Libraries
#include <iostream> //Input-Output Library
#include <iomanip> //Formatting
using namespace std; //Entity Organizer

int main(int argc, char** argv) {
    
    //Declare Variables
    char
    pkg, //package chosen
    A, B, C;//Internet Packages
    float
    bill,// monthly bill
    hrs; //how many hours used in month

    //Initializing
    bill =0;
    cout << "ISP Bill\nInput Package and Hours" << endl;
    cin >> pkg >> hrs;

    //Mapping
    if (hrs >0 && hrs <744){
        if (pkg == 'A'){
            bill += 9.95f;
            if (hrs > 10){
                bill += (hrs-10)*2.00f;
            }
            else {}
        }
        else if (pkg == 'B'){
            bill +=14.95f;
            if (hrs >20){
                bill += (hrs-20)*1.00;
            }
            else {}
        }
        else if (pkg == 'C') {
            bill +=19.95f;
        }
    }

    
    else {
        cout << "Invalid Package!";
    }

    cout << "Bill = $ " << bill;
        
    //Exit stage right or left
    return 0;
}