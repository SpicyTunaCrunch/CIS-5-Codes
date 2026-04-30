/*
*File: Midterm Menu
*Author: Luis Roldan
*Created on April 29, 2026
*Purpose: Utilize the following code to place your problems then execute all problems at once.
*       Try a sample case.
*       The process looks like
*       1)  Show the Menu
*       2)  Type which problem
*       3)  Input
*       4)  Output
*       5)  Repeat 1) until the input for 2) is <1 or >6
*/

//sys libraries
#include <iostream> // input-output library
#include <iomanip> //formatting library
using namespace std;

//prototypes
void Menu();
int  getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();

//main f(x)
int main(int argc, char** argv){
    //variables
      int inN;
    
    //Loop on each problem
    do{
        Menu();
        inN=getN();
        switch(inN){
            case 1:    problem1();break;
            case 2:    problem2();break;
            case 3:    problem3();break;
            case 4:    problem4();break;
            case 5:    problem5();break;
            case 6:    problem6();break;
            default:   def(inN);
	}
    }while(inN<7);

    return 0;
}
void Menu(){
    cout<<endl;
    cout<<"Type 1 to execute Problem 1"<<endl;
    cout<<"Type 2 to execute Problem 2"<<endl;
    cout<<"Type 3 to execute Problem 3"<<endl;
    cout<<"Type 4 to execute Problem 4"<<endl;
    cout<<"Type 5 to execute Problem 5"<<endl;
    cout<<"Type 6 to execute Problem 6"<<endl;
    cout<<"Type anything else to exit."<<endl<<endl;
}

int  getN(){
    int inN;
    cin>>inN;
    return inN;
}

void def(int inN){
    cout<<endl<<"Typing "<<inN<<" exits the program."<<endl;
}

void problem1(){
        //Variables
    unsigned short n;
    char shape;       //f-> forward b->backward x->cross
    
    //Input or initialize values Here
    cout << "Create a numbered shape that can be sized." << endl;
    cout << "Input an integer number [1,50] and a character [x,b,f]." << endl;
    cin >> n >> shape;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (n % 2 != 0){
                if ( shape == 'b'){
                    if (i == j){
                        cout << (n - i);    } 
                    else {
                        cout << " ";    }
                }
                else if ( shape == 'f'){
                    if ( j == (n - i - 1)) {
                        cout << (i + 1);    }
                    else {
                        cout << " ";}
                }
                else if ( shape == 'x'){
                    if (i == j ){
                        cout << (n - i);    } 
                    else if (j == (n - i - 1)  ){
                        cout << (i + 1);    }
                    else {
                        cout << " ";    }
                }
            }
            else {
                if ( shape == 'b'){
                    if (i == j){
                        cout << (i + 1);    } 
                    else {
                        cout << " ";    }
                }
                else if ( shape == 'f'){
                    if ( j == (n - i - 1)) {
                        cout << (n - i);    }
                    else {
                        cout << " ";}
                }
                else if ( shape == 'x'){
                    if (i == j ){
                        cout << (i + 1);    } 
                    else if (j == (n - i - 1)  ){
                        cout << (n - i);    }
                    else {
                        cout << " ";    }
                }
            }

        }  
        cout << endl; 
    }
}

void problem2(){
    
}

void problem3(){
        //Variables
    unsigned short 
    number,
    thous,
    hundos,
    tens,
    ones;
    string
    w1000 = "",
    w100 = "",
    w10 = "",
    w1 = ""; //word conversion of the words
    
    cout<<"Input an integer [1-3000] convert to an English Check value."<<endl;
    cin>>number;
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
        switch (10 + ones){
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
    cout << "and no/100's Dollars\n";
}

void problem4(){
        //vairiables
    unsigned short int 
    hrs; //hours of usage
    char
    choice; //plan chosen
    float 
    i, m, //placeholder
    priceA = 16.99f, // includes a 16.99 monthly base charge
    priceB = 26.99f, //total price including 26.99 monthly base charge
    priceC = 36.99f;
    cout<<"ISP charges for service delivered."<<endl;
    cout<<"Input package A,B,C then hours used for the month"<<endl;   
    cin >> choice >> hrs;

    //if (choice == 'a' || choice == 'A'){
    if (hrs >10 ){
        int hrsA = hrs;
        hrsA -= 10;
        if (hrsA > 10){
            priceA += (10 * .95f)  + ((hrsA -10) * .85f); }
            else if ( hrsA <=10){
                priceA += (hrsA * .95f);   }   }
    //else if (choice == 'b' || choice == 'B'){
    if (hrs > 20){
        int hrsB = hrs;
        hrsB -=20;   
        if (hrsB > 10){
            priceB += (10* .74f) + ((hrsB -10) * .64f);   }
        else if ( hrsB <= 10){
            priceB += (hrsB * .74f); }   }
    //else {   
    m = 0;
    char best; //best package 
    //comparing other plans
    m = priceA;
    best = 'A';

    if (priceB < m){
        m = priceB;
        best = 'B';
    }
    if (priceC < m){
        m = priceC;
        best = 'C';
    }
    cout << fixed <<  setprecision(2);
    //cout final conclusion
    if (choice == 'a' || choice == 'A'){
        i = priceA;   }
    else if (choice == 'b' || choice == 'B'){
        i = priceB;   }
    else {
        i = priceC;   }
    if ( i == m ){
        cout << "$" << i << " " << best << " $0.00\n";    }
    else {
        cout << "$" << i << " " << best << " $" << i - m << endl;   }
}

void problem5(){
    //variables
    float
    payr8, //user inputs how much they get paid
    hrsWrkd, //user inputs how many hours they worked
    c; //Check
    cout << "Paycheck Calculation.\n";
    cout << "Input payRate in $'s/hour and hours worked\n";
    cin >> payr8 >> hrsWrkd;

    if (hrsWrkd <= 20){
        c = hrsWrkd * payr8;    }
    else if (hrsWrkd <= 40){
        c = 20 * payr8;
        c += (hrsWrkd - 20) * payr8 * 1.5;   }
    else{
        c = 20 * payr8;
        c += (20) * payr8 * 1.5;    
        c += (hrsWrkd - 40) * payr8 * 2;    }

    cout << "$" << fixed << setprecision(2) << c << endl;
}

void problem6(){
    
}