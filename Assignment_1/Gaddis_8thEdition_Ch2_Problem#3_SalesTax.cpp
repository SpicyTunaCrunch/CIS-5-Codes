/*  
    Author: Luis Roldan
    Computing Sales Tax   */

//preprocessor
#include <iostream>

//Entity Organizer 
using namespace std;

int main()
{
    //variables
    float totsls = 95.0f; //Total sale amount
    float sttax = .04f; // 4% State Tax
    float ctax = .02f; //2% County Tax
    
    //Display Results 
    cout << "      RECEIPT\n";
    cout << "Total Sale:      $" << totsls << endl;
    cout << "4% State Tax:    $" << sttax*totsls<< endl;
    cout << "2% County Tax:   $" << ctax*totsls << endl;
    cout << "TOTAL:           $" << totsls+(sttax*totsls)+(ctax*totsls) <<endl;

    return 0;
} 