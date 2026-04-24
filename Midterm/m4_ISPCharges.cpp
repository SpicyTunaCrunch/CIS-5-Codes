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

//prototypes
float planA(int hrs);
float planB(int hrs);
float planC(int hrs);
void lowest(float  &a, float &b, float &c, char &);

//main f(x)
int main(int argc, char** argv){
    //vairiables
    unsigned short int 
    hrs; //hours of usage
    char
    choice; //plan chosen
    float 
    a, b, c; // plan totals to compate
    cout<<"ISP charges for service delivered."<<endl;
    cout<<"Input package A,B,C then hours used for the month"<<endl;   
    cin >> choice >> hrs;
    a = planA(hrs);
    b = planB(hrs);
    c = planC(hrs);
    lowest(a, b, c, choice);
    return 0;
}
//defining f(x)s
float planA(int hrs){
    //variables
    float 
    price = 16.99f; // includes a 16.99 monthly base charge
    if (hrs >10 ){
        hrs -= 10;
        if (hrs > 10){
            price += (10 * .95f)  + ((hrs -10) * .85f); }
        else if ( hrs <=10){
            price += (hrs * .95f);   }
    }
    return price;
}
float planB(int hrs){
    //variables
    float
    price = 26.99f; //total price including 26.99 monthly base charge
    if (hrs > 20){ 
        hrs -=20;
        if (hrs > 10){
            price += (10* .74f) + ((hrs -10) * .64f);   }
        else if ( hrs <= 10){
            price += (hrs * .74f);  }
    }
    return price;
}
float planC(int hrs){
    //varibales
    float
    price = 36.99f;
    return price;
}
void lowest(float &a, float &b, float &c, char &choice){
    float i; //chosen plan
    if (choice == 'a' || choice == 'A'){
        i = a;   }
    else if (choice == 'b' || choice == 'B'){
        i = b;   }
    else {
        i = c;   }
    float m = a;  //base for cheapest plan
    char best = 'A';
    //comparing other plans
    if (b < m){
        m = b; 
        best = 'B';     }
    if (c < m){
        m = c;
        best = 'C';     }
    cout << fixed <<  setprecision(2);
    //cout final conclusion
    if ( i == m ){
        cout << "$" << i << " " << best << " $0.00\n";    }
    else {
        cout << "$" << i << " " << best << " $" << i - m << endl;   }
}