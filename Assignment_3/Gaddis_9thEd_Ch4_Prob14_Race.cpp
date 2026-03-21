/*
*File: Gaddis 9th Eddition Chapter 4 Problem 14
*Author: Luis Roldan
*Created onmarch 20, 2026
*Purpose: Race 
*/

//Sys Libraries
#include <iostream> //Input-Output Library
#include <iomanip> //Formating
#include <string>
using namespace std;

//main f(x)
int main(int argc, char** argv){
    //Declaring Variables
    string
    n1, n2, n3, //Runner names
    firstN, secN, thirdN; //order inwhc=ich names willl be placed
    unsigned short int 
    t1, t2, t3, //Runner times
    f1, f2, f3; //rankin of times

    //initialization
    cout << "Race Ranking Program\nInput 3 Runners\nTheirnames, then their times\n";
    cin>>n1>>t1>>n2>>t2>>n3>>t3;

    //Mapping
    if (t1<t2 && t1<t3){
        f1 = t1; firstN = n1;
        if (t2<t3){
            f2 = t2; secN = n2;
            f3 = t3; thirdN = n3;}
        else {
            f2 = t3; secN = n3;
            f3 = t2; thirdN = n2;}
    }
    else if (t2<t1 && t2<t3){
        f1 =t2; firstN = n2;
        if (t1<t3){
            f2 = t1; secN = n1;
            f3 = t3; thirdN = n3;}
        else {
            f2 = t3; secN = n3;
            f3 = t1; thirdN = n1;}
    }
    else {
        f1 = t3; firstN = n3;
        if (t1<t2){
            f2 = t1; secN = n1;
            f3 = t2; thirdN = n2;}
        else {
            f2 = t2; secN = n2;
            f3 = t1; thirdN = n3;}
    }
    cout << left << firstN << right << setw(3) << f1 << endl;
    cout << left << secN << right <<setw(3) << f2 << endl;
    cout << left << thirdN << right << setw(9)<< f3;
return 0;
}