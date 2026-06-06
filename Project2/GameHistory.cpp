/*
*Author: Luis Roldan
*Created on June 4, 2026
*Purpose: Test how to read and write to a file/ append game score to a file
*/

#include <iostream> //in-out lib
#include <iomanip> //formating
#include <cstdlib> //randome seeed
#include <ctime> //randomization
#include<fstream> //file in/out
#include <cstring> //string lib
using namespace std;

int main (){
    srand(static_cast<unsigned int>(time(0)));
    //ofstream outFile("BattleshipStats.txt");


    string
    name;
    int 
    attempts = rand() % 21 + 5,
    shots = 5; 
    float 
    accPct;
    
    accPct = static_cast<float>(shots) / attempts *100.0f;
    cout << "Please type in your name and date.\nName:   ";
    cin >> name;

    cout << "-------------------------------\n";
    cout << "|     Player: " << right << setw(12) << name << "    |\n";
    cout << "|   Attempts: " << right << setw(12) << attempts << "    |\n";
    cout  << "|   Accuracy: " << right  << setw(11) << fixed << setprecision(2) 
          << accPct << "%    |\n";
    cout  <<  "-------------------------------\n";
    return 0;
}