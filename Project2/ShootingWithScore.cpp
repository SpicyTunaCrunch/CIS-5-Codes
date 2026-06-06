/*
*Author: Luis Roldan
*Created on June 2, 2026
*Purpose: Battleship Ship Placement V2
*/

//sys lib
#include <iostream> // input output lib
#include <cstdlib>  //random seed 
#include <ctime> //randomization
#include <iomanip> //formating
using namespace std;

//prototypes
void initBrd(char [][5], int , int);
void prntBrd(char [][5], int , int);
void shpPlc(char [][5], int, int, int);
void game(char [][5], char [][5], int, int);

int main (int argc, char** argv){
    //random seed
    srand(static_cast<unsigned int>(time(0)));

    //constatn values
    const int ROWS = 5;
    const int COLS = 5;
    const int SHIPS = 5;

    //player baord and ship placement board
    char cells[ROWS][COLS];
    char dsply[ROWS][COLS];

    //initialization
    initBrd(cells, ROWS, COLS);
    initBrd(dsply,ROWS, COLS);

    //placing ships randomly
    shpPlc(cells, ROWS, COLS, SHIPS);

    game(cells,dsply, ROWS, SHIPS);

    return 0;
    
}
void initBrd(char brd[][5], int r, int c){     //instead of initializing every cell,
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            brd[i][j] = '~';
        }
    }
}
void prntBrd(char brd[][5], int r, int c){     //priting out the board with proper format
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
void shpPlc(char brd[][5], int r, int c, int ship){    //Ship placment
    int cnt = 0;
    while (cnt < ship){
        int row = rand () % r;
        int col = rand() % c;

        if (brd[row][col] == '~'){
            brd[row][col] = 'S';
            cnt++;
        }
    }
}
void game(char cells[][5], char dsply[][5], int n, int ships){
    int 
    atmps = 0,   //attempts before the game ends
    hits = 0;   //how many ships were hit
    float
    acrcy = 0.0f; //Accuracy epending on how may attempts 

    while (hits < ships){
        cout << "\nAttempts: " << atmps << endl;
        prntBrd(dsply, n, n);
        
        //asking user where to shoot
        char row;
        int col;
        
        //making sure user does go outside bounds
        cout << "Ener row (A-E): ";
        cin >> row;
        while (row < 'A' || row > 'E' ){
            cout << "Invalid input, try again.\nEnter row (A-E): ";
            cin >> row;    
            }

        cout << "Enter column (1-5): ";
        cin >> col;
        while (col < 1 || col > 5){
            cout << "Invalid input, try again.\nEnter column (1-5): ";
            cin >> col;
        }

        int r = row - 'A';
        int c = col - 1;

        atmps++;

        if (cells[r][c] == 'S'){
            dsply[r][c] = 'X';
            cells[r][c] = 'H';
            hits++;
            cout << "HIT!\n";
        } else {
            dsply[r][c] = 'O';
            cout << "MISS!\n";
        }
    }
    cout << "\n!YOU WON!\n";
    
    cout << "Stats\nAttempts: " << atmps << endl;
    acrcy = static_cast<float>(hits) / atmps * 100.0f;
    cout << fixed << setprecision(2);
    cout << "Accuracy: " << acrcy << "%\n";
}
