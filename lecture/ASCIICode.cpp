/* 
        Author: Luis Roldan
        DateFebruary 19th, 2026
        Purpose: Template used to start all pProblem solutions
*/

// System Libraries
#include <iostream> //Input/Output Libraries
using namespace std; //STD Name-space where Library is complied

//User Libraries 
//Global Constants - Scientific/Pysics/Chemestry/Conversions Hgiher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argv,char **argc) {
        //Set the Random Number Seed

        //Declare Variebales
      char letter1,letter2;

        //Initialize Variables
        letter1='z';
        letter2=48;
        
        //Mapping Input to Output

        //Display the Results 
        cout<<"Letter 1 ="  <<letter1<<" "<<static_cast<int>(letter1)<<endl;
        cout<<"Letter 2 =" <<letter2<< " "<<static_cast<int>(letter2)<<endl;
        //exit Stage right
        return 0;
}