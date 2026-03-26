/*
*File: Turth Table
*Author: Luis Roldan
*Created  March 35, 2026
*/

//Sys Libraires
#include <iostream> //Inout-Output Library
using namespace std; //Entity Organizer

//main f(x)
int main(int argc, char** argv) {
    //Declare variables
    bool x, y;

    //Row 1
    x=true;
    y=true;
    cout << (x?'T':'F') << " ";
    cout << (y?'T':'F') << "  ";
    cout << (!x?'T':'F') << "   ";
    cout << (!y?'T':'F') << "    ";
    cout << (x||y?'T':'F') << " ";
    cout<< endl;

    //Row 2
    x=true;
    y=false;
    cout << (x?'T':'F') << " ";
    cout << (y?'T':'F') << "  ";
    cout << (!x?'T':'F')<< "   ";
    cout << (!y?'T':'F') << "    ";
    cout << (x||y?'T':'F') << " ";

    //Row 3

    //Row 4

    //Exit stage left or right
    return 0;
}