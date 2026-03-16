/*
Author: Luis Roldan
Circuit Board Price
*/

//preproccessor
#include <iostream>

//entitiy organizer
using namespace std;

//main function
int main () 
{ 
//Variables
float cbrd = 14.95f, //selling price of circuit board, $14.95
    prcprf = 0.35f, //35% profit 
    prof = cbrd*prcprf; //how much profit from each board

//Mapping the Input and Output
cout << " The calcualted selling price of a circuit baord that costs $" << cbrd << " is $" <<cbrd+prof <<endl;

return 0;

}