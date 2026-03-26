/*
*File: Gaddis 9th Edition Chapter 5 Problem 1
*Author: Luis Roldan
*Created on March 25, 2026
*Purpose: Sum the Sequence
*/

//sys libraries
#include <iostream> //Input-output library
using namespace std; //entity organizer

//main f(x)
int main(int argc,char** argv){

    //Variable delcaration
    unsigned int
    sum, //Sum of numbers
    num; //User's number input

    //Initializaton
    cin >> num;
    sum = 0;
    //Mapping 
    for (int i = 1; i <= num; i++) {
        sum += i;
        //cout << "Sum = "<< sum;
    }

    cout << "Sum = "<< sum;

    return 0;
}