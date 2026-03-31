/*
*File: Gaddis 9th Edition Chapter 5 Problem 13
*Author: Luis Roldan
*Created on Mach 30, 2026
*Purpose: Dispay the Largest and Smallest
*/

//sys Libraries
#include <iostream> //input-output Library
using namespace std; //entity organizer

//main f(x)
int main(int argc, char** argv){
    int
    min, //Smallest integer
    max, //Largest integer
    num; // number input
    while ( cin >> num && num != -99){
        if (num < min){
            min = num;  }    
        if (num > max){
            max = num; }
        } 
    cout << "Smallest number in the series is " << min << endl;
    cout << "Largest Number in the series is " << max <<endl;

    return 0;
}