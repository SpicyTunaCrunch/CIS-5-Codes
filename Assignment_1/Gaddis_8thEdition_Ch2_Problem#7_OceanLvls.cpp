/* 
    Author: Luis Roldan
    Ocean Levels
*/

//preprocessor
#include <iostream>

//Organizing Entities
using namespace std;

//mai function
int main ()
{
    //Variable
    float lvlrise = 1.5f; //How much ocean level rises each year, in millimeters

    //Display Results
    cout << "Ocean leves rise every year by 1.5 millimeters.\n";
    cout << "In 5 years, it will rise by " << lvlrise*5 << " millimeters.\n";
    cout << "In 7 years, it will increase by " << lvlrise*7 << " millimeters.\n";
    cout <<"In 10 years, it will be " << lvlrise*10 << " millimeters highre than what it currently is today." <<endl;

    return 0;
}