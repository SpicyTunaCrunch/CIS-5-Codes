/* Proffesors example of the pecentage program */

//preprocessor
#include <iostream> 

//entity organizor
using namespace std;

//Global Constants
const float PERCENT = 100.00f; //Returning to percent
const float TRIL = 1.0e12f; //Definition of a Tillion
const float BIL = 1.0e9f;  //DEfinition of a Billion

//main function
int main(int argv, char **argc)
{
    //Declare Variables
    float fedExp, //7.01 Trillion Dollars -> Google 2025
          milBdgt, // 850 Billion -> Google 2025
          milPcnt; // Miliraty Percent of Budget

    //Initialize Variables
    fedExp = 7.01e12f*TRIL; //7.01 Trillion Dollars * Constant of Trillion
    milBdgt = 8.5e9f*BIL; //850 Billion Dollars * Constant of Billion

    //Mapping Input > output
    milPcnt = milBdgt/fedExp*PERCENT;

    //Display Results
    cout << "The Federal Expenditure              = $" << fedExp/TRIL << " Trillion\n";
    cout << "The Military Bidget                   = $" << milBdgt/BIL << " Billion\n";
    cout << "The Miliraty percentage of the budget = " << milPcnt << "%" << endl;

    //validation
    return 0;
}
