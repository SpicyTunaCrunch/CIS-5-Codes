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

//main f(x)
int main (int argc, char** argv){
    char
    a, //1st place
    b, //2nd place
    c, //3rd place
    d; //4th place
    a = ' ';
    b = ' '; 
    c = ' ';
    d = ' ';
    cout << "Create a histogram chart." << endl;
    cout << "Input 4 digits as characters." << endl;
    cin >> a >> b >> c >> d;
    if (d - 48 >= 0 && d - 48 <= 9){
        cout << d << " ";
        for (int i = 0; i < (d - 48); i++){
            cout << "*";    }
        cout << endl;
        }
    else {
        cout << d << " ?\n";
    }
    if (c - 48 >= 0 && c- 48 <= 9){
        cout << c << " ";
        for (int i = 0; i < (c - 48); i++){
            cout << "*";    }
        cout << endl;
        }
    else {
        cout << c << " ?\n";
    }
    if (b - 48 >= 0 && b - 48 <= 9){
        cout << b << " ";
        for (int i = 0; i < (b - 48); i++){
            cout << "*";    }
        cout << endl;
        }
    else {
        cout << b << " ?\n";
    }
    if (a - 48 >= 0 && a - 48 <= 9){
        cout << a << " ";
        for (int i = 0; i < (a - 48); i++){
            cout << "*";    }
        cout << endl;
        }
    else {
        cout << a << " ?\n";
    }
    return 0;
}
