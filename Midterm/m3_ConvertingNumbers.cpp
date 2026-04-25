/*
*File: Midterm Question 3 Converting Numbers
*Author: Luis Roldan
*Created on April 24, 2026
*Purpose: We would like to write a check.  The computer needs to translate the numerical result to English.
*       Input an integer in the range [1-3000] and output the English equivalent.
*/

//syslibraries
#include <iostream> //input-output library
#include <string> //string library
using namespace std; //entity organizer

//prototypes
void conv(unsigned short int number);
//main f(x)
int main(int argc, char ** argv){
    //Variables
    unsigned short number;
    
    cout<<"Input an integer [1-3000] convert to an English Check value."<<endl;
    cin>>number;

    conv(number);
    cout << "and no/100's Dollars\n";
    return 0;
}
void conv(unsigned short int number){
    string
    w1000 = "",
    w100 = "",
    w10 = "",
    w1 = ""; //word conversion of the words
    unsigned short int
    thous,  hundos, tens, ones;
    thous = number/1000; //looking for thousands
    number -= thous*1000; //substracting thousands
    hundos = number/100; //looking for hundreds
    number -= hundos*100; //substracting hundreds
    tens = number/10; //looking for tens
    number -= tens*10; //substracting tens
    ones = number; // remainfder are ones

    switch (thous){
        case 9: w1000 += "Nine Thousand "; break;
        case 8: w1000 += "Eight Thousand "; break;
        case 7: w1000 += "Seven Thousand "; break;
        case 6: w1000 += "Six Thousand "; break;
        case 5: w1000 += "Five Thousand "; break;
        case 4: w1000 += "Four Thousand "; break;
        case 3: w1000 += "Three Thousand "; break;
        case 2: w1000 += "Two Thousand "; break;
        case 1: w1000 += "One Thousand "; break;
    }
    switch (hundos){
        case 9: w100 += "Nine Hundred "; break;
        case 8: w100 += "Eight Hundred "; break;
        case 7: w100 += "Seven Hundred "; break;
        case 6: w100 += "Six Hundred "; break;
        case 5: w100 += "Five Hundred "; break;
        case 4: w100 += "Four Hundred "; break;
        case 3: w100 += "Three Hundred "; break;
        case 2: w100 += "Two Hundred "; break;
        case 1: w100 += "One Hundred "; break;
    }
    if ( tens == 1){
        switch (tens + ones){
            case 19: w1 += "Nineteen "; break;
            case 18: w1 += "Eighteen "; break;
            case 17: w1 += "Seventeen "; break;
            case 16: w1 += "Sixteen "; break;
            case 15: w1 += "Fifteen "; break;
            case 14: w1 += "Fourteen "; break; 
            case 13: w1 += "Thirteen "; break;
            case 12: w1 += "Twelve "; break;
            case 11: w1 += "Eleven "; break;
            case 10: w1 += "Ten "; break;
        }
    }
    else {       
        switch (tens){
            case 9: w10 += "Ninety "; break;
            case 8: w10 += "Eighty "; break;
            case 7: w10 += "Seventy "; break;
            case 6: w10 += "Sixty "; break;
            case 5: w10 += "Fifty "; break;
            case 4: w10 += "Forty "; break;
            case 3: w10 += "Thirty "; break;
            case 2: w10 += "Twenty "; break;
        }
        switch (ones){
            case 9: w1 += "Nine "; break;
            case 8: w1 += "Eight "; break;
            case 7: w1 += "Seven "; break;
            case 6: w1 += "Six "; break;
            case 5: w1 += "Five "; break;
            case 4: w1 += "Four "; break;
            case 3: w1 += "Three "; break;
            case 2: w1 += "Two "; break;
            case 1: w1 += "One "; break;
        }
    }
    cout << w1000 << w100 << w10 << w1;
}
    