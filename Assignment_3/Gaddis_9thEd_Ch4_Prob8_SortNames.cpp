/*
File: Gaddis 9th Edition Chapter 4 Probelm 8 
Created on March 17, 2026
Purpose: Sort Names
*/

//Preprocessor-Sys Library 
#include <iostream> //Input-Output Library 
#include <string> 
using namespace std; //Entity Organizor 

//Execution begins here!
int main (int argc, char** argv)
{
    //Declare variables
    string n1, n2, n3, frst, scnd, thrd; 
    
    //initialization
    cout << "Sorting Names\nInput 3 names\n";
    cin >>n1>>n2>>n3;
    
    //maping
    if (n1<n2&&n1<n3) {
        frst = n1;
        if (n2<n3) {
            scnd = n2;
            thrd = n3;
        }
        else {
            scnd = n3;
            thrd = n2;        }
    }
    else if (n2<n1 && n2<n3) {
        frst = n2;
        if (n1<n3) {
            scnd = n1;
            thrd = n3;
        }
        else {
            scnd = n3;
            thrd =n1;
        }
    }
    else {
        frst =n3;
        if (n1<n2){
            scnd = n1;
            thrd = n2;
        }
        else {
            scnd = n2;
            thrd = n1;
        }
    }
    cout << frst <<endl;
    cout <<scnd <<endl;
    cout <<thrd;
return 0;
}