/*
*lab example for the first 2 problems in Assignment 6 Code-E
*/
#include <iostream>
#include <fstream>
#include<string>

using namespace std;

int main(int arc, char** argv){
    int table [10][10]; //Delcare 2D array
//input into table
    for (int i = 0; i < 10; i++){
        for (int j = 0; j<10; j++){
            cin >> table[i][j];
        }
    }
// print table
    for (int i = 0; i < 10; i++){
        for (int j = 0; j<10; j++){
            cout << table[i][j];
        }
    cout << endl; 
    }
    return 0;
}