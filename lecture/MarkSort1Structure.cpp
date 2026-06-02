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
const int SIZE = 1000;
struct Array{       
        int szeUtl;
        int data[SIZE];
};
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
        array.szeUtl = 100;
        filAray(array);
        prntAry(array, 10);
        
        //Mapping Input to Output
        
        mrkSrt1(array);
        //Display the Results 
        prntAry(array, 10);

        //exit Stage right
        return 0;
}
//Define Functions
void filAray( Array &a){
        for (int i = 0; i < a.szeUtl; i++){
                a.data[i]= rand()%90+10;
        }
}
void prntAry(const Array &a, int perline){
        for (int i = 0; i < a.szeUtl; i++){
                cout << a.data[i] << " ";
                if (i%perline == (perline-1)) cout << endl;
        }
        cout << endl;
}

void mrkSrt1(Array &a){
        for (int i = 0; i < a.szeUtl-1; i++){
                for (int j = i+1; j < a.szeUtl; j++){
                        if (a.data[i] > a.data[j]){
                        int temp = a.data[i]; 
                        a.data[i] = a.data[j];
                        a.data[j] = temp;
                        }
                }
        }
}