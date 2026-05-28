/* 
        Author: Luis Roldan
        Date: May 14, 2026
        Purpose: Mark Sort
         11:55 in video
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
void selSrt(int [], int);
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
        selSrt(array, SIZE);
        
        //Display the Results
        prntAry(array, SIZE, 10);

        //exit Stage right
        return 0;
}
//Define Functions
void filAray( int a[], int n){
        for (int i = 0; i < n; i++){
                a[i]= rand()%90+10; // [10 - 99]
        }
}
void prntAry(int a[], int n, int perline){
        for (int i = 0; i < n; i++){
                cout << a[i] << " ";
                if (i%perline == (perline-1)) cout << endl;
        }
        cout << endl;
}
//combination of smllst, and swap1
void selSrt(int a[], int n){
        for (int i = 0; i < n-1; i++){          //1 Find min of all sub-list
                int indx = i;                   //2 Beggining of sublist
                for (int j = i+1; j < n; j++){  //3 Find min of sublist
                        if (a[indx] > a[j]){    //4 remember min index
                        indx = j;               //5 Set min index
                        }
                }
                int temp = a[indx];             //6 Memory Swap
                a[indx] =  a[i];                //7 Memory Swap
                a[i] = temp;                    //8 Memory Swap
        }
}
void cpyAray(int b[], int a[], int n){
        for (int i = 0; i < n; i++){
                b[i] = a[i];
        }
}