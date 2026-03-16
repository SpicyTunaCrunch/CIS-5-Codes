/*  
    Author: Luis Roldan
    Sales Prediciton */

//preprocessor
#include <iostream>

//Entitiy Organizer
using namespace std;

//Conversion
const float MILLION = 1.0e6; //Def of Millions

//main function
int main ()
{
    //Variables
    float slsgen = .58f; //58% percentage generated of total sales
    float  prdgen = 8.6e6f; //8.6 million dollars sales predicted
    cout << "The East Cost devision generates " << slsgen*100 << "% of sales.\n";
    cout << "Company sales are prediction to be $" << prdgen/MILLION << " million this year."<< endl;
    cout <<"That division is predicted to generate $" << slsgen*prdgen/MILLION<< " thus comming year" << endl;

    return 0;
}