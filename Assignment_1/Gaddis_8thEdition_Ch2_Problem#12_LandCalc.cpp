/*
Author: Luis Roldan
Land Calculator
*/

//preproccessor
#include <iostream>

//entity organizor
using namespace std;

//main function
int main()
{
//Variales
float oneAcr = 43560.0f, //One acer is equivalent to 43,560 square feet
    tract = 391876.0f, //how many sqaure feet in one tract of land
    land = tract/oneAcr; // The calculation of how manny acers in tract of land

//Mapping Input Output
cout << "If one acer of land is "<< oneAcr << " sqfrt.\n";
cout << "In tract of land with " << tract << " sqrft, there is " << land <<" acers." <<endl;

return 0;

}