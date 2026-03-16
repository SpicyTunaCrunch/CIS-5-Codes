/* The professors example on this program
    */

//preprocessor library
#include <iostream>
#include <cstdlib> //for random number seed
#include <ctime>

//entity organizer
using namespace std;

int main (int argv,char **argc) {

    //Set Random # Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //DECLARE VARIABLES
float hrsWrkd, //Hours Worked 0-70
    payRate,//Pay Rate in $'s/hr
    payChck;//Gross pay
int ovrTime; //Over TIme in hrs

    //initializing Variables
    payChck = 0;
    ovrTime=40;
    hrsWrkd=rand()%71;//[0-70]
    payRate=rand()%6+17;//[17-22]

    //Mapping input output
    payChck=hrsWrkd*payRate;//Straight time
    payChck +=
            hrsWrkd>ovrTime?
            payRate*(hrsWrkd-ovrTime):0;//Double time Pay

    //Display Results
    cout <<"Your Hours worked= " <<hrsWrkd<<endl;
    cout<<"Your pay Rate =$"<<payRate<<"/hr"<<endl;
    cout<<"Your Paycheck = $"<<payChck<<endl;

    return 0;
}