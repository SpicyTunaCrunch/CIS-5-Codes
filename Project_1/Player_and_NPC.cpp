/*
*Author: Luis Roldan
*Created on May 22, 2026
*Purpose: Tic-Tac-Toe Player - Platyer choose what sign and where to place
*/

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    char
    npc = '\0', //computer  player
    plyr = '\0'; //player chose of X or 0

    //Prompt Player
    do {
        cout << "Choose your sign ( X or 0 )?\n";
        cin >> plyr;
        if ( plyr  == 'x' || plyr == 'X' ){
            plyr = 'X';
            npc = '0';
        } else if ( plyr == '0' || plyr == 'o' || plyr == 'O'){
            plyr = '0';
            npc = 'X';
        } else {
            cout << "Invalid option, please choose between X or 0\n";
            plyr = '\0'; // to make sure platyer choice remains empty and loop continue
        }
    } while (plyr != '0' && plyr != 'X');
    cout << "You are: " << plyr << " vs Program: " << npc << endl;
    
    return 0;
}