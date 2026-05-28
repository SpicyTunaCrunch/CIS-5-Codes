/* 
        Author: Luis Roldan
        Date: May 14, 2026
        Purpose: Mark Sort
*/

// System Libraries
#include <iostream> //Input/Output Libraries
#include <cstdlib>  //Randome Function
#include <ctime>    // time function
using namespace std; //STD Name-space where Library is complied

//User Libraries 
//Global Constants - Scientific/Pysics/Chemestry/Conversions Hgiher Dimensions

//Function Prototypes
void filAray( int[], int);
void prntAry(int [], int, int);
void bubSort(int[], int);

//Execution Begins Here
int main(int argv,char **argc) {
        //Set the Random Number Seed
        srand(static_cast<unsigned int>(time(0)));
        //Declare Variebales
        const int SIZE = 100;
        int array[SIZE]; 
        //Initialize Variables
        filAray(array, SIZE);
        prntAry(array, SIZE, 10);
        
        //Mapping Input to Output
        
        bubSort(array, SIZE);
        //Display the Results 
        prntAry(array, SIZE, 10);

        //exit Stage right
        return 0;
}
//Define Functions
void filAray( int a[], int n){
        for (int i = 0; i < n; i++){
                a[i]= rand()%90+10;
        }
}
void prntAry(int a[], int n, int perline){
        for (int i = 0; i < n; i++){
                cout << a[i] << " ";
                if (i%perline == (perline-1)) cout << endl;
        }
        cout << endl;
}

void bubSort(int a[], int n){
        bool swap;                                                               
        for (bool swap = true; swap; n--){              //1 Loops for Awaps
                swap = false;                           //2 Set Loop Variable
                for (int j = 0; j < n-1; j++){          //3 Sublists From Bottom Up
                        if (a[j] > a[j+1]){             //4 Test for Swap, if you wanted to reverse swap you can chanve > for < symbol
                                int temp = a[j];        //5 Swap 
                                a[j] = a[j+1];          //6
                                a[j+1] = temp;          //7
                                swap = true;            //8 Setting Initial Swap
                        }
                }
        }
}