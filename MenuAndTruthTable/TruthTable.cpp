/*
*File: Turth Table
*Author: Luis Roldan
*Created  April 2, 2026
*/

//Sys Libraires
#include <iostream> //Inout-Output Library
using namespace std; //Entity Organizer

//main f(x)
int main(int argc, char** argv) {
    //Declare variables
    bool x, y;
    cout << "______________________________________________________________________________________________\n";
    cout << "|                                       TRUTH TABLE                                          |\n";
    cout << "______________________________________________________________________________________________\n";
    cout << "|X| |Y|  |!X| |!Y| |X&&Y|  |X||Y| |X^Y| |X^Y^Y| |X^Y^X| |!(X&&Y)|  |!X||!Y| |!(X||Y)| |!X&&!Y|\n";
    cout << "|''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''|\n";

    //Row 1
    x=true;
    y=true;
    cout << "|" << (x?'T':'F') << "| |";
    cout << (y?'T':'F') << "|  |";
    cout << (!x?'T':'F') << " | | ";
    cout << (!y?'T':'F') << "| |  ";
    cout << (x&&y?'T':'F') << " |  |  ";
    cout << (x||y?'T':'F') << " | | ";
    cout << (x^y?'T':'F') << " | |  ";
    cout << (x^y^y?'T':'F') << "  | |  ";
    cout << (x^y^x?'T':'F') << "  | |   ";
    cout << (!(x&&y)?'T':'F') << "   |  |   ";
    cout << (!x||!y?'T':'F') << "  | |   ";
    cout << (!(x||y)?'T':'F') << "   | |   ";
    cout << (!x&&!y?'T':'F') << "  |";
    cout<< endl;

    //Row 2
    x=true;
    y=false;
    cout << "|" << (x?'T':'F') << "| |";
    cout << (y?'T':'F') << "|  |";
    cout << (!x?'T':'F') << " | | ";
    cout << (!y?'T':'F') << "| |  ";
    cout << (x&&y?'T':'F') << " |  |  ";
    cout << (x||y?'T':'F') << " | | ";
    cout << (x^y?'T':'F') << " | |  ";
    cout << (x^y^y?'T':'F') << "  | |  ";
    cout << (x^y^x?'T':'F') << "  | |   ";
    cout << (!(x&&y)?'T':'F') << "   |  |   ";
    cout << (!x||!y?'T':'F') << "  | |   ";
    cout << (!(x||y)?'T':'F') << "   | |   ";
    cout << (!x&&!y?'T':'F') << "  |";
    cout<< endl;

    //Row 3
    x=false;
    y=true;
    cout << "|" << (x?'T':'F') << "| |";
    cout << (y?'T':'F') << "|  |";
    cout << (!x?'T':'F') << " | | ";
    cout << (!y?'T':'F') << "| |  ";
    cout << (x&&y?'T':'F') << " |  |  ";
    cout << (x||y?'T':'F') << " | | ";
    cout << (x^y?'T':'F') << " | |  ";
    cout << (x^y^y?'T':'F') << "  | |  ";
    cout << (x^y^x?'T':'F') << "  | |   ";
    cout << (!(x&&y)?'T':'F') << "   |  |   ";
    cout << (!x||!y?'T':'F') << "  | |   ";
    cout << (!(x||y)?'T':'F') << "   | |   ";
    cout << (!x&&!y?'T':'F') << "  |";
    cout<< endl;
    //Row 4
    x=false;
    y=false;
    cout << "|" << (x?'T':'F') << "| |";
    cout << (y?'T':'F') << "|  |";
    cout << (!x?'T':'F') << " | | ";
    cout << (!y?'T':'F') << "| |  ";
    cout << (x&&y?'T':'F') << " |  |  ";
    cout << (x||y?'T':'F') << " | | ";
    cout << (x^y?'T':'F') << " | |  ";
    cout << (x^y^y?'T':'F') << "  | |  ";
    cout << (x^y^x?'T':'F') << "  | |   ";
    cout << (!(x&&y)?'T':'F') << "   |  |   ";
    cout << (!x||!y?'T':'F') << "  | |   ";
    cout << (!(x||y)?'T':'F') << "   | |   ";
    cout << (!x&&!y?'T':'F') << "  |";
    cout<< endl;
    cout << "''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''";
    //Exit stage left or right
    return 0;
}