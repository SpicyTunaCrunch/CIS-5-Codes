/*
*File: Final Question 1
*Author: Luis Roldan
*Created on June 9, 2026
*Purpose: Vallidate and Reverse
*/

//sys libs
#include <iostream> //in/out lib
#include <cstring> ////strlen()
using namespace std; 

//prototypes
bool inRange(const char [], unsigned short &);
bool reverse(unsigned short, signed short &);
short subtrct(signed short, int);

//main f(x)
int main(int argc, char** argv){
    //VAriables
    const int SIZE = 80;
    char digits[SIZE];
    unsigned short unShort;
    short snShort;

    //Initialization 
    cout << "Reverse a number and subtract if possible.\n";
    cout << "Input a number in the range of an unsigned short\n";
    cin >> digits;

    //Range checker
    if(!inRange(digits,unShort)){
        cout<<"No Conversion Possible\n";
        return 0;
    }

    //Reverse & range finder
    if(!reverse(unShort,snShort)){
        cout<<"No Conversion Possible\n";
        return 0;
    }

    //substract
    snShort = subtrct(snShort, 999);

    //Output
    cout << snShort << endl;

}
//Defining Functions
bool inRange(const char digits[], unsigned short &unShort){
    int len = strlen(digits);
    unsigned long val = 0;
    for (int i = 0; i < len; i++){
        if (digits[i] < '0' || digits[i]> '9'){
            return false;
        }
        val = val *10 +(digits[i] - '0');
        
        if (val > 65535){
            return false;
        }
    }
    unShort = val;
    return true;
}
bool reverse(unsigned short unShort, signed short &snShort){
    int rev = 0;
    int tmp = unShort;
    for(int i = 0; i < 5; i++){
        rev = rev * 10 + tmp % 10;
        tmp /=10;
    }
    if (rev > 32767){
        return false;
    }
    snShort = rev; 
    return true;
}
short subtrct(signed short n, int sub){
    if( n -sub >= 0){
        return n - sub;
    }
    return n;
}
