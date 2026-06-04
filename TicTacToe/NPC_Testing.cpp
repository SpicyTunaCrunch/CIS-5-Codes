/*
*Author: Luis Roldan
*Created on May 22, 2026
*Purpose: Tic-Tac-Toe NPC random seed testing, to make sure npc can choose comlumn and row between 0-2
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char** argv) {
    srand(static_cast<unsigned int>(time(0)));
    int 
    row, 
    clmn;

    row = rand()%3;
    clmn = rand()%3;
    cout << row << endl << clmn;

    return 0;
}