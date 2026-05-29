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
    for (int i = 0; i < n; i++){
        int temp = t[i];
        t[i] = t[n - 1 - i];
        t[n - 1 - i] = temp; 
    }
}
void print(int t[], int n, int m)
{
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 10; j++){
            cout << t[i] << " ";
        }
    cout << endl;
    }
}
/*
input:
50·58·76·66·47·53·27·52·34·22·↵
60·49·59·21·48·26·53·43·51·87·↵
20·89·71·39·65·62·62·38·62·99·↵
25·59·81·51·16·81·35·94·71·64·↵
44·75·32·25·15·24·53·97·73·43·↵

expect result:
43·73·97·53·24·15·25·32·75·44·↵
64·71·94·35·81·16·51·81·59·25·↵
99·62·38·62·62·65·39·71·89·20·↵
87·51·43·53·26·48·21·59·49·60·↵
22·34·52·27·53·47·66·76·58·50·↵
*/