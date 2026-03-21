/*
*File: Savitch 9th Edition Chapter 3 Practice Problem 4
*Author: Luis Roldan
*Created on March 21, 2026
*Purpose: Compatible Astrology Signs
*/

//Sys Libraries
#include <iostream> //Input-Output Library
#include <string> //String Library
using namespace std; //Enitity organier

//main f(x)
int main(int argv, char** argc){
    //Delcaring Variables
    string 
    s1, s2; //sign 1 and sign 2 inputted by user

    //Initialization 
    cout  << "Horoscope Program which examines compatible signs.\nInput 2 signs.\n";
    cin >> s1 >> s2;

    //Mapping
    if ((s1 == "Aries" || s1 == "Leo" || s1 == "Sagittarius") && (s2 == "Aries" || s2 == "Leo" || s2 == "Sagittarius")) { 
        cout << s1 << " and " << s2 << " are compatible Fire signs.";
    }
    else if ((s1 == "Taurus" || s1 == "Virgo" || s1 == "Capricorn") && (s2 == "Taurus" || s2 == "Virgo" || s2 == "Capricorn")){
        cout << s1 << " and " << s2 << " are compatible Earth signs.";
    }
    else if ((s1 == "Gemini" || s1 == "Libra" || s1 == "Aquarius") && (s2 == "Gemini" || s2 == "Libra" || s2 == "Aquarius")){
        cout << s1 << " and " << s2 << " are compatible Air signs.";
    }
    else if ((s1 == "Cancer" || s1 == "Scorpio" || s1 == "Pisces") && (s2 == "Cancer" || s2 == "Scorpio" || s2 == "Pisces")){
        cout << s1 << " and " << s2 << " are compatible Water signs.";
    }
    else {
        cout << s1 << " and " << s2 << " are not compatible signs.";
    }
return 0;
}

