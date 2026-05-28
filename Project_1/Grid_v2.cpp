/*
*Author: Luis Roldan
*Created on May 22, 2026
*Purpose: Tic-Tac-Toe Grid
*/

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    char 
    c00='.', c01='.', c02='.',      //(0,0) (0,1) (0,2)
    c10='.', c11='.', c12='.',      //(1,0) (1,1) (1,2)
    c20='.', c21='.', c22='.';      //(2,0) (2,1) (2,2)
    
    // print board
    cout << endl;
    cout << c00 << " " << c01 << " " << c02 << endl;
    cout << c10 << " " << c11 << " " << c12 << endl;
    cout << c20 << " " << c21 << " " << c22 << endl;
    cout << endl;

    return 0;
}