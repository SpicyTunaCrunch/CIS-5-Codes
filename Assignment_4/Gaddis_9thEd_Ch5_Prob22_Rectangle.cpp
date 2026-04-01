/*
*File: Gaddis 9th Edition Chapter 5 Problem 22
*Author: Luis Roldan
*Created on April 1, 2026
*Purpose: Rectangle with same number of rows as columns
*/

//Sys Libraries
#include <iostream> //Input-Output Libraries
using namespace std; //Entity organizer Library

//main f(x)
int main(int argc, char** argv){
    //Decalre variables
    int
    num; //number inputed
    char
    let; //letter inputed

    //initialize
    cin >> num >> let;

    //mapping
    int c = 0; //Columns
    while (c <num){
        for (int r = 0; r<num; r++ ){
        cout << let;    } 
        c++;
        if (c <num){
            cout << "\n";
        }
    }
return 0;

}