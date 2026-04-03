/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Feb 29th, 2024, 1:04 PM
 * Purpose:  Diet Coke Dilema
 */

//System Libraries
#include <iostream>  //Input-Ouput Library
using namespace std;

//User Libraries


//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {

    const float CNVLBGR=453.592;//Grams/Pound
    
    //Declare all variables
    float mm,//Mass of Mouse
          wd,//Weight of Dieter lbs
          md,//Mass of the Dieter when finished dieting
         mkm,//Mass of sweetener to kill mouse
         mkd,//Mass to kill dieter
          ms,//Mass of sweetener in a can of coke
         cnc,//Concentration of sweetener in 1 can of coke
          mc;//Mass of coke contents
    int nCans;//Number of cans
    
    //Initialize all variables
    mm=35;//Grams
    mkm=5;//Grams
    wd=200;//lbs
    cnc=.001;
    mc=350;//Grams
    
    //Process or Map solutions
    md=wd*CNVLBGR;//Mass of the Dieter given weight and conversion
    mkd=md*mkm/mm;//Mass to kill dieter give mouse mass, dieter mass and mass to kill mouse
    ms=mc*cnc;//Mass of sweetener give concentration of sweetener in a can of coke
    nCans=mkd/ms;//Number of cans is what would kill dieter/mass of 1 can of sweetener in a coke

    //Display the output
    cout << "Program to calculate the limit of Soda Pop Consumption.\n";
    cout << "Input the desired dieters weight in lbs.\n";
    cin >> wd;
    cout << "The maximum number of soda pop cans\nwhich can be consumed is "
        << nCans << " cans";

    //Exit the Program
    return 0;
}