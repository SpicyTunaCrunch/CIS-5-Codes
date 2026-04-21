/* 
        Author: Luis Roldan
        Date: April 21, 2026
        Purpose: Savigns Function Pass by Value
*/

// System Libraries
#include <iostream> //Input/Output Libraries
#include <cmath>  //power function, log function
using namespace std; //STD Name-space where Library is complied

//User Libraries 
//Global Constants - Scientific/Pysics/Chemestry/Conversions Hgiher Dimensions
const float CNVPCNT = 100; // Conversion
//Function Prototypes
float save1(float, float, int);
float save2(float, float, int);
float save3(float, float, int);
float save4(float, float, int);

//Execution Begins Here
int main(int argv,char **argc) {
        //Set the Random Number Seed

        //Declare Variebales
        float 
        pv,   //present value n dollars
        intRate; // Interest Rate in % 
        int numCmpd; // number of compounding periods in years


        //Initialize Variables
        pv = 100; //$100
        intRate = 6; // 6%
        numCmpd = 12; //12 Years

        //Mapping Input to Output
        intRate/=CNVPCNT;

        //Display the Results 
        cout << "Savings w/ Power f(x)     = " << "save1(" << pv<<","<<intRate<<","<< numCmpd<<") = $" <<  save1(pv, intRate, numCmpd)<<endl;
        cout << "Savings w/ Exp-Log f(x)   = " << "save2(" << pv<<","<<intRate<<","<< numCmpd<<") = $" <<  save2(pv, intRate, numCmpd)<<endl;
        cout << "Savings w/ For Loop f(x)  = " << "save3(" << pv<<","<<intRate<<","<< numCmpd<<") = $" <<  save3(pv, intRate, numCmpd)<<endl;
        cout << "Savings w/ Recursive f(x) = " << "save3(" << pv<<","<<intRate<<","<< numCmpd<<") = $" <<  save4(pv, intRate, numCmpd)<<endl;

        //exit Stage right
        return 0;
}
float save1(float pv, float i , int n){
        return pv*pow(1+i,n);
}
float save2(float pv, float i , int n){
        return pv*exp(n*log(1+i));
}
float save3(float pv, float i , int n){
        float fv = pv;
        for (int nYrs =1; nYrs<=n; nYrs++){
                fv*=(1+i);
        }
        return fv;
}
float save4(float pv, float i , int n){
        //Base Condition
        if (n<=0) return pv;
        //Recursion
        return save4(pv,i,n-1)*(1+i);
}