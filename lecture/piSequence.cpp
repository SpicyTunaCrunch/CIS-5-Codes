/* 
        Author: Luis Roldan
        Date: April 28th, 2026
        Purpose: Pi sequence
*/

// System Libraries
#include <iostream> //Input/Output Libraries
#include <cmath> //Math library
using namespace std; //STD Name-space where Library is complied

//User Libraries 

//Global Constants - Scientific/Pysics/Chemestry/Conversions Hgiher Dimensions
const float PI = 4 * atan(1); 
//Function Prototypes

//Execution Begins Here
int main(int argv,char **argc) {
        //Set the Random Number Seed
        
        //Declare Variebales
        float 
        approxPI,
        nLoop;

        //Initialize Variables
        approxPI = 1; // First term in sequence
        nLoop = 10000;
        //Mapping Input to Output
        for (float i=3, sign =-1 ; i<=nLoop; i+=2, sign *= -1){
                approxPI +=  (sign / i);
        }
        approxPI *= 4;

        //Display the Results 
        cout << "Exact PI = " << PI << endl;
        cout << "Approx PI = " << approxPI << " using " << nLoop<< " terms" << endl;

        //exit Stage right
        return 0;
}