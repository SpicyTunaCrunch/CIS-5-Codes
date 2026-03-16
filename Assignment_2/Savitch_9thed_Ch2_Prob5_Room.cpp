/* 
 * File: Savitch 9th Edition Chapter 2 Problem 5 Room
 * Author: Luis Roldan
 * Created on March 9, 2026 
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
    short int max, //maximum room capacity 
            attend; //number of people attending the meeting
    //Initialize or input i.e. set variable values
    cout<< "Input the maximum room capacity and the number of people\n";
    cin >>max >> attend;
        if (attend <= max)
            cout <<"Meeting can be held.\nIncrease number of people by "<<max - attend <<" will be allowed without violation.";
        else 
            cout << "Meeting cannot be held.\nReduce number of people by "<< attend-max <<" to avoid fire violation.";

    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}