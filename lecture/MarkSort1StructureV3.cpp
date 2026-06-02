/*
*Author: Luis Roldan
*Date: June 2, 2026
*Purpose: Mark Sort with a structure
*/

// System Libraries
#include <iostream> //Input/Output Libraries
#include <cstdlib>  //Randome Function
#include <ctime>    // time function
using namespace std; //STD Name-space where Library is complied

//User Libraries 
#include "ArrayDataIndex.h"
//Global Constants - Scientific/Pysics/Chemestry/Conversions Higher Dimensions

//Function Prototypes
void filAray( Array &);
void prntAry(const Array &, int);
void mrkSrt1(Array &);

//Execution Begins Here
int main(int argv,char **argc) {
        //Set the Random Number Seed
        srand(static_cast<unsigned int>(time(0)));
        //Declare Variebales
        Array array;
        //Initialize Variables
        array.size = 100;
        filAray(array);
        prntAry(array, 10);
        
        //Mapping Input to Output
        
        mrkSrt1(array);
        //Display the Results 
        prntAry(array, 10);

        //dealocate array, what is in filAray function (lines 48 & 49)
        delete []array.data;
        delete []array.indx;

        //exit Stage right
        return 0;
}
//Define Functions
void filAray( Array &a){
        a.data = new int[a.size];
        a.indx = new int[a.size];
        for (int i = 0; i < a.size; i++){
                a.data[i]= rand()%90+10;
                a.indx[i] = i;
        }
}
void prntAry(const Array &a, int perline){
        for (int i = 0; i < a.size; i++){
                cout << a.data[i] << " ";
                if (i%perline == (perline-1)) cout << endl;
        }
        cout << endl;
}

void mrkSrt1(Array &a){
        for (int i = 0; i < a.size-1; i++){
                for (int j = i+1; j < a.size; j++){
                        if (a.data[i] > a.data[j]){
                        int temp = a.data[i]; 
                        a.data[i] = a.data[j];
                        a.data[j] = temp;
                        }
                }
        }
}