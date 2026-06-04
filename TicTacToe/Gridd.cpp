/*
*Author: Luis Roldan
*Created on May 22, 2026
*Purpose: Tic-Tac-Toe Grid
*/

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    //gridd creation
    cout << endl;
    for (int c = 0; c < 3; c++){                    //grid
        for (int r = 0; r < 3; r++){        //(0,0) (0,1) (0,2)
        cout << ".";                        //(1,0) (1,1) (1,2)
        }                                   //(2,0) (2,1) (2,2)
        cout << endl;
    }
    cout <<endl;

    return 0;
}