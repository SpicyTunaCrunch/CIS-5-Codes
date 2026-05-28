/* 
        Author: Luis Roldan
        Date: May 14, 2026
        Purpose: Linear and Binary Search
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
int linSrch(int [], int, int);
int binSrch(int [], int, int);
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
        //prntAry(array, SIZE, 10);
        
        //Mapping Input to Output
        int beg=time(0);
        mrkSrt1(array, SIZE);
        int end = time(0);
        cout << "Mark Sort 1 Fucntion Array Size = " << SIZE << " sortrd in " << end-beg<< " secs." << endl;
        //Display the Results 
        //prntAry(array, SIZE, 10);

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
int linSrch(int a[], int n, int val){
        for (int i = 0; i <n ; i++){
                if (a[i] == val) return i;
        }
        return -1;
}
int binSrch(int a[], int n, int val){
        int beg = 0, end = n-1; //Beginning and end of array index
        do{
                int middle = (beg +end) / 2;
                if(a[middle] == val ) return middle;
                else if (val > a[middle]){
                        beg = middle + 1;
                }
                else {
                        end = middle - 2;
                }
        }while(end >= beg);
        return -1;
}