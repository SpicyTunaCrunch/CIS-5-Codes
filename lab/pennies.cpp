/* 
 * Lab Example of Arrays
 */

//System Libraries
#include <iostream>  //Input/output Library
using namespace std;

//User Libraries

//Global Constants
const unsigned int MAX_DAYS = 32; //size of the array, always starts at 0, so this array is 0-31 

//Physics/Chemistry/Math/Conversion Higher Dimension Only
const unsigned char CNVDLRS=100;//Conversion to Dollars from Pennies

//Function Prototypes
void prntArrays( unsigned int payDay[], unsigned int totSumDay[], unsigned int nDays);
void  input( int &n); 

//Program Execution Begins Here!!!
int main(int argc, char** argv) {
    //Set the Random Number Seed
    
    //Declare Variables
    unsigned int payDay[ MAX_DAYS], //Pay that is doubled each day in Pennies
    totSumDay[ MAX_DAYS ];//total sum of all payDays in Pennies
    //unsigned char nDays;//Number of days to double pay
    int nDays;
    unsigned int Days[ MAX_DAYS];

    
    //Initial Variables
    payDay[ 0 ]=1;
    totSumDay[0]=payDay[0];
    
    //Map the Inputs to the Outputs
    input(nDays);
    prntArrays(payDay, totSumDay, nDays);

    //Exit the code
    return 0;
}
//Defining Function
void prntArrays( unsigned int payDay[], unsigned int totSumDay[], unsigned int nDays) {
        for(int day=2;day<=nDays;day++){
        payDay[ day - 1] = payDay [day - 2];   //Initially set payDay[ day -1 ]to be previous day's pay
        payDay[day - 1]*=2;//Double the pay Day
        totSumDay[day - 1] = totSumDay [ day - 2]; //coppy previous total sum
        totSumDay[day - 1] += payDay[day - 1];//Add to the total paycheck
    }
    
    for (int i = 0; i < nDays; i++){
        cout << (i + 1) << "\t" << payDay[i] << "\t" << totSumDay[i] <<  endl;
    }

}
void  input( int &n){
    cout << "Enter number: \n";
    cin >> n;
}