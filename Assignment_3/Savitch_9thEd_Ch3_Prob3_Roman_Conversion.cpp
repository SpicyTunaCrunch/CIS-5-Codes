/*
*File: Savitch 9th Edition Problem 3
*Author: Luis Roldan
*Created on March 23, 2026
*Purpose: Roman Numeral Conversion
*/

//Sys Libraries
#include <iostream> //Input-Output Librrary
#include <string> //string Library
using namespace std; // Entity Organizer

//Main f(x)
int main(int argc, char** argv) {
    //Declaring Variables
    unsigned int
    arabic, //number in arabic numbers
    thous, //1000
    huns, //100
    tens, //10
    ones; //1
    string 
    romanN; //Roman numeral 

    //Initializartion 
    cout << "Arabic to Roman numeral conversion.\nInput the integer to convert.\n";
    cin >> arabic;

    //calculation 
    if (arabic >= 1000 && arabic <= 3000){
        cout << arabic << " is equal to ";

        thous = arabic/1000; //looking for thousands
        arabic -= thous*1000; //suntracting thousands
        huns = arabic/100; //looking for hundreds
        arabic -= huns*100; //subtracting thousands
        tens = arabic/10; // looking for tens
        arabic -= tens*10; //subtracting tens
        arabic = ones; //remainder are ones

        switch (thous){
            case 3: romanN +="MMM";break;
            case 2: romanN +="MM";break;
            case 1: romanN +="M";
        }
        switch (huns) {
            case 9: romanN +="CM";break;
            case 8: romanN +="DCCC";break;
            case 7: romanN +="DCC";break;
            case 6: romanN +="DC";break;
            case 5: romanN +="D";break;
            case 4: romanN +="CD";break;
            case 3: romanN +="C";
            case 2: romanN +="C";
            case 1: romanN +="C";
        }
        switch (tens) {
            case 9: romanN +="XC";break;
            case 8: romanN +="LXXX";break;
            case 7: romanN +="LXX";break;
            case 6: romanN +="LX";break;
            case 5: romanN +="L";break;
            case 4: romanN +="XL";break;
            case 3: romanN +="X";
            case 2: romanN +="X";
            case 1: romanN +="X";
        }
        switch (tens) {
            case 9: romanN +="IX";break;
            case 8: romanN +="VIII";break;
            case 7: romanN +="VII";break;
            case 6: romanN +="VI";break;
            case 5: romanN +="V";break;
            case 4: romanN +="IV";break;
            case 3: romanN +="I";
            case 2: romanN +="I";
            case 1: romanN +="I";
        }
        arabic=(thous+huns+tens+ones);
        cout << romanN;
    }
    else{
        cout << arabic << " is Out of Range!";
    }
return 0;
}