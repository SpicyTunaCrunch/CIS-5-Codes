/* 
 * File: Gaddis 9th Edition chapter 3 Problem 3 Average
 * Author: Luis Roldan
 * Created on March 3, 2026 
 * Purpose:  Homework Assignment 2
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip> //formatinf Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float t1, t2, t3, t4, t5, tot;
    //Initialize or input i.e. set variable values
    cout<<"Input 5 numbers to average."<<endl;
    cin >>t1>>t2>>t3>>t4>>t5;
    tot = t1+t2+t3+t4+t5;
    cout <<"The average = " <<fixed<<setprecision(1)<<tot/5;
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}