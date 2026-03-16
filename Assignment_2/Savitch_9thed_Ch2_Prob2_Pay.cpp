/* 
 * File: Savitch 9th Edition Chapter 2 Problem 2 Pay
 * Author: Luis Roldan
 * Created on March 7, 2026 
 * Purpose:  Homework Assignment 2
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>//Formating Library 
using namespace std; 

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float payinc, //percentage of pay increase
        retrotm,//retroactive time owed
        pannual,//previous annyal salary input
        retropy, //retroactive pay due 
        newsal, //new annual salary
        monthly;//new monthly salary 
    //Initialize or input i.e. set variable values
    payinc = .076f; //7.6%
    retrotm = 6; //6 months

    //Map inputs -> outputs
    
    
    //Display the outputs
    cout<<"Input previous annual salary.\n";
    cin >> pannual;
   
    newsal = pannual*payinc + pannual;
    retropy = (pannual*payinc) /2;
    monthly = newsal/12;
   
    cout <<showpoint<<fixed<<setprecision(2);
    cout<<"Retroactive pay    = $" <<setw(7)<< retropy<<endl;
    cout<<"New annual salary  = $"<<setw(7)<<newsal<<endl;
    cout<<"New monthly salary = $"<<setw(7)<<monthly;
    
    //Exit stage right or left!
    return 0;
}