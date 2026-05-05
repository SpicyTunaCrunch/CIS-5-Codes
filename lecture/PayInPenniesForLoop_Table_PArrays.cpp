/*Pay in Pennies using integer*/

//sys Libaries 
#include <iostream> // input output library
#include <iomanip> //Formatting
using namespace std;

//Global Constant
const int CNVPDLS = 100;

int main (int argc, char** argv){
    //Variables
    short int nDays; //if using cin' cannot use char data type
    //arrays
    const int SIZE = 32;
    int days[SIZE], pPDay[SIZE], payChck[SIZE];

    //initialization
    nDays=SIZE-1;
    days[0] = pPDay[0]= payChck[0] = 1;
    cout << "Input Nuber of Days\n";
    cin >> nDays;
    //Mapping
    cout << "Day    Pay Per Day     Paycheck\n";
    cout << setw(3) << 1 << " " << setw(14) <<  pPDay << " " << setw(12) << payChck << " " << endl;
    for (int indx  = 1, day = 2; day <= nDays;indx++, day++){
        days[indx] = day;
        pPDay[indx] = 2*pPDay[indx-1];
        payChck[indx] = payChck[indx-1] + pPDay[indx];
        cout << setw(3) << day << " " << setw(14) <<  pPDay[indx] << " " << setw(12) << payChck[indx] << " " << endl;
    }

    cout << "Number of Days = " << static_cast<int>(nDays) << endl;
    cout << "Pay per Day    = $" << pPDay[nDays-1]/CNVPDLS << "." 
                << (pPDay[nDays-1]%CNVPDLS<10?"0":"") << pPDay[nDays-1]%CNVPDLS << endl;
    cout << "Pay check      = $" << payChck[nDays-1]/CNVPDLS << "." 
                << (payChck[nDays-1]%CNVPDLS<10?"0":"") << payChck[nDays-1]%CNVPDLS << endl;
}
