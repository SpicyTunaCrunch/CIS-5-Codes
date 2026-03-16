/*
    Lab Assigment Percentages Program
    By: Luis E Roldan Angeles
*/

//Preprocessor included
#include <iostream>

//Organization of Entities
using namespace std;

//Global Constant
const float PERCENT = 100.00f; //Return to percentage
const float TRILLION = 1.0e12f; //Trillions
const float BILLION = 1.0e9f; //Billions
int main ()
{
    float fedBdgt = 6.5e12f; //Federal Budget = 6.5 Trillion
    float milBdgt = 8.42e11f; //Miliraty Budget = 842 Billion
    cout << "The Federal budget is                       $" << fedBdgt/TRILLION << " Trillion\n";
    cout << "The Military budget is                      $" << milBdgt/BILLION << " Billion\n";
    cout <<"The Miliray percent of the federal budget is " << milBdgt/fedBdgt*PERCENT << "%" <<endl;
    return 0;
}