/*
*Author: Luis Roldan
*Created on June 2, 2026
*Purpose: Battleship board version 2
*/

//sys lib
#include <iostream>
using namespace std;

//prototypes
void initBrd(char *, int);
void prntBrd(char *, int);

int main (int argc, char** argv){
    //constatn values
    const int SIZE = 20;

    //player baord and ship placement board
    char *cells = new char[SIZE];
    char *dsply = new char[SIZE];

    //initialization
    initBrd(cells, SIZE);
    prntBrd(cells, SIZE);

    initBrd(dsply, SIZE);
    prntBrd(dsply, SIZE);


    
}
void initBrd(char *brd, int n){     //instead of initializing every cell,
    for (int i = 0; i < n; i++){    //for loop will do it for me
        brd[i] = '~';
    }
}
void prntBrd(char *brd, int n){     //priting out the board with proper format
    cout << endl;
    for (int i = 0; i < n; i++){
        cout << char('A' + i) << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++){
        cout << brd[i] << " ";
    }
    cout << endl;
}
