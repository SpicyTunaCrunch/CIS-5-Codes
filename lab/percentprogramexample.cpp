/*
    Lab Assigment Percentages Program
    By: Luis E Roldan Angeles
*/

//Preprocessor included
#include <iostream>

//Organization of Entities
using namespace std;

int main ()
{
    float fedBdgt = 6.5e12; //Federal Budget = 6.5 Trillion
    float milBdgt = 8.42e11; //Miliraty Budget = 842 Billion
    float amount = milBdgt/fedBdgt; //decimal amount
    float percent = amount * 100; //multiply 100 to convert into percent
    cout << percent <<"%"<< endl; // output w/ percent sign
    return 0;
}