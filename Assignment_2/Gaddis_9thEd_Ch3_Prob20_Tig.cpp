/* 
 * File: Gaddis 9th Edition chapter 3 Problem 20 Trig.
 * Author: Luis Roldan
 * Created on March 3, 2026 
 * Purpose:  Homework Assignment 2
 */


//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>  //Formating
#include <cmath> //Trig conversions
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float PI = 3.1415927f; //value of Pie

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float degree,  //degree given by user
    sindgre, //sine of the given degree
    cosdgre, //cosine of given degree
    tandgre; //tangent of given gedree

    //Initialize or input i.e. set variable values
    cout << "Calculate trig functions\n";
    cout << "Input the angle in degrees.\n";
    cin >> degree;
    
    //Map inputs -> outputs
    float radians = ( degree * PI ) / 180 ; //Convert to radians
        sindgre = sin( radians );
        cosdgre = cos( radians );
        tandgre = tan( radians );
        
    //Display the outputs
    cout << "sin("<< degree << ") = " << fixed << setprecision(4) << sindgre << endl;
    cout << "cos(" << setprecision(0) << degree << ") = " << fixed << setprecision(4) << cosdgre << endl;
    cout << "tan("<< setprecision(0) << degree <<  ") = " << fixed << setprecision(4)<< tandgre;
    //Exit stage right or left!
    return 0;
}