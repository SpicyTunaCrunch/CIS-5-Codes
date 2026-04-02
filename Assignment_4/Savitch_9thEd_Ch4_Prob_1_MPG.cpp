/*
*File: Savitch 9th Edition Chapter 4 Problem 1
*Author: Luis Roldan
*Created on April 1, 2026
*Purpose: MPG conversion
*/

//sys libraries
#include <iostream> // Inpput-Output Library
#include <iomanip> //formating library
using namespace std; //entity organizer

//main f(x)
int main(int argc, char** argv){
    //declare Variables
    float
    liter, //liters
    gallon, //gallon
    mile, //miles traveled 
    mpg; //miles per gallon
    char
    again; //repeat loop?

    //initialization
    cout << fixed << setprecision(2);
    gallon = 0.264179f; //liter to gallon conversion
    do {
    cout << "Enter number of liters of gasoline:\n\n";
    cin >> liter;
    cout << "Enter number of miles traveled:\n\n";
    cin >> mile;
    //mapping
    mpg = mile / (liter * gallon);
    cout << "miles per gallon:\n\n" << mpg << endl;
    cout << "Again:\n\n";
    cin >> again;
    } while (again == 'y');

return 0;
}