/*
*File: Final Question 2
*Author: Luis Roldan
*Created on June 8,2026
*Purpose: Sort a 1 Demesional Array of Chaacters
*/

//sys libraries
#include <iostream>  //   input/output lib
#include <cstring> //c string lib
using namespace std; //entity organizer

//prototypes
int read(char[]);
void sort(char[], int);
void print(const char[], int);

//main f(x)
int main(int argc,char** argv){

    const int SIZE=80;
    char array[SIZE];
    int sizeIn, sizeDet;

    cout << "Read in a 1 dimensional array of characters and sort" << endl;
    cout << "Input the array size where size <= 20" << endl;
    cin >> sizeIn;

    cout << "Now read the Array" << endl;
    sizeDet = read(array);

    if(sizeDet == sizeIn){
        sort(array, sizeIn);
        print(array, sizeIn);
    }else{
        cout << (sizeDet < sizeIn ?
                "Input size less than specified." :
                "Input size greater than specified.") << endl;
    }
    return 0;
}
//defining f(x)
int read(char a[]){
    char sAry[80];
    cin >> sAry;
    int size = strlen(sAry);
    for (int i= 0; i < size; i++){
        a[i] = sAry[i];
    }
    return size;
}
void sort(char a[], int n){
    for (int i = 0; i < n -1; i++){
        for (int j = i+1; j < n; j++){
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
}
void print(const char a[], int n){
    for (int i = 0; i < n; i++){
        cout << a[i];
    }
    cout<< endl;
}

