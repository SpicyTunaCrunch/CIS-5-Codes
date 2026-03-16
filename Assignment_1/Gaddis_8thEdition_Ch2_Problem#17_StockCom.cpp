/*
    Author: Luis Roldan
    Stock Commission 
*/

//preprocessor
#include <iostream>

//entity organizer
using namespace std;

//main f(x)
int main () {

//Variables
int amtshr = 750, //shares of stock amount, 750. shares
    price = 35, //Price per share, $35
    ncom = amtshr*price; // total amount for stocks alone (no commission)
float brkrcom = 0.02f, //2% stockbroker commission
      wcom = ncom*brkrcom; // Total amount of stocks p;us commission

//Input 
cout << "The amount paid for the stocks without commision was $" << ncom << endl;
cout << "The commission amount was $" << (amtshr*price)*brkrcom << endl;
cout << "The total amount paid for stocks plus commission is $" << ncom+wcom << endl;

return 0;
}