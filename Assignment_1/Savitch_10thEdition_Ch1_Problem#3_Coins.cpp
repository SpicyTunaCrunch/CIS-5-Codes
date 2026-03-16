/* 
    Author: Luis Roldan
    Calculate Monetary value of coins */   

//Preprocessor
#include <iostream>

//Entity organizer
using namespace std;

//main functuion
int main()  
{
    //Variables
    int numq,//number of quarters
        numd,//number of dimes
        numn;//number of nickles
    
    //Input, Output
    cout << "How many quarters do you have?\n";
    cin >> numq;
    cout << "How many dimes do you have?\n";
    cin >> numd;
    cout << "How many nickels do you have?\n";
    cin >> numn;
    cout << "Your total is: $" << (numq*.25f)+(numd*.1f)+(numn*.05f) << endl;
    return 0;

}