/*
*File: Gaddis 9th Edition Chapter 5 Problem 23
*Author: Luis Roldan
*Created on April 1, 20206
*Purpose: Displat pattern
*/

//Sys Libraries
#include <iostream> //Inout- Output Library
using namespace std; //Entity Organizer

//main f(x)
int main(int argv, char** argc){
    //Variable Delcaration of Computation lol
    int
    num; //number inputed by user

    //initializaton 
    cin >> num;

    //mapping
    for (int c = 1; c <= num; c++){
        for (int s = 0; s < c; s++){
            cout << "+";    }
        cout << "\n";
    }
    for (int i = num; i >= 1; i--){
        for (int j= i; j> 0; j--){
            cout << "+";
        }
        cout << endl;
    }
    return 0;
}