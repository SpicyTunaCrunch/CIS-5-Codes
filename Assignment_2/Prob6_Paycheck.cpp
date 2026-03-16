/* 
 * File:   Problem 6 Paycheck
 * Author: Luis Roldan
 * Created on March 4, 2026
 * Purpose:  Homework Assignment 2
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip> //Formatting

using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float hrsWrkd, //Hours worked 
        payR8, //Pay Rate in $'s p/hr
        paychk; //Gross pay
    int overTime; //Over Time in Hrs

    //Initialize or input i.e. set variable values
    paychk= 0;
    overTime=40;
    
    //Display the outputs
    cout << "This program calculates the gross paycheck.\n";
    cout << "Input the pay rate in $'s/hr and the number of hours.\n";
    cin >> payR8 >> hrsWrkd;
    
    //Map inputs -> outputs
    paychk = hrsWrkd*payR8;//Straight time
    paychk  += hrsWrkd>overTime?payR8*(hrsWrkd - overTime):0;// if hrs worked are greatrer than OT(40) payrate is doubled and added to check
    
    cout<<"Paycheck = $ "<< fixed << setprecision(2)<<paychk;
    //Exit stage right or left!
    return 0;
}