/*
*File: Menu for Assignment 4
*Author: Luis Roldan
*Created on April 21, 2026
*/

//System Libraries
#include <iostream> // Input-Output Library
#include <iomanip> //Formatting library
using namespace std; //entity organizer

//Prototypes
void prob1();
void prob2();
void prob3();
void prob4();
void prob5();
void prob6();
void prob7();
void prob8();
void prob9();
void prob10();

//main f(x)
int main (int argc, char** argv){
//Menu Variables
int
choose; //choosing what problem to run
char
again; //run another problem
    do {
        if (choose <= 7 && choose >= '0'){
        cout << endl;   }
        
        cout << "\n|'''''''''''''''''''''''''''|\n";
        cout << "|            MENU           |\n";
        cout << "|''''''''''''''''' '''''''''|\n";
        cout << "|  1) Sum the Sequence      |\n";
        cout << "|  2) Pay in Pennies        |\n";
        cout << "|  3) Largest and Smallest  |\n";
        cout << "|  4) Rectangle             |\n";
        cout << "|  5) Patten                |\n";
        cout << "|  6) MPG Conversion        |\n";
        cout << "|  7) Fuel Efficiecy        |\n";
        cout << "|  8) Inflation             |\n";
        cout << "|  9) Estimated Cost        |\n";
        cout << "|  10) Parameter Maximum    |\n";
        cout << "'''''''''''''''''''''''''''''\n";
        cout << "Choose a problem to run: ";
        cin >> choose;
        cout << endl;
        if  (choose < 1 || choose > 10){
            cout << "Invalid input, Please enter a number between 1 & 20.\n(type y to continue or type any other key to exit)\n";
            cin >> again;   }  
        else {
            switch (choose){
                case 1 : prob1(); break;
                case 2 : prob1(); break;
                case 3 : prob1(); break;
                case 4 : prob1(); break;
                case 5 : prob1(); break;
                case 6 : prob1(); break;
                case 7 : prob1(); break;
                case 8 : prob1(); break;
                case 9 : prob1(); break;
                case 10 : prob1(); break;
            }
            cout << endl << "Would you like to choose another question?\n(Type y for yes or anything other key for no)\n";
            cin >> again; 
        }     
             
    } while (again == 'y' || again == 'Y');
 cout << "Exiting...\n\n\n\n\n\n\n";
 return 0;   
}
//Functions
void prob1(){
    unsigned int
    sum, //Sum of numbers
    num; //User's number input
    cout << "This program will add all of the integers from 1 up to number entered.\nType a positive integer value: ";
    cin >> num;
    sum = 0;
    for (int i = 0; i <= num; i++) {
        sum += i; }
    cout << "Sum = "<< sum;
}
void prob2(){
    cout << "This program calculates how much you wwill earn over a period of time if your salary is 1 penny the first day and it doubles each day."<< endl 
         << "Enter the amount of days:";
    short int
    days; //Amount of days User will input
    int
    p, // Pennies
    sum; // Sum of the pennies 
    p = 1; 
    sum = 0;
    //Number of days
    do
    {   cin >> days;
        if (days <1)
        cout <<"Days must be 1 or greater" <<endl;
        //Validation
    }   while ( days < 1);

    for (int i = 0; i <days; i++){
        sum += p;
        p *=2;  }
    int 
    bills, //dollar bills
    change; //cents
    bills = sum/100;
    change = sum%100;
    cout << fixed  << setprecision(2) << showpoint;
    cout << "Pay = $" << bills << ".";
    if (change < 10){
        cout << "0";    }
    cout << change;
}
void prob3(){
    cout << "This problem diplays numbers from largest to smallest.\nPlease enter number as many numbers as youd like with spaces between them."
        << endl << "Enter -99 to signal the end of the series.\n";
    int
    min, //Smallest integer
    max, //Largest integer
    num; // number input
    min = 32767;
    max = -32767;
    while ( cin >> num && num != -99){
        if (num < min){
            min = num;  }    
        if (num > max){
            max = num; }    } 
    cout << "Smallest number in the series is " << min << endl;
    cout << "Largest  number in the series is " << max;
}
void prob4(){
    cout << "This program displays a rectiangle with the using the character you input and the length of each side using the number you input.\n";
    int
    num; //number inputed
    char
    let; //letter inputed
    do {
        cout << "Enter a number (1-15): ";
        cin >> num;
        if (num > 15) {
            cout << "Invalid! Try again.\n";
        }
    } while (num > 15);
    cout << "Enter a character:";
    cin>> let;
    int c = 0; //Columns
    while (c <num){
        for (int r = 0; r<num; r++ ){
        cout << let;    } 
        c++;
        if (c <num){
            cout << "\n";   }   
    }
}