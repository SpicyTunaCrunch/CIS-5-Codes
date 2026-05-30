/*
*Author: Luis Roldan
*Created on May 28, 2026
*Purpose: Reverse the contents of the array
*/

//sys libraries
#include <iostream> //input-output library
#include <cstdlib> //random seed
#include <ctime> //time to set random number seed
#include <cmath> //math library
#include <iomanip> //formating library
using namespace std; //Entity organizer

//protortpes
void init(int [], int); //initialize array
void print(int[], int, int);    //print array
void reverse(int[], int);   //reverse array

//main f(x)
int main(int argc, char** argv){
    //random seed
    srand(static_cast<unsigned int>(time(0)));

    //variables
    const int SIZE = 50;
    int test [SIZE];

    //Initialize
    init(test, SIZE);

    reverse(test, SIZE);

    //Display
   print(test, SIZE, 10);

    return 0;
}
void init(int t[], int n)
{
    for (int i = 0; i < n; i++){
        cin >> t[i];
    }
}
void reverse(int t[], int n)
{
    for (int i = 0; i < n / 2; i++){
        int temp = t[i];
        t[i] = t[n - 1 - i];
        t[n - 1 - i] = temp; 
    }
}
void print(int t[], int n, int m)
{
    for (int i = 0; i < n; i++){
        cout << setw(2) << t[i] << " ";
        if ((i + 1) % m == 0){
            cout << endl;
        }
        if (n % m != 0){
            cout << endl;
        }
    }
}