/*
*/

//sys libraries
#include <iostream> //inputOutput library
#include <iomanip> //Formating
using namespace std;

int main(int argc, char** argv){
    //Declare Variables
    short int
    days; //Amount of days User will input
    int
        bills, //dollar bills
    change, //cents
    p, // Pennies
    sum; // Sum of the pennies 

    p = 1; 
    sum = 0;
    //Number of days
    do
    {
        cin >> days;
        if (days <1)
        cout <<"Days must be 1 or greater" <<endl;
        //Validation
    }   while ( days < 1);
    for (int i = 0; i <days; i++){
        sum += p;
        p *=2;      
        }
    bills = sum/100;
    change = sum%100;
    
    cout << fixed  << setprecision(2) << showpoint;
    cout << "Pay = $" << bills << ".";
    if (change < 10){
        cout << "0";
    }
    cout << change;

    return 0;
}