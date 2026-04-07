/*Pay in Pennies using integer*/

//sys Libaries 
#include <iostream>
using namespace std;

//Global Constant
const int CNVPDLS = 100;

int main (int argc, char** argv){
    //Variables
    short int nDays; //if using cin' cannot use char data type
    int pPDay, payChck;

    //initialization
    cout << "Input Nuber of Days\n";
    cin >> nDays;
    pPDay = payChck = 1;

    //Mapping
    int day = 2;
    while (day <=nDays){
        pPDay*=2;
        payChck+=pPDay;
        day++;
    }

    cout << "Number of Days = " << static_cast<int>(nDays) << endl;
    cout << "Pay per Day    = $" << pPDay/CNVPDLS << "." << (pPDay%CNVPDLS<10?"0":"") << pPDay%CNVPDLS << endl;
    cout << "Pay check      = $" << payChck/CNVPDLS << "." << (payChck%CNVPDLS<10?"0":"") << payChck%CNVPDLS << endl;
}
