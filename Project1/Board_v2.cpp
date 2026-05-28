/*
*Author: Luis Roldan
*Created on May 22, 2026
*Purpose: Battle Ship Board version 2
*/

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    char        //grid individual cells                                                 
    cA1 = '~', cA2 = '~', cA3 = '~', cA4 = '~', cA5 = '~', cA6 = '~', cA7 = '~';     //(A,0) (A,1) (A,2) (A,3) (A,4) (A,5), (A,6), (A, 7)

    

    // print board
    cout << endl;
    cout << "   1 2 3 4 5 6 7\n\n"; 
    cout << "A  " << cA1 << " " << cA2 << " " << cA3 << " " << cA4 << " " << cA5 << " " << cA6 << "  " << cA7 << " " << endl;
    cout << endl;


    return 0;
}