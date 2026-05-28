/*
*Author: Luis Roldan
*Created on May 22, 20
*Purpose: Battle Ship Board version 1
*/

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    //gridd creation
    cout << endl;
    for (int r = 0; r < 3; r++){                    //grid
        for (int c = 0; c < 5; c++){        //(0,0) (0,1) (0,2) (0,3) (0,4) (0,5)
        cout << ".";                        //(1,0) (1,1) (1,2) (1,3) (1,4) (1,5)
        }                                   //(2,0) (2,1) (2,2) (2,3) (2,4) (2,5)
        cout << endl;
    }
    cout <<endl;

    return 0;
}