/* 
 * File: Gaddis 9th Edition chapter 3 Problem 10 Temp Converter
 * Author: Luis Roldan
 * Created on March 3, 2026 
 * Purpose:  Homework Assignment 2
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip> //formating 
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float cel,// temperature converteed into Celsius 
        feh; //User input what temp it is in Fehrenheit
    //Initialize or input i.e. set variable values;
    
    //Map inputs -> outputs
    cout<<"Temperature Converter\n";
    cout<<"Input Degrees Fahrenheit\n";
    cin >> feh;
    cel = (feh-32.0)* 5.0  / 9.0 ;
    cout <<fixed<<setprecision(1)<<feh<<" Degrees Fahrenheit = " <<fixed<<setprecision(1)<<cel<< " Degrees Centigrade";
    //Display the outputs

    //Exit stage right or left!
    
    return 0;
}