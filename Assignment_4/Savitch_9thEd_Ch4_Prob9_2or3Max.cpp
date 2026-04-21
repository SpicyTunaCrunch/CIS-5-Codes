/*
*File: SAvitch 9th Edition Chapter 4 Problem 9
*Author: Luis Roldan
*Created on April 21, 2026
*Purpose: Maximum of first 2 parameters then Maximum if 3 peramiters
*/

//sys Libraries
#include <iostream> //Input-Output library
#include <iomanip> // Format library 
using namespace std;

//protorype
float max1( float &, float &, float &);
float max2( float &, float &, float &);

//main f(x)
int main(int argc, char** argv){
    //Declaring Variables
    float
    p1, p2, //maximum number 
    n1, n2, n3; //numbers inputed by user

    //initialization
    cout << "Enter first number:\n\n";
    cin >> n1;
    cout << "Enter Second number:\n\n";
    cin >> n2;
    cout << "Enter third number:\n\n";
    cin >> n3;
    p1 = max1(n1, n2, n3);
    cout << "Largest number from two parameter function:"<<endl<< p1<< endl<<endl;
    p2 = max2(n1, n2, n3);
    cout << "Largest number from three parameter function:"<<endl<< p2<< endl;


    return 0;
}
float max1( float &a, float &b, float &c){ 
float f;
    if (a > b){
        f = a;  }
    else {
        f = b;  }
    return f;
}
float max2( float &a, float &b, float &c){
    float s;
    if (a > b && a > c){
        s = a;    }
    else if (b > a && b > c){
        s = b;    }
    else {
        s = c;  }
    return s;
}
    