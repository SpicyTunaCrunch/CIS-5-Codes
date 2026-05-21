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
//void swap1(int&, int &);
//void swap2(int&, int &);
//void smllst(int [], int, int);  //(array, size, position)
void mrkSrt1(int[], int);
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
        mrkSrt1(array, SIZE);
        //Display the Results 
        prntAry(array, SIZE, 10);

        //exit Stage right
        return 0;
}
//Define Functions
void filAray( int a[], int n){
        for (int i = 0; i < n; i++){
                a[i]= rand()%90+10; //[10-99]
        }
}
void prntAry(int a[], int n, int perline){
        for (int i = 0; i < n; i++){
                cout << a[i] << " ";
                if (i%perline == (perline-1)) cout << endl;
        }
        cout << endl;
}
/*void swap1(int &a, int &b){
        int temp = a; 
        a = b;
        b = temp;
}
void swap2(int &a, int &b){
        a = a^b;
        b = a^b;
        a = a^b;
}
void smllst(int a[], int n , int pos){
        for (int j = pos+1; j < n; j++){
                if (a[pos] > a[j]){
                  int temp = a[pos]; 
                  a[pos] = a[j];
                  a[j] = temp;
                }
        }
}       */
//combination of smllst, and swap1
void mrkSrt1(int a[], int n){
        for (int i = 0; i < n-1; i++){
                for (int j = i+1; j < n; j++){
                        if (a[i] > a[j]){
                        int temp = a[i]; 
                        a[i] = a[j];
                        a[j] = temp;
                        }
                }
        }
}