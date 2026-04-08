/*
*File: Savitch 9th Edition Chapter 4 Problem 4
*Auhtor: Luis Roldan
*Created on April 7, 2026
*Purpose: Rate of Inflation
*/

//sys libraries
#include <iostream> // input/output library
#include <iomanip> // formating library
using namespace std; // entity organizer

//function (new price - old price = diff, dif /old price)
float inf(float &newPrice, float &oldPrice){
    float i = newPrice - oldPrice;
    return (i / oldPrice) * 100;    }

int main(int argc, char** argv){
    //declaring variables
    float 
    cP, oP, result;
    char
    again;
    cout << fixed << setprecision(2);
    do {
        if (again == 'y'){
            cout << endl;   }
        cout << "Enter current price:\n";
        cin >> cP;
        cout << "Enter year-ago price:\n";
        cin >> oP;
        
        result = inf(cP, oP);
        cout << "Inflation rate: " << result << "%\n\nAgain:\n";
        cin >> again;

    }   while (again == 'y');
}