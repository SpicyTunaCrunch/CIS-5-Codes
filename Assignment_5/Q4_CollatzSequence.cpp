/*
*Author: Luis Roldan
*Created on May 5, 2026
*Purpose:Count from the start of the sequence to the end and output its length.
*        When even divide by 2, when odd multiply by 3 and add 1;
*        For example:
*        22, 11, 34, 17, 52, 26, 13, 40, 20, 10, 5, 16, 8, 4, 2, 1
*        The length of the sequence is 16!
*/

//sys Libraries
#include <iostream> //input-output library
using namespace std; //entity organizer

//prototypes
int collatz(int);

//main f(x)
int main(int argc, char** argv){
    //Variables
    int n, ns;
    //initializaton
    cout << "Collatz Conjecture Test\nInput a sequence start\n";
    cin >> n;
    cout << n << ", ";
    ns = collatz(n);
    //mapping
    cout << "Sequence start of " << n << " cycles to 1 in "<< ns << " steps";
    return 0;
}
int collatz(int n){
   int i = 1;
    while (n != 1){
        if (n % 2 == 0){
        n /= 2;
    }
        else {
        n *= 3;
        n +=1;
    }
    cout << n;
    if (n != 1){
        cout <<", ";    }
    else {
        cout << endl;   }
    i++;
    }
    return i;
}
