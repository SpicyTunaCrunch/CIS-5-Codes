/* 
        Author: Luis Roldan
        Date: May 14, 2026
        Purpose: Mark Sort     
        we sorted the data bases index not the values 
*/

// System Libraries
#include <iostream> //Input/Output Libraries
#include <cstdlib>  //Randome Function
#include <ctime>    // time function
using namespace std; //STD Name-space where Library is complied

//User Libraries 
//Global Constants - Scientific/Pysics/Chemestry/Conversions Hgiher Dimensions

//Function Prototypes
void filAray( int[], int [],  int);
void prntAry(int [], int, int);
void prntAry(int [], int [], int, int);
void mrkSrt1(int[], int [], int);

//Execution Begins Here
int main(int argv,char **argc) {
        //Set the Random Number Seed
        srand(static_cast<unsigned int>(time(0)));
        //Declare Variebales
        const int SIZE = 100;
        int array[SIZE];
        int indx[SIZE];
        //Initialize Variables
        filAray(array, indx, SIZE);
        cout << endl << "Index array before Sorting" << endl;
        prntAry(indx, SIZE, 10);
        cout << endl << "Array Values before Sorting" << endl;
        prntAry(array, SIZE, 10);
        cout << endl << "Array Values w/ Index before Sorting" << endl;
        prntAry(array, indx, SIZE, 10);

        //Mapping Input to Output
        mrkSrt1(array, indx, SIZE);

        //Display the Results 
        filAray(array, indx, SIZE);
        cout << endl << "Index array after Sorting" << endl;
        prntAry(indx, SIZE, 10);
        cout << endl << "Array Values after Sorting" << endl;
        prntAry(array, SIZE, 10);
        cout << endl << "Array Values w/ Index after Sorting" << endl;
        prntAry(array, indx, SIZE, 10);


        //exit Stage right
        return 0;
}
//Define Functions
void filAray( int a[], int idx[], int n){
        for (int i = 0; i < n; i++){
                a[i]= rand() % 90 + 10;
                idx[i] = i;             
        }
}
void prntAry(int a[], int n, int perline){
        for (int i = 0; i < n; i++){
                cout << a[i] << " ";
                if (i%perline == (perline-1)) cout << endl;
        }
        cout << endl;
}
void prntAry(int a[], int idx[], int n, int perline){
        for (int i = 0; i < n; i++){
                cout << a[idx[i]] << " ";
                if (i%perline == (perline-1)) cout << endl;
        }
        cout << endl;
}

void mrkSrt1(int a[], int idx[],  int n){                               //putting idx in a[idx[i]] references to the position, we sorted the index not the values 
        for (int i = 0; i < n-1; i++){
                for (int j = i+1; j < n; j++){
                        if (a[idx[i]] > a[idx[j]] ){
                        int temp = idx[i]; 
                        idx[i] = idx[j];
                        idx[j] = temp;
                        }
                }
        }
}