/*
*File: Savitch 9th Edition Chapter 3 Practice Problem 1 
*Author: Luis Roldan
*Created on March 21, 2026
*Purpose: Rock Paper Scissors
*/

//Sys Libraries
#include <iostream> //Input-Output Library 
using namespace std; //Entity Orgainizer

//Main f(x)
int main(int argc, char** argv){
    //Delcare Variables
    char 
    P, R, S, p, r, s, //P == Papper, R == Rock, S == Scissors
    p1, p2; //Player 1 & Player 2

    //Initialiation 
    cout << "Rock Paper Scissors Game\nInput Player 1 and Player 2 Choices\n";
    cin >> p1 >> p2;

    //Mappping
    if ((p1 == 'P' && p2 == 'R') || (p1 == 'p' && p2 == 'r') || (p1 == 'R' && p2 == 'P') || (p1 == 'r' && p2 == 'p')){
        cout << "Paper covers rock.";}
    else if ((p1 == 'R' && p2 == 'S') || (p1 == 'r' && p2 == 's') || (p1 == 'S' && p2 == 'R') || (p1 == 's' && p2 == 'r')){
        cout << "Rock breaks scissors.";}
    else if ((p1 == 'P' && p2 == 'S') || (p1 == 'p' && p2 == 's') || (p1 == 'S' && p2 == 'P') || (p1 == 's' && p2 == 'p')) {
        cout << "Scissors cuts paper.";}
    else if ((p1 == 'R' && p2 == 'R') || (p1 == 'r' && p2 == 'r') || (p1 == 'R' && p2 == 'r') || (p1 == 'r' && p2 == 'R') ||
        (p1 == 'S' && p2 == 'S') || (p1 == 's' && p2 == 's') || (p1 == 's' && p2 == 'S') || (p1 == 'S' && p2 == 's') || 
        (p1 == 'P' && p2 == 'P') || (p1 == 'p' && p2 == 'p') || (p1 == 'P' && p2 == 'p') || (p1 == 'p' && p2 == 'P')) {             
        cout << "Nobody wins.";}
        
}