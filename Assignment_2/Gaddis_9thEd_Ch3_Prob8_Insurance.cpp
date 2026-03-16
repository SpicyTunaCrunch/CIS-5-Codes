/* 
 * File: Gaddis 9th Edition chapter 3 Problem 8 Insurance
 * Author: Luis Roldan
 * Created on March 3, 2026 
 * Purpose:  Homework Assignment 2
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float replcst, //replacement cost of a building
        min;//80% minumum insurance
    //Initialize or input i.e. set variable values
    min=.8f;//80%
    //Map inputs -> outputs
cout << "Insurance Calculator\n";
cout<<"How much is your house worth?\n";
cin>>replcst;
cout<<"You need $" <<min*replcst<<" of insurance.";
    //Display the outputs
    //Exit stage right or left!
    return 0;
}