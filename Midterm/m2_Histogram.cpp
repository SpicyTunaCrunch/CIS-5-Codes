/*
*File: Midterm Question 2 Histogram
*Author: Luis Roldan
*Created on April 27, 2026
*Purpose: Read a 4 character number.  Output the result in in the following format,
*   Input 9873, Output:
*               3 ***
*               7 *******
*               8 ********
*               9 *********
*   If one of the numbers is not a digit, then put a ? mark
*/

//sys libraries
#include <iostream> //input-output libraries
using namespace std; //entity organizer

//prototype
void hist(unsigned short int n);

//main f(x)
int main (int argc, char** argv){
    unsigned short int
    n;
    cout << "Create a histogram chart." << endl;
    cout << "Input 4 digits as characters." << endl;
    cin >> n;
    hist(n);
    return 0;
}
//defining f(x)s
void hist(unsigned short int n){
    unsigned short int
    a, //1st #
    b, //2nd #
    c, //3rd #
    d; //4th #
    a = n /1000;
    if (a >= 1 && a <= 9){
        cout << a << " ";
        for (int e = 1; e <= a; e++){
            cout << "*";    }
            n -= a * 1000;
    }
    else if (a == 0){
        cout << a << " ";
    }
    else { cout << a << " ?";
    }
    cout << endl;
    b = n / 100;
    if (b >= 1 && b <= 9){
        cout << b << " ";
        for (int e = 1; e <= b; e++){
            cout << "*";    }
        n -= b * 100;
    }
    else if (b == 0){
    cout << b << " ";
    }
    else { cout << b << " ?";
    }
    cout << endl;
    c = n / 10;
    if (c >= 1 && c <= 9){
        cout << c << " ";
        for (int e = 1; e <= c; e++){
            cout << "*";    }
            n -= c * 10;
    }
    else if (c == 0){
    cout << c << " ";
    }
    else { cout << c << " ?";
    }
    cout << endl;
    d = n;
    if (d >= 1 && d <= 9){
        cout << d << " ";
        for (int e = 1; e <= d; e++){
            cout << "*";    }
    }
    else if (d == 0){
    cout << d << " ";
    }
    else { cout << d << " ?";
    }
    cout << endl;

}
/* use char to parse through the input substract by 48 to get the number else ifoutput that same char with ? mark */