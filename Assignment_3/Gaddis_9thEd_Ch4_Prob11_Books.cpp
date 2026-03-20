/*
*File : Gadis 9th Edition Chapter 4 Problem 11
*Author: Luis Roldan 
*Created on Match 19, 2026
*Purpose: Books
*/

//Sys Libraries
#include <iostream>//Input-Output Library
#include <iomanip> //Formatting
using namespace std; //Entitiy Organizer

int main(int argc, char** argv) {

    //Declaring Variables
    unsigned short int 
    bksprch,//books that were purchased
    points; //points earned 
    
    //initialization
    cout << "Book Worm Points\nInput the number of books purchased this month.\n";
    cin >>bksprch;

    //mapping
    if (bksprch == 0) points = 0;
    if (bksprch == 1) points = 5;
    if (bksprch == 2) points = 15;
    if (bksprch == 3) points = 30;
    if (bksprch >=4) points = 60;

    //Results 
    cout <<"Books purchased =" <<setw(3)<< bksprch<< endl;
    cout <<"Points earned   =" << setw(3)<< points;

    //exit stage right or left!
return 0;
}