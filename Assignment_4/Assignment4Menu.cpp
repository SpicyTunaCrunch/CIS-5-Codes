/*
*File: Menu for Assignment 4
*Author: Luis Roldan
*Created on April 21, 2026
*/

//System Libraries
#include <iostream> // Input-Output Library
#include <iomanip> //Formatting library
using namespace std; //entity organizer

//Global Constants
const float GAL = 0.264179f;

//Prototypes
void prob1();
void prob2();
void prob3();
void prob4();
void prob5();
void prob6();
float mpg(float &, float &);
void prob7();
void prob8();
float inf(float &, float &);
void prob9();
float iR8(float &, float &);
float ffutR8(float &, float &);
void prob10();
float max1( float &, float &, float &);
float max2( float &, float &, float &);

//main f(x)
int main (int argc, char** argv){
//Menu Variables
int
choose; //choosing what problem to run
char
again; //run another problem
    do {
        if (again == 'y' || again == 'Y'){
        cout << endl;   }
        
        cout << "\n\t|'''''''''''''''''''''''''''|\n";
        cout << "\t|            MENU           |\n";
        cout << "\t|''''''''''''''''' '''''''''|\n";
        cout << "\t|  1) Sum the Sequence      |\n";
        cout << "\t|  2) Pay in Pennies        |\n";
        cout << "\t|  3) Largest and Smallest  |\n";
        cout << "\t|  4) Rectangle             |\n";
        cout << "\t|  5) Patten                |\n";
        cout << "\t|  6) MPG Conversion        |\n";
        cout << "\t|  7) Fuel Efficiecy        |\n";
        cout << "\t|  8) Inflation             |\n";
        cout << "\t|  9) Estimated Cost        |\n";
        cout << "\t|  10) Parameter Maximum    |\n";
        cout << "\t'''''''''''''''''''''''''''''\n";
        cout << "\tChoose a problem to run: ";
        cin >> choose;
        cout << endl;
        if  (choose < 1 || choose > 10){
            cout << "Invalid input, Please enter a number between 1 & 10.\n(type y to return to menu or type any other key to exit)\n";
            cin >> again;   }  
        else {
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
                case 10 : prob10(); break;
            }
            cout << endl << "Would you like to choose another question?\n(Type y for yes or anything other key for no)\n";
            cin >> again; 
        }     
             
    } while (again == 'y' || again == 'Y');
 cout << "Exiting...\n\n\n\n\n\n\n";
 return 0;   
}
//Defining f(x)s
void prob1(){
    unsigned int
    sum, //Sum of numbers
    num; //User's number input
    cout << "This program will add all of the integers from 1 up to number entered.\nType a positive integer value: ";
    cin >> num;
    sum = 0;
    for (int i = 0; i <= num; i++) {
        sum += i; }
    cout << "Sum = "<< sum;
}
void prob2(){
    cout << "This program calculates how much you wwill earn over a period of time if your salary is 1 penny the first day and it doubles each day."<< endl 
         << "Enter the amount of days:";
    short int
    days; //Amount of days User will input
    int
    p, // Pennies
    sum; // Sum of the pennies 
    p = 1; 
    sum = 0;
    //Number of days
    do
    {   cin >> days;
        if (days <1)
        cout <<"Days must be 1 or greater" <<endl;
        //Validation
    }   while ( days < 1);

    for (int i = 0; i <days; i++){
        sum += p;
        p *=2;  }
    int 
    bills, //dollar bills
    change; //cents
    bills = sum/100;
    change = sum%100;
    cout << fixed  << setprecision(2) << showpoint;
    cout << "Pay = $" << bills << ".";
    if (change < 10){
        cout << "0";    }
    cout << change;
}
void prob3(){
    cout << "This problem diplays numbers from largest to smallest.\nPlease enter number as many numbers as youd like with spaces between them."
        << endl << "Enter -99 to signal the end of the series.\n";
    int
    min, //Smallest integer
    max, //Largest integer
    num; // number input
    min = 32767;
    max = -32767;
    while ( cin >> num && num != -99){
        if (num < min){
            min = num;  }    
        if (num > max){
            max = num; }    } 
    cout << "Smallest number in the series is " << min << endl;
    cout << "Largest  number in the series is " << max;
}
void prob4(){
    cout << "This problem displays a rectiangle using the character you input and the length of each side using the number you input.\n";
    int
    num; //number inputed
    char
    let; //letter inputed
    do {
        cout << "Enter a number (1-15): ";
        cin >> num;
        if (num > 15) {
            cout << "Invalid! Try again.\n";
        }
    } while (num > 15);
    cout << "Enter a character:";
    cin>> let;
    int c = 0; //Columns
    while (c <num){
        for (int r = 0; r<num; r++ ){
        cout << let;    } 
        c++;
        if (c <num){
            cout << "\n";   }   
    }
}
void prob5(){
    cout << "This problem diplays a pyramid that increments from 1 to the number you input, then decraments back to 1.\n" <<
        "Enter the number youd like the pyramid to peak at: \n";
    int
    num; //number inputed by user
    cin >> num;
    //mapping
    for (int i = 1; i <= num; i++){
        for (int j = 0; j < i; j++){
            cout << "+";    }
        cout << "\n";   
    }
    for (int i = num; i >= 1; i--){
        for (int j= i; j> 0; j--){
            cout << "+";
        }
        if (i != 1) {
            cout << "\n";
        }   
    }
}
void prob6(){
    cout << "This problem converts liters and miles into miles per gallons.\n";
    float 
    liter, mile, result;
    char
    again; //repeat loop? 
    cout << fixed << setprecision(2);
    do {
        if ( again == 'y' ) {
            cout << endl;   }
        cout << "Enter number of liters of gasoline:\n\n";
        cin >> liter;
        cout << "Enter number of miles traveled:\n\n";
        cin >> mile;
        result =mpg(mile, liter);
        cout << "miles per gallon:\n" << result << endl;
        cout << "Again:\n";
        cin >> again;
    }   while (again =='y');
}
float mpg (float &mile, float &liter){
    return mile / (liter * GAL);    
}
void prob7(){
    cout << "This problem converts liters and miles into miles per gallons for two cars then determins what car is more fuel efficient\n";
        float 
    car1L, car2L, //liter input for cars
    m1, m2, //miles for both cars
    mpg1, mpg2; //values to store both mpgs
    char
    again; //ask to repeat program?
    cout << fixed << setprecision(2);
    do {
        if (again == 'y'){
            cout << endl;   }
        cout << "Car 1\nEnter number of liters of gasoline:\n";
        cin >> car1L;
        cout << "Enter number of miles traveled:\n";
        cin >> m1;
        mpg1 = mpg(m1, car1L);
        cout << "miles per gallon: " << mpg1 << "\n\n";
        cout << "Car 2\nEnter number of liters of gasoline:\n";
        cin >> car2L;
        cout << "Enter number of miles traveled:\n";
        cin >> m2;
        mpg2 = mpg(m2, car2L);
        cout << "miles per gallon: " << mpg2 << "\n\n";
        if (mpg1 > mpg2){
            cout << "Car 1 is more fuel efficient\n\n";   }
        else {
            cout << "Car 2 is more fuel efficient\n\n";   }
        cout << "Again:\n";
        cin >> again;
    }   while ( again =='y');
}
void prob8(){
    cout << "This problem gauges inflation rate for the past year.\n";
    float 
    cP, oP, result;
    char
    again;
    cout << fixed << setprecision(2);
    do {
        if (again == 'y'){
            cout << endl;   }
        cout << "Enter current price:\n";
        cin >> cP;
        cout << "Enter year-ago price:\n";
        cin >> oP;
        result = inf(cP, oP);
        cout << "Inflation rate: " << result << "%\n\nWould you like to tun this westion again?\n(enter y for yes, or any other key for no)\n";
        cin >> again;
    }   while (again == 'y');
}
float inf(float &currPrice, float &oldPrice){
    float i = currPrice - oldPrice;
    return (i / oldPrice) * 100;    
}
void prob9(){
    cout << "This problem estimates the price of an item in one and two years from the time of the calculation.\n";
    float
    y1, y2, //inflation for the next years
    cP, oP, // Current price, old price
    infl, futr; // inflation rate, future rate
    char 
    again; //repeat operation
    do {
        if (again == 'y'){
            cout << endl;   }
    cout << fixed << setprecision(2);
    cout << "Enter current price:\n";
    cin >> cP;
    cout << "Enter year-ago price:\n";
    cin >> oP;
    infl = iR8(cP, oP);
    cout << "Inflation rate: " << infl * 100 <<"%\n\n";
    y1 = ffutR8(cP, infl);
    cout << "Price in one year: $" << y1 <<endl;
    y2 = ffutR8(y1, infl);
    cout << "Price in two year: $" << y2 <<endl<<endl;
    cout <<"Again:\n";
    cin >>again;
    } while (again == 'y');
}
float iR8(float &currPrice, float &oldPrice){
    float i = currPrice - oldPrice;
    return (i / oldPrice);    
}
float ffutR8(float &currPrice, float &r8){
    return (r8 *currPrice) + currPrice;   
}
void prob10(){
    cout << "This program finds the max if either the frist two parameters, then of all three parameters and displays the largeest one.\n";
    float
    p1, p2, //maximum number 
    n1, n2, n3; //numbers inputed by user
    //initialization
    cout << "Enter first number:\n\n";
    cin >> n1;
    cout << "Enter Second number:\n\n";
    cin >> n2;
    cout << "Enter third number:\n\n";
    cin >> n3;
    p1 = max1(n1, n2, n3);
    cout << "Largest number from two parameter function:"<<endl<< p1<< endl<<endl;
    p2 = max2(n1, n2, n3);
    cout << "Largest number from three parameter function:"<<endl<< p2<< endl;
}
float max1( float &a, float &b, float &c){ 
    float f;
    if (a > b){
        f = a;  }
    else {
        f = b;  }
    return f;
}
float max2( float &a, float &b, float &c){
    float s;
    if (a > b && a > c){
        s = a;    }
    else if (b > a && b > c){
        s = b;    }
    else {
        s = c;  }
    return s;
}
 