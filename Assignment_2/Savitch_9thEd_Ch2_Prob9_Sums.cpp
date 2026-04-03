/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Mar 5th, 2024, 10:16 AM
 * Purpose:  Positive/Negative/Total Sums
 */

//System Libraries
#include <iostream>  //Input-Ouput Library
#include <iomanip> //Formating
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all variables
    signed short input,//Input 10 values
                sumPos,//Cumulative sum of all positive values
                sumNeg;//Cumulative sum of all negative values
    
    //Initialize all variables
    sumPos=sumNeg=0;
    
    //Process or Map solutions
    cout<<"Input 10 numbers, any order, positive or negative"<<endl;
    
    cin>>input;
    //        Bool      True  False
    sumPos += input>0? input:    0;
    sumNeg += input<0? input:    0;
    
    cin>>input;
    //        Bool      True  False
    sumPos += input>0? input:    0;
    sumNeg += input<0? input:    0;
    
    cin>>input;
    //        Bool      True  False
    sumPos += input>0? input:    0;
    sumNeg += input<0? input:    0;
    
    cin>>input;
    //        Bool      True  False
    sumPos += input>0? input:    0;
    sumNeg += input<0? input:    0;
    
    cin>>input;
    //        Bool      True  False
    sumPos += input>0? input:    0;
    sumNeg += input<0? input:    0;
    
    cin>>input;
    //        Bool      True  False
    sumPos += input>0? input:    0;
    sumNeg += input<0? input:    0;
    
    cin>>input;
    //        Bool      True  False
    sumPos += input>0? input:    0;
    sumNeg += input<0? input:    0;
    
    cin>>input;
    //        Bool      True  False
    sumPos += input>0? input:    0;
    sumNeg += input<0? input:    0;
    
    cin>>input;
    //        Bool      True  False
    sumPos += input>0? input:    0;
    sumNeg += input<0? input:    0;
    
    cin>>input;
    //        Bool      True  False
    sumPos += input>0? input:    0;
    sumNeg += input<0? input:    0;

    //Display the output
    cout<<"Negative sum ="<< setw(4) << sumNeg<<endl;
    cout<<"Positive sum ="<< setw(4) << sumPos<<endl;
    cout<<"Total sum    ="<< setw(4) << sumPos+sumNeg;
    

    //Exit the Program
    return 0;
}