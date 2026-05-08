/*
*File: Gaddis 9th Edition Chapter 6 Probrlem 10
*Author: Luis Roldan
*Created on May 7, 2026
*Purpose: Read 5 Avarages Remove the lowest Score.
*/

//sys libraries
#include <iostream> //input-output library
#include <iomanip> //formatting
using namespace std; //entity organizer

//prototype
int fndLwst(int, int, int, int, int);

//main f(x)
int main(int argc, char** argv){
    int
    s1, s2, s3, s4, s5; //5 test scores
    float 
    result;
    cout << "Find the Average of Test Scores\nby removing the lowest value.\n";
    cout <<"Input the 5 test scores.\n";
    cin >> s1 >> s2 >> s3 >> s4 >> s5;
    result = fndLwst(s1, s2, s3, s4, s5);
    cout << "The average test score = " << fixed << showpoint << setprecision(1) << result;
    return 0;
}

//f(x) definition
int fndLwst(int s1, int s2, int s3, int s4, int s5){
    int
    lowest;
    lowest = s1;
    if (s2 < lowest) {
        lowest = s2;    }
    if (s3 < lowest) {
        lowest = s3;    }
    if (s4 < lowest){
        lowest = s4;    }
    if (s5 < lowest){
        lowest = s5;    }
    return (s1 + s2+ s3 + s4 + s5 - lowest) / 4;
}