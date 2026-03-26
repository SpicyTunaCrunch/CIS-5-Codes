/*
*File: Menu for Assignment 3
*Author: Luis Roldan
*Created on March 25, 2026
*Purpose: A menu for all the problems in Assignment 3
*/

//Sys libraries (all of them)
#include <iostream> //input output library
#include <iomanip> //formating library
#include <string> //string library
using namespace std; //entity organizer standard library

//main menu f(x)
int main(int argc, char** argv){
    
//Declaring menu Variable 
    char chose; //user input, to choose what problem to run

    cout << "This program presents a menu of options\n";
    cout << "0 To run Problem Sorting Names\n";
    cout << "1 To run Problem Book Worm Points\n";
    cout << "2 To run Problem Bank Charges\n";
    cout << "3 To run Problem Race\n";
    cout << "4 To run Problem Internet Service Provider\n";
    cout << "5 To run Probelm Compatible Signs\n";
    cout << "6 To run Problem Rock Paper Scissors\n";
    cout << "7 To run Problem Roman Conversion\n";

//Mapping out switch menu choice sellection
    //Problem O
    switch (chose){
        case '0': { cout << "You are in Problem Sorting  Names\n";
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
                    thrd = n3;}
                else {
                    scnd = n3;
                    thrd = n2;}
            }
            else if (n2<n1 && n2<n3) {
                frst = n2;
                if (n1<n3) {
                    scnd = n1;
                    thrd = n3;}
                else {
                    scnd = n3;
                    thrd =n1;}
            }
            else {
                frst =n3;
                if (n1<n2){
                    scnd = n1;
                    thrd = n2;}
                else {
                    scnd = n2;
                    thrd = n1;}
            }
            cout << frst <<endl;
            cout <<scnd <<endl;
            cout <<thrd;        
        break; } //End case

        //Problem 1
        case '1': { cout << "You are in Problem Book Worm Points\n";
            //Declaring Variables
            unsigned short int 
            bksprch,//books that were purchased
            points; //points earned 
            //initialization
            cout << "Book Worm Points\nInput the number of books purchased this month.\n";
            cin >>bksprch;
            //mapping
            if (bksprch == 0) points = 0;
            if (bksprch == 1) points = 5;
            if (bksprch == 2) points = 15;
            if (bksprch == 3) points = 30;
            if (bksprch >=4) points = 60;
            //Results 
            cout <<"Books purchased =" <<setw(3)<< bksprch<< endl;
            cout <<"Points earned   =" << setw(3)<< points;         
        break; } //End case

        //Problem 2
        case '2': { cout << "You are in Problem Bank Charges\n";
            //Declaring Variables
            float
            base, //base charge a month
            bal, //current bank balace
            newbal, //new balance
            chckfee, //fee for amount of checks
            low, //fee if balance falls under $400 before any checks are applied 
            numchks; //number of checks
            //Initialization
            base = 10; //$10 monthly fee
            low = 15; //$15 charge if balance is < $400
            chckfee = 0;
            newbal =0;
            cout << showpoint << fixed << setprecision(2);
            cout << "Monthly Bank Fees\nInput Current Bank Balance and Number of Checks\n";
            cin >> bal >>numchks;
            //Mapping 
                //Initaial balance checker
            if (bal >=0){
                cout <<  "Balance     $"<<setw(9)<< bal<< endl;
                if (bal >= 0 && bal < 400) { //balance under 400, add low balance fee
                    newbal -= low;
                    if (numchks <= 19){
                        chckfee += (numchks * .1f); }
                    else if (numchks == 20 && numchks <= 39){
                        chckfee += (numchks * .08f); }
                    else if (numchks == 40 && numchks <= 59){
                        chckfee += (numchks * .06f); }
                    else { 
                        chckfee += (numchks * .04f);}
            }   
            else {
                if (numchks <= 19){
                    chckfee += (numchks * .1f); }
                else if (numchks == 20 && numchks <= 39){
                    chckfee += (numchks * .08f); }
                else if (numchks == 40 && numchks <= 59){
                    chckfee += (numchks * .06f); }
                else { 
                    chckfee += (numchks * .04f);}  
            }
            newbal += bal - (chckfee + base);
            //Results 
            cout << "Check Fee   $" <<setw(9) <<chckfee<< endl;
            cout << "Monthly Fee $" <<setw(9)<< base << endl;
            if (bal>0 &&bal<400){
                cout << "Low Balance $" << setw(9)<< low<< endl;}
            cout << "New Balance $" << setw(9)<< newbal;
            }
            else {
                cout << "Urgent: Account is overdrawn!"<<endl;  }
        break;  } //End case

        //Problem 3
        case '3': { cout << "You are in Problem Race\n";
            //Declaring Variables
            string
            n1, n2, n3, //Runner names
            firstN, secN, thirdN; //order inwhc=ich names willl be placed
            int 
            t1, t2, t3, //Runner times
            f1, f2, f3; //rankin of times
             //initialization
            cout << "Race Ranking Program\nInput 3 Runners\nTheir names, then their times\n";
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
            cout << firstN << '\t' << setw(3) << f1 << endl;
            cout << secN << '\t' << setw(3) << f2 << endl;
            cout << thirdN << '\t' << setw(3) << f3;
        break;  } //End case

        //Problem 4
        case '4': { cout << "You are in Problem Internet Service Provider\n";
            //Declare Variables
            char
            pkg, //package chosen
            A, B, C;//Internet Packages
            float
            bill,// monthly bill
            hrs; //how many hours used in month
            //Initializing
            bill =0;
            cout << "ISP Bill\nInput Package and Hours" << endl;
            cin >> pkg >> hrs;
            //Mapping
            if (hrs >0 && hrs <744){
                if (pkg == 'A'){
                    bill += 9.95f;
                    if (hrs > 10){
                        bill += (hrs-10)*2.00f;
                    }
                    else {}
                }
                else if (pkg == 'B'){
                    bill +=14.95f;
                    if (hrs >20){
                        bill += (hrs-20)*1.00;
                    }
                    else {}
                }
                else if (pkg == 'C') {
                    bill +=19.95f;
                }
            }    
            else {
                cout << "Invalid Package!";
            }
            cout << "Bill = $ " << bill;
        break;  }   //End case

        //Problem 5
        case '5': { cout << "You are in Problem Compatible Signs\n";
            
        break;  }   //End case

}