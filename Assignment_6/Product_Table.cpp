/*
*File: Problem 1
*Author: Luis Roldan
*Created on May 27, 2026
*Purpose: Create a dice table
*/

//sys libraries
#include <iostream> //input-output library
#include <iomanip>  //formating library
using namespace std;

//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const int COLS = 6;

//Function Prototypes
void fillTbl(int [][COLS],int);
void prntTbl(const int [][COLS],int);

//main f(x)
int main(int argc, char** argv){
    //Variables
    const int ROWS = 6;
    int tablProd[ROWS][COLS];

    //Initialize
    fillTbl(tablProd, ROWS);
    
    //Display
    prntTbl(tablProd, ROWS);

    return 0;
}

void fillTbl(int tablProd[][COLS],int ROWS)
{
    for (int i = 0; i < ROWS; i++){
        for (int j =0; j < COLS; j++){
            tablProd[i][j] = (i + 1) * (j + 1);
        }
    }
 
}
void prntTbl(const int tablProd[][COLS],int ROWS)
{
    cout << "Think of this as a Product/Muliplication Table\n";
    cout << "           C o l u m n s\n";
    cout << "     |";
    for (int i = 0; i < COLS; i++){
        cout << setw(4) << i + 1;
    }
    cout << "\n----------------------------------\n";
    for (int i = 0; i < COLS; i++){
        if (i == 0){
            cout << " ";    }
        if (i == 1){
            cout << "R";    }
        if (i == 2){
            cout << "O";    }
        if (i == 3){
            cout << "W";    }
        if (i == 4){
            cout << "S";    }
        if (i == 5){
            cout << " ";    }  
        cout <<setw(3) << i + 1 << " |";
        for (int j = 0; j < ROWS; j++){
            cout << setw(4) << tablProd[i][j];
        }
        cout << endl;
    }
}
