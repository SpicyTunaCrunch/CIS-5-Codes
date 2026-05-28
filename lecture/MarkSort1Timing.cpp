/* 
        Author: Luis Roldan
        Date: May 14, 2026
        Purpose: Mark Sort
         1:08:00 in video
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
void mrkSrt1(int[], int);
void cpyAray(int[], int [], int);
//Execution Begins Here
int main(int argv,char **argc) {
        //Set the Random Number Seed
        srand(static_cast<unsigned int>(time(0)));
        //Declare Variebales
        const int SIZE = 100;
        int array[SIZE];
        int brray[SIZE];

        //Initialize Variables
        filAray(array, SIZE);
        cpyAray(brray, array, SIZE);
        //prntAry(array, SIZE, 10);
        
        //Mapping Input to Output
        int beg = time(0);
        mrkSrt1(array, SIZE);
        int end = time(0);
        cout << "Mark Sort 1 Function Array Size = " << SIZE << " sorted in " << end - beg << " secs." << endl;


        mrkSrt1(brray, SIZE);
        cout << "Mark Sort 1 Function Array Size = " << SIZE << " sorted in " << end - beg << " secs." << endl;
        //Display the Results
        //prntAry(array, SIZE, 10);

        //exit Stage right
        return 0;
}
//Define Functions
void filAray( int a[], int n){
        for (int i = 0; i < n; i++){
                a[i]= rand();
                a[i]<<= 15;
                a[i]+=rand();
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
void cpyAray(int b[], int a[], int n){
        for (int i = 0; i < n; i++){
                b[i] = a[i];
        }
}