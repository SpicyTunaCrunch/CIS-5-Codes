/*
*File: Gaddis 9th Edition Chapter 4 Problem 12
*Author: Luis Roldan
*Created on March 19, 2026
*Purpose: Bank Charges
*/

//Sys Libraries
#include <iostream> //input-Output Library
#include <iomanip> //Formating
using namespace std; //Entity Organizer 

int main(int argc, char** argv){
    //Declaring Variables
    float
    base, //base charge a month
    bal, //current bank balace
    newbal, //new balance
    chckfee, //fee for amount of checks
    low, //fee if balance falls under $400 before any checks are applied 
    numchks; //number of checks

    //Initialization
    base = 10; //$10 monthly fee
    low = 15; //$15 charge if balance is < $400
    chckfee = 0;
    cout << showpoint << fixed << setprecision(2);
    cout << "Monthly Bank Fees\nInput Current Bank Balance and number of Checks\n";
    cin >> bal >>numchks;
    cout<< bal << endl;

    //Mapping 
    cout <<  "Balance     $"<<setw(9)<< bal<< endl;
    if (bal < 0)
    {
        cout << "Urgent: Account is overdrawn!"<<endl;
        {
        if (bal == 0 && bal <= 400)
        bal -= low;
        }
            if (numchks <= 19)
                chckfee += (numchks * .1f); 
            if (numchks == 20 && numchks <= 39)
                chckfee += (numchks * .08f); 
            if (numchks == 40 && numchks <= 59)
                chckfee += (numchks * .06f); 
            if (numchks >= 60)
                chckfee += (numchks * .04f); 
    }       
    newbal = bal - (chckfee + base);

    //Results 
    cout << "Check Fee   $" <<setw(9) <<chckfee<< endl;
    cout << "Monthly Fee $" <<setw(9)<< base << endl;
    cout << "Low Balance $" << setw(9)<< low<< endl;
    cout << "New Balance $" << setw(9)<< newbal;


    return 0;    
}




