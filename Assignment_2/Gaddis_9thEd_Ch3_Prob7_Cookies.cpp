/* 
 * File: Gaddis 9th Edition chapter 3 Problem 7 Cookies/
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
    float ate,//how many cookies were eaten
        bag, // 40 cookies
        servgs,//10total servings
        pserv, //cookies per serving 
        percki,// cal per cookie
        cals;// calories per serving 300 cal
    //Initialize or input i.e. set variable values
    bag=40;
    servgs=10;
    cals=300;
    pserv=bag/servgs;//how many cookies perserving
    percki=300/pserv;
    
    //Map inputs -> outputs
    cout<<"Calorie Counter\n";
    cout<<"How many cookies did you eat?\n";
    cin>>ate;
    cout<<"You consumed "<<percki*ate<< " calories.";
    //Display the outputs

    //Exit stage right or left!
    return 0;
}