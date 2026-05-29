/* 
        Author: Luis Roldan
        DateFebruary 19th, 2026
        Purpose: Dynamic Memory Test
*/

// System Libraries
#include <iostream> //Input/Output Libraries
#include <cstdlib>
#include <ctime>
using namespace std; //STD Name-space where Library is complied

//User Libraries 
//Global Constants - Scientific/Pysics/Chemestry/Conversions Hgiher Dimensions

//Function Prototypes
int fillAray(int);
//Execution Begins Here
int main(int argv,char **argc) {
        //Set the Random Number Seed
        srand(static_cast<unsigned int >(time(0)));
        //Declare Variebales
        int size = 250000000;
        int *array;
        array = fillAray(size);

        //Initialize Variables
        cout << "Array size allocated " << size << endl;
        cout << " Input a integer  value\n";
        int dummy;
        cin >> dummy;
        
        //Mapping Input to Output


        //Display the Results 
        
        //De-allocate Memory
        delete []array;

        //exit Stage right
        return 0;
}

//Define Functions
int *fillAray(int size){
        for( int i=0; i <size; i++){
                *array[i] = rand();
        }
}