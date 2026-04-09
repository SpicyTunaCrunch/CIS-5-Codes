/*
*File: Savitch 9th Edition Chapter 4 Problem 2
*Author: Luis Roldanczx
*Created on April 1, 2026
*Purpose: Fuel Efficiency Problem
*/

//Sys Libraries
#include <iostream> //Input output library
#include <iomanip> //Formating library
using namespace std; //Entity Organizer

//Global Constant
const float GAL = 0.264179f;

//f(x)s
float mpg (float &mile, float &liter){
    return mile / (liter * GAL);    }

//main f(x)
int main(int argc, char** argv){
    float 
    car1L, car2L, //liter input for cars
    m1, m2, //miles for both cars
    mpg1, mpg2; //values to store both mpgs
    char
    again; //ask to repeat program?

    cout << fixed << setprecision(2);
    do {
        if (again == 'y'){
            cout << endl;   }
            //CAR 1
        cout << "Car 1\nEnter number of liters of gasoline:\n";
        cin >> car1L;
        cout << "Enter number of miles traveled:\n";
        cin >> m1;
        mpg1 = mpg(m1, car1L);
        cout << "miles per gallon: " << mpg1 << "\n\n";
        cout << "Car 2\nEnter number of liters of gasoline:\n";
        cin >> car2L;
        cout << "Enter number of miles traveled:\n";
        cin >> m2;
        mpg2 = mpg(m2, car2L);
        cout << "miles per gallon: " << mpg2 << "\n\n";
        if (mpg1 > mpg2){
            cout << "Car 1 is more fuel efficient\n\n";   }
        else {
            cout << "Car 2 is more fuel efficient\n\n";   }
        cout << "Again:\n";
        cin >> again;
    }   while ( again =='y');
return 0;
}



/*      //how i wrote the program before using functions

//main f(x)
int main(int argc, char** argv){
    //Declaring variables
    float
    gallon, //liters to gallon 
    car1L, //car 1 liters
    car2L, //car 2 liters
    m1, //car 1 miles traveled
    m2, //car 2 miles traveled
    mpg1, //car 1 miles per gallon
    mpg2; //car 2 miles per gallon
    char 
    again; //ask user to repeat program
    
    //Inititalizaton 
    cout << fixed << setprecision(2);
    gallon = 0.264179f; //liter to gallon conversion
    do {
        if (again == 'y'){
            cout << endl;   }
        
            //Car 1
        cout << "Car 1\nEnter number of liters of gasoline:\n";
        cin >> car1L;
        cout << "Enter number of miles traveled:\n";
        cin >> m1;
        mpg1 = m1 / (car1L * gallon);
        cout << "miles per gallon: " << mpg1 << "\n\n";
            //Car 2
        cout << "Car 2\nEnter number of liters of gasoline:\n";
        cin >> car2L;
        cout << "Enter number of miles traveled:\n";
        cin >> m2;
        mpg2 = m2 / (car2L * gallon);
        cout << "miles per gallon: " << mpg2 << "\n\n";
        if (mpg1 > mpg2){
            cout << "Car 1 is more fuel efficient\n\n";   }
        else {
            cout << "Car 2 is more fuel efficient\n\n";   }
        cout << "Again:\n";
        cin >> again;
    } while ( again == 'y');

}   */