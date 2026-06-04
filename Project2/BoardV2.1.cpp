/*
*Author: Luis Roldan
*Created on June 2, 2026
*Purpose: Battleship board version 2.1
*/

//sys lib
#include <iostream>
using namespace std;

//prototypes
void initBrd(char [][7], int , int);
void prntBrd(char [][7], int , int);


int main (int argc, char** argv){
    //constatn values
    const int ROWS = 7;
    const int COLS = 7;

    //player baord and ship placement board
    char cells[ROWS][COLS];
    char dsply[ROWS][COLS];

    //initialization
    initBrd(cells, ROWS, COLS);
    prntBrd(cells, ROWS, COLS);

    initBrd(dsply,ROWS, COLS);
    prntBrd(dsply, ROWS, COLS);


    
}
void initBrd(char brd[][7], int r, int c){     //instead of initializing every cell,
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            brd[i][j] = '~';
        }
    }
}
void prntBrd(char brd[][7], int r, int c){     //priting out the board with proper format
    cout << " ";
    for (int i = 0; i < c; i++){
        cout << i + 1 << " ";
    }
    cout << endl;
    for (int i = 0; i < r; i++){
        cout << static_cast<char>('A'+ i) << " ";
        for (int j = 0; j < c; j++){
            cout << brd[i][j] << " ";
        }
        cout << endl;
    }
}
