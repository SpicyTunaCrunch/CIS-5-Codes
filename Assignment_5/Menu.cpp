/*
*Author: Luis Roldan
*Created on May 15, 2026
*Purpose: Menu program for all questions in Assignment 5 
*/

//sys libraries
#include <iostream> //  in/out library
#include <iomanip> //formatting library
#include <cmath> //Math library
using namespace std; //Entity organizer

//prototypes
void time(int hr, int min, char mer, int wt);
void input(int &hr, int &min);
void convrt(int &hr, int &dhr, int &min, char &mer);
void output(int hr, int dhr, int min, char mer);
float psntVal(float, float, int);
int fndLwst(int, int, int, int, int);
void minmax(int, int, int);
int fctrl(int);
bool isPrime(int);
int collatz(int);
int colSqu(int);
void menu();
void prob1();
void prob2();
void prob3();
void prob4();
void prob5();
void prob6();
void prob7();
void prob8();
void prob9();
void eXit();

//main f(x)
int main(int argc, char** argv){
    char
    again; //does user want to repeat menu?
    int 
    choose; //what question does user want to run?
    
    do {
        menu();
        cin >> choose;
     /*   do {
            if (choose < 1 || choose > 9){
                cout << "Invalid input! Please enter a number between 1 & 10.\n";
            }
        } while (choose < 1 || choose > 9);
    */
        switch (choose){
            case 1 : prob1(); break;
            case 2 : prob2(); break;
            case 3 : prob3(); break;
            case 4 : prob4(); break;
            case 5 : prob5(); break;
            case 6 : prob6(); break;
            case 7 : prob7(); break;
            case 8 : prob8(); break;
            case 9 : prob9(); break;
        }
        cout << "Would you like to run another program? (y/n) : ";
        cin >> again;
    }while (again == 'y' || again == 'Y');
    return 0;
}
//defining f(x)

void menu(){
      cout << "\n\t|'''''''''''''''''''''''''''''''|\n";
        cout << "\t|                MENU           |\n";
        cout << "\t|'''''''''''''''''''''''''''''''|\n";
        cout << "\t|  1) Min & Max                 |\n";
        cout << "\t|  2) Factorial of Number       |\n";
        cout << "\t|  3) Is it a Prime Number?     |\n";
        cout << "\t|  4) Collatz Sequence          |\n";
        cout << "\t|  5) Collatz Sequence w/#      |\n";
        cout << "\t|  6) Time Clock                |\n";
        cout << "\t|  7) Military Time Conversion  |\n";
        cout << "\t|  8) Calculating Present Value |\n";
        cout << "\t|  9) Removing Lowest Score     |\n";
        cout << "\t'''''''''''''''''''''''''''''''''\n";
        cout << "\tChoose a problem to run: ";
}
void minmax(int n1, int n2,int n3){
    int 
    min, max;
    //calc min
    if (n1 < n2 && n1 < n3){
        min = n1;   }
    else if (n2 < n1 && n2 < n3){
        min = n2;   }
    else {
        min = n3;   }
    //calc max
    if (n1 > n2 && n1 > n3){
        max = n1;   }
    else if (n2 > n1 & n2 > n3){
        max = n2;   }
    else {
        max = n3;  }
    
    cout << "Min = " << min << endl;
    cout << "Max = "<< max << endl;
}
void prob1(){
    int n1, n2, n3;
    cout << "Input 3 numbers\n";
    cin >> n1 >> n2 >> n3;
    minmax(n1, n2, n3);
}
int fctrl(int n){
    int result =1;
    for (int i = 1; i <= n; i++){
        result *= i;
    }
    return result;
}
void prob2(){
        int 
    n;
    cout << "This program calculates the factorial using a function prototype found in the template for this problem.\nInput the number for the function.\n";
    cin >> n;
    cout << n << "! = " << fctrl(n) << endl;
}
bool isPrime(int n){
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            return false;   }
    }
    return true;
}
void prob3(){
    //variables
    int n;
    cout << "Input a number to test if Prime.\n";
    cin >> n;
    isPrime(n);
    if (isPrime(n) == true){
        cout << n << " is prime.\n";
    }
    else {
        cout << n << " is not prime.\n";
    }
}
int collatz(int n){
   int i = 1;
    while (n != 1){
        if (n % 2 == 0){
        n /= 2;
    }
    else {
        n *= 3;
        n +=1;
    }
    i++;
    }
    return i;
}
void prob4(){
        //Variables
    int n;
    //initializaton
    cout << "Collatz Conjecture Test\nInput a sequence start\n";
    cin >> n;
    //mapping
    cout << "Sequence start of " << n << " cycles to 1 in "<< collatz(n) << " steps\n";
}
int colSqu(int n){
   int i = 1;
    while (n != 1){
        if (n % 2 == 0){
        n /= 2;
    }
        else {
        n *= 3;
        n +=1;
    }
    cout << n;
    if (n != 1){
        cout <<", ";    }
    else {
        cout << endl;   }
    i++;
    }
    return i;
}
void prob5(){
    //Variables
    int n, ns;
    //initializaton
    cout << "Collatz Conjecture Test\nInput a sequence start\n";
    cin >> n;
    cout << n << ", ";
    ns = colSqu(n);
    //mapping
    cout << "Sequence start of " << n << " cycles to 1 in "<< ns << " steps\n";
}
void time(int hr, int min, char mer, int wt){
    int
    hrwait,
    minwait,
    wait; // display wait time minutes 
    cout << "Current time = ";
    //Display hours
    if ( hr < 10) {
        cout << "0";  }
    cout << hr << ":";
//Display minutes 
    if (min < 10){
        cout << "0";   }
    cout << min;
//Determining AM/PM output
    if (mer == 'A' || mer == 'a'){
        cout << " AM\n";    }
    else {
        cout << " PM\n";    }
//calculating time  after waiting period
//converting time into 24 hr
    if ((mer == 'p' || mer == 'P') && hr != 12){
        hr += 12;   }
    if ((mer ==  'A' || mer == 'a') && hr == 12){
        hr = 0;     }
    wait = hr * 60 + wt + min;
    hrwait = wait / 60;
    minwait = wait % 60;
//displaying waititme
//meridiem
    string 
    mrdm;
    if (hrwait >= 12){
        mrdm = " PM";   }
    else {
        mrdm = " AM";   }
//hours
    cout << "Time after waiting period = ";
    if (hrwait == 0){
        hrwait = 12;    }
    else if (hrwait > 12){
        hrwait -= 12;   }
    if (hrwait < 10){
        cout << "0";    }
    cout << hrwait << ":";
//minutes
    if (minwait < 10) {
        cout << "0";    }
    cout << minwait <<  mrdm << endl << endl;
}
void prob6(){
        //variables
    char 
    mer; //Meridiem ( AM or PM)
    int
    hr, //hour
    min, //minute
    wt; //time user wants to wait in minutes
    cout << "Enter hour:\n";
    cin >> hr;
    cout << "Enter minutes:\n";
    cin >> min;
    cout << "Enter A for AM, P for PM:\n";
    cin >> mer;
    cout << "Enter waiting time:\n";
    cin >> wt;
    time(hr, min, mer, wt);
}
void output(int hr, int dhr, int min, char mer){
    if (hr < 10){
        cout << "0";    }
    cout << hr << ":" << min;
    if (hr < 24 && min < 60){
    cout << " = ";
        if (dhr == 0){
            cout << "0";    }
        cout << dhr << ":";
        if (min < 10){
            cout << "0";    }
        cout << min << " ";
        if (mer == 'A'){
            cout << "AM\n";     }
        else {
            cout << "PM\n";     }
        }
    else {
        cout << " is not a valid time\n";
        }
}
void convrt(int &hr, int &dhr, int &min, char &mer){
    if (hr == 0 ){
        dhr = 12;
        mer = 'A';  }
    else if (hr < 12){
        dhr = hr;
        mer = 'A';  }
    else if ( hr == 12){
        dhr = hr;
        mer = 'P';  }
    else {
        dhr = hr - 12;
        mer = 'P';  }
}
void input(int &hr, int &min){
    char 
    cologn; // ':'
    cin >> hr >> cologn >>  min;
}
void prob7(){
    int
    dhr, 
    hr, //hour
    min; //minutes
    char
    mer; //meridiem
    cout << "Military Time Converter to Standard Time\n";
    cout << "Input Military Time hh:mm\n";
    input(hr, min);
    convrt (hr, dhr, min, mer);
    output(hr, dhr, min, mer);
}
float psntVal(float rate,float ftr_Val,int time){
    float
    power = 1,
    base = (1 + (rate/100));  
    for (int i = 0; i <time; i++){
        power *= base  ;
    }
    return (ftr_Val/ power);    
}
void prob8(){
      //Variables
    float 
    ftr_Val, //Future Value desire
    rate; //interest rate %
    int 
    time;   //Nuber of years
    cout << "This is a Present Value Computation\n";
    cout << "Input the Future Value in Dollars\n";
    cin >> ftr_Val;
    cout << "Input the Number of Years\n";
    cin >> time;
    cout << "Input the Interest Rate %/yr\n";
    cin >> rate;
    cout << "The Present Value = $";
    cout << fixed << setprecision(2) << psntVal(rate, ftr_Val, time);  
}
int fndLwst(int s1, int s2, int s3, int s4, int s5){
    int
    lowest;
    lowest = s1;
    if (s2 < lowest) {
        lowest = s2;    }
    if (s3 < lowest) {
        lowest = s3;    }
    if (s4 < lowest){
        lowest = s4;    }
    if (s5 < lowest){
        lowest = s5;    }
    return (s1 + s2+ s3 + s4 + s5 - lowest) / 4;
}
void prob9(){
        int
    s1, s2, s3, s4, s5; //5 test scores
    float 
    result;
    cout << "Find the Average of Test Scores\nby removing the lowest value.\n";
    cout <<"Input the 5 test scores.\n";
    cin >> s1 >> s2 >> s3 >> s4 >> s5;
    result = fndLwst(s1, s2, s3, s4, s5);
    cout << "The average test score = " << fixed << showpoint << setprecision(1) << result;
}
