/*
*File: Final Question 3
*Authro: Luis Roldan
*Created on June9, 2026
*Purpose: Sort using a 2-Dimension Arr ay of characters
*/

//sys libs
#include <iostream> //in/out lib
#include <cstring> //strlen(), strcmp(), strcpy()
using namespace std;

//Global Constants
const int COLMAX = 80;  //Only 20 reqiored, and 1 for null terminator

//prototypes
int read (char [][COLMAX], int &); // output row and columns deteced from input
void sort(char[][COLMAX], int, int);
void print(const char[][COLMAX], int, int);

//main f(x)
int mian (int argc, char** argv){
    //Variables
    const int ROW=30;             //Only 20 required
    char array[ROW][COLMAX];      //Bigger than necessary 
    int colIn,colDet,rowIn,rowDet;//Row, Col input and detected

    
}