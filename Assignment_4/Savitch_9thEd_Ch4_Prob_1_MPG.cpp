/*
*File: Savitch 9th Edition Chapter 4 Problem 1
*Author: Luis Roldan
*Created on April 1, 2026
*Purpose: MPG conversion
*/

//sys libraries
#include <iostream> // Inpput-Output Library
#include <iomanip> //formating library
using namespace std; //entity organizer

//Global Constant
const float GAL = 0.264179f;

//f(x)s
float mpg (float mile, float liter){
    return mile / (liter * GAL);    }

//main f(x)
int main(int argc, char** argv){
    
    //Delcare Valriables
    float 
    liter, mile, result;
    char
    again; //repeat loop? 
    
    //initilaizatoion
    cout << fixed << setprecision(2);
    do {
        if ( again == 'y' ) {
            cout << endl;   }
    cout << "Enter number of liters of gasoline:\n\n";
    cin >> liter;
    cout << "Enter number of miles traveled:\n\n";
    cin >> mile;
    
    //Calling f(x)
    result =mpg(mile, liter);
    cout << "miles per gallon:\n" << result << endl;
    cout << "Again:\n";
    cin >> again;

    }   while (again =='y');


return 0;
}

/* //How I originally wrote it before using function

//sys libraries
#include <iostream> // Inpput-Output Library
#include <iomanip> //formating library
using namespace std; //entity organizer

//main f(x)
int main(int argc, char** argv){
    //declare Variables
    float
    liter, //liters
    gallon, //gallon
    mile, //miles traveled 
    mpg; //miles per gallon
    char
    again; //repeat loop?

    //initialization
    cout << fixed << setprecision(2);
    gallon = 0.264179f; //liter to gallon conversion
    do {
        if ( again == 'y' ){
            cout << endl;
        }
        cout << "Enter number of liters of gasoline:\n\n";
        cin >> liter;
        cout << "Enter number of miles traveled:\n\n";
        cin >> mile;
        //mapping
        mpg = mile / (liter * gallon);
        cout << "miles per gallon:\n" << mpg << endl;
        cout << "Again:\n";
        cin >> again;
    } while (again == 'y');
    

return 0;
}
*/