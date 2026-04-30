/*
*File: Midterm Question 4 ISP Charges
*Author: Luis Roldan
*Created on April 23, 2026
*Purpose: Calculate the Bill
*   An ISP has 3 different subscription packages
*   a)  $16.99 per month, 10 hours access.  Additional hours are $0.95 up to 20 hours then $0.85 for all additional hours.
*   b)  $26.99 per month, 20 hours access.  Additional hours are $0.74 up to 30 hours then $0.64 for each hour above this limit.
*   c)  $36.99 per month unlimited access
*   Input package a,b, or c, hours access then outputs dollar amount with package they should switch to save most amount of money.
*   Calculate the money saved and output as well.
*/

//syslibraries
#include <iostream> //input-output libraries
#include <iomanip> // Fotmatting
using namespace std; //entity organizing


//main f(x)
int main(int argc, char** argv){
    //vairiables
    unsigned short int 
    hrs; //hours of usage
    char
    choice; //plan chosen
    float 
    i, m, //placeholder
    priceA = 16.99f, // includes a 16.99 monthly base charge
    priceB = 26.99f, //total price including 26.99 monthly base charge
    priceC = 36.99f;
    cout<<"ISP charges for service delivered."<<endl;
    cout<<"Input package A,B,C then hours used for the month"<<endl;   
    cin >> choice >> hrs;

    //if (choice == 'a' || choice == 'A'){
    if (hrs >10 ){
        int hrsA = hrs;
        hrsA -= 10;
        if (hrsA > 10){
            priceA += (10 * .95f)  + ((hrsA -10) * .85f); }
            else if ( hrsA <=10){
                priceA += (hrsA * .95f);   }   }
    //else if (choice == 'b' || choice == 'B'){
    if (hrs > 20){
        int hrsB = hrs;
        hrsB -=20;   
        if (hrsB > 10){
            priceB += (10* .74f) + ((hrsB -10) * .64f);   }
        else if ( hrsB <= 10){
            priceB += (hrsB * .74f); }   }
    //else {   
    m = 0;
    char best; //best package 
    //comparing other plans
    m = priceA;
    best = 'A';

    if (priceB < m){
        m = priceB;
        best = 'B';
    }
    if (priceC < m){
        m = priceC;
        best = 'C';
    }
    cout << fixed <<  setprecision(2);
    //cout final conclusion
    if (choice == 'a' || choice == 'A'){
        i = priceA;   }
    else if (choice == 'b' || choice == 'B'){
        i = priceB;   }
    else {
        i = priceC;   }
    if ( i == m ){
        cout << "$" << i << " " << best << " $0.00\n";    }
    else {
        cout << "$" << i << " " << best << " $" << i - m << endl;   }

    return 0;
}
