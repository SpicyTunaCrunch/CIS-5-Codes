/*
*Author: Luis Roldan
*Created on May 5, 2026
*Purpose: Create an integer function as indicated with the template, that outputs the factorial.
*         n! = 1 * 2 * 3 * ... (n-1) * (n)
*         Run the template to determine the required prompt and output format.
*/

//sys Libraries
#include<iostream> // input output library
using namespace std; //entity organizer

//prototypes
int fctrl(int);

//main f(x)
int main(int argc, char** argv){
    //variables
    int n;
    //initialization 
    cout << "This program calculates the factorial using a function prototype found in the template for this problem.\nInput the number for the function.\n";
    cin >> n;
    cout << n << "! = " << fctrl(n);
    return 0;
}
//defining f(x)
int fctrl(int n){
    int result =1;
    for (int i = 1; i <= n; i++){
        result *= i;
    }
    return result;
}