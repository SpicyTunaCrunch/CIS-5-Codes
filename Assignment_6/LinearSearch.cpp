/*
*Author: Luis Roldan
*Created on May 29th, 2026
*Purpose: Find a value in an array
*/

// sys libraries
#include <iostream> // Input/output library
#include <cstdlib>  // Random f(x)
#include <ctime>    // Time Library
using namespace std;

//prototypes
void fillAry(int[], int);
void prntAry(int [], int, int);
bool linSrch(int [], int, int, int);

//main f(x)
int main(int argc, char** argv){
    //Random seed
    srand(static_cast<unsigned int>(time(0)));

    //Variables
    const int SIZE = 100;
    int array[SIZE];
    int 
    indx, val;

    //initialization
    val = 50;
    fillAry(array, SIZE);

    //Display output
    prntAry(array, SIZE, 10);
    if (linSrch(array, SIZE, val, indx))
        cout << val << " was found at indx = " << indx << endl;

    return 0;
}
void fillAry(int a[],  int n)
{
    for(int i = 0; i < n; i++){
        a[i] = rand() % 90 + 10;
    }
}
void prntAry(int a[], int n, int line)
{
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
        if (i % line == (line -1)){
            cout << endl;
        }
    }
}
bool linSrch(int a[], int n, int val, int indx)
{
    for (int i = 0; i < n - 1; i++){
        if (a[i] == val ) {
            return i;
        }
    }
    return -1;
}
