/*
*Author: Luis Roldan
*Created on May 5, 2026
*Prupose: Determine if the input integer is prime or not.
*         If prime, return true.
*         If not prime, return false.
*/

//sys Libraries
#include <iostream> //input - output library
using namespace std; //entity organizer

//prototypes 
bool isPrime(int);

//main f(x)
int main(int argc, char** argv){
    //variables
    int n;
    //Initialization
    cout << "Input a number to test if Prime.\n";
    cin >> n;
    isPrime(n);
    if (isPrime(n) == true){
        cout << n << " is a prime.";
    }
    else {
        cout << n << " is not a prime.";
    }
    return 0;
}

//defining f(x)s
bool isPrime(int n){
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <  n; i++){
        if (n % i == 0){
            return false;   }
    }
    return true;
}