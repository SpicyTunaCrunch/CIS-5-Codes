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

//f(x) prototypes
void prob0();
void prob1();
void prob2();
void prob3();

//main menu f(x)
int main(int argc, char** argv){
    
//Declaring menu Variable 
char 
choose, //user input, to choose what problem to run
again; //ask user if they want to run program again

do{
    if (choose <= 7 && choose >= '0'){
        cout << endl;
    }
    cout << "\n                  MENU\n";
    cout << "'''''''''''''''''''''''''''''''''''''''''''''\n";
    cout << " What Question would you like to run?\n";
    cout << "0 To run Problem Sorting Names\n";
    cout << "1 To run Problem Book Worm Points\n";
    cout << "2 To run Problem Bank Charges\n";
    cout << "3 To run Problem Race\n";
    cout << "4 To run Problem Internet Service Provider\n";
    cout << "5 To run Probelm Compatible Signs\n";
    cout << "6 To run Problem Rock Paper Scissors\n";
    cout << "7 To run Problem Roman Conversion\n";
    cout << "What question would you like to run?\n";
    cin >> choose;
    cout << endl;
    if (choose !='0' && choose !='1' && choose !='2' && choose !='3' && choose !='4'&& choose !='5' && choose !='6'&&choose !='7'){
        cout << "Invalid input, please enter a choice between 0-7. Would you like to retry?\n(Type y for yes or anything other key for no)\n";
        cin >> again;   }
    else {
    //Mapping out switch menu choice sellection
        //Problem O
        switch (choose){
            case '0': prob0(); { break; } //End case

            //Problem 1
            case '1': prob1(); { break; } //End case

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
                    cout << "Urgent: Account is overdrawn!";  }
            cout << endl;
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
            cout << endl;
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
                    cout << "Invalid Package!"<< endl;
                }
                cout << "Bill = $ " << bill;
            cout << endl;
            break;  }   //End case

            //Problem 5
            case '5': { cout << "You are in Problem Compatible Signs\n";
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
            cout << endl;
            break;  }   //End case

            //Problem 6
            case '6': { cout << "You are in Problem Rock Paper Scissors\n";
                //Delcare Variables
                char 
                P, R, S, p, r, s, //P == Papper, R == Rock, S == Scissors
                p1, p2; //Player 1 & Player 2
                //Initialiation 
                cout << "Rock Paper Scissors Game\nInput Player 1 and Player 2 Choices\n";
                cin >> p1 >> p2;
                //Mappping
                if ((p1 == 'P' && p2 == 'R') || (p1 == 'p' && p2 == 'r') || (p1 == 'R' && p2 == 'P') || (p1 == 'r' && p2 == 'p') || (p1 == 'R' && p2 == 'p') || (p1 =='r' && p2 =='P') || (p1 == 'P' && p2 == 'r') || (p1 == 'p' && p2 == 'R')){
                    cout << "Paper covers rock.";}
                else if ((p1 == 'R' && p2 == 'S') || (p1 == 'r' && p2 == 's') || (p1 == 'S' && p2 == 'R') || (p1 == 's' && p2 == 'r') || (p1 == 'S' && p2 =='r') || (p1 == 's' && p2 == 'R') || (p1 == 'r' && p2 == 'S') || (p1 == 'R' && p2 =='s')){
                    cout << "Rock breaks scissors.";}
                else if ((p1 == 'P' && p2 == 'S') || (p1 == 'p' && p2 == 's') || (p1 == 'S' && p2 == 'P') || (p1 == 's' && p2 == 'p') || (p1 =='P' && p2 == 's') || (p1 == 'p' & p2 == 'S') || (p1 =='s' && p2 =='P') || (p1 == 'S' && p2 == 'p')) {
                    cout << "Scissors cuts paper.";}
                else if ((p1 == 'R' && p2 == 'R') || (p1 == 'r' && p2 == 'r') || (p1 == 'R' && p2 == 'r') || (p1 == 'r' && p2 == 'R') ||
                    (p1 == 'S' && p2 == 'S') || (p1 == 's' && p2 == 's') || (p1 == 's' && p2 == 'S') || (p1 == 'S' && p2 == 's') || 
                    (p1 == 'P' && p2 == 'P') || (p1 == 'p' && p2 == 'p') || (p1 == 'P' && p2 == 'p') || (p1 == 'p' && p2 == 'P')) {             
                    cout << "Nobody wins.";}
            cout << endl;
            break;  }   //End case

            //Problem 7
            case '7': { cout << "You are in Problem Roman Conversion\n";
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
                    cout << arabic << " is Out of Range!" << endl;
                }
            cout << endl;
            break;  }   //End case
        }
        cout << "Would you like to choose another question?\n(Type y for yes or anything other key for no)\n";
        cin >> again;   
    }    
    
} while (again == 'y' || again == 'Y'); //End Menu
cout << "       Quiting...";
    return 0;
}
void prob0(){
    cout << "You are in Problem Sorting  Names\n";
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
    cout <<thrd <<endl;   }

void prob1(){ cout << "You are in Problem Book Worm Points\n";
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
    cout << endl;         }
