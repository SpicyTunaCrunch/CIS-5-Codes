/* 
    Author: Luis Roldan
    Restaurant Bill*/

//preprocessor
#include <iostream>

//Entity Organizer
using namespace std;

//main function
int main ()
{
    //Declaration of Variables
    float meal, // Meal cahrge 
          taxp, //Tax percent
          tipp, //Tip percent
          tip, //Tip charge
          tax; //Tax charge

    //Initialize Variables
    meal = 88.67f; //$88.67
    taxp = .0675f; //6.75% charge
    tipp = .2; // 20% charge

    //Mapping InP >> OutP
    tip = tipp*meal;
    tax = taxp*meal;

    //Display results
    cout << "       RECEIPT\n";
    cout << "Meal Charge:           $" << meal << endl;
    cout << "6.75% Tax Charge:      $" << tax<< endl;
    cout << "20% Tip Charge:        $" << tip << endl;
    cout << "TOTAL:                 $" << tip+tax+meal << endl;

    return 0;
}