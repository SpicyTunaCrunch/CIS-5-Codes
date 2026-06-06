/*
*Author: Luis Roldan
*Created on June 4, 2026
*Purpose: Test hout how the accuracy output will show
*/

#include <iostream> //in-out lib
#include <iomanip> //formating
#include <cstdlib> //randome seeed
#include <ctime> //randomization
using namespace std;

int main (){
    srand(static_cast<unsigned int>(time(0)));

    int 
    attempts = rand() % 21 + 5,
    shots = 5; 
    float 
    accPct;

    accPct = static_cast<float>(shots) / attempts *100.0f;

    cout << "Attempts: " << attempts << endl;
    cout << fixed << setprecision(2);
    cout << "Accuracy: " << accPct << "%\n";
    return 0;
}