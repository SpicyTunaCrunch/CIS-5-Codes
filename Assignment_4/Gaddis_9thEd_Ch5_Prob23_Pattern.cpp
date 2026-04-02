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
    for (int i = 1; i <= num; i++){
        for (int j = 0; j < i; j++){
            cout << "+";    }
        cout << "\n";
    }
    for (int i = num; i >= 1; i--){
        for (int j= i; j> 0; j--){
            cout << "+";
        }
        if (i != 1) {
            cout << "\n";
        }
    }
    return 0;
}