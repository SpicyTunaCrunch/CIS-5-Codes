/*Pay in Pennies using integer*/

//sys Libaries 
#include <iostream> // input output library
#include <iomanip> //Formatting
#include <vector> //STL Libraries
using namespace std;

//Global Constant
const int CNVPDLS = 100;
//prototpype
void calc(vector <int>&, vector <int>&, vector <int>&,int);
void prnt(vector <int> &days,vector <int> &pPDay, vector <int> &payChck,int nDays);

int main (int argc, char** argv){
    //Variables
    short int nDays; //if using cin' cannot use char data type
    //arrays
    const int size = 32;
    int days[size], pPDay[size], payChck[size];
    vector<int> days(size), pPDay(size), payChck(size);
,     //initialization
    nDays=size-1;
    days[0] = pPDay[0]= payChck[0] = 1;
    cout << "Input Nuber of Days\n";
    cin >> nDays;

    calc(days, pPDay, payChck, nDays);
    prnt(days, pPDay, payChck, nDays);

    return 0;
}

void calc(vector <int> &days,vector <int> &pPDay, vector <int> &payChck,int nDays){
    days[0] = pPDay[0]= payChck[0] = 1;
        for (int indx  = 1, day = 2; day <= nDays;indx++, day++){
        days[indx] = day;
        pPDay[indx] = 2*pPDay[indx-1];
        payChck[indx] = payChck[indx-1] + pPDay[indx];
}
void prnt(vector <int> &days,vector <int> &pPDay, vector <int> &payChck,int nDays){
    cout << "Number of Days = " << static_cast<int>(nDays) << endl;
    cout << "Pay per Day    = $" << pPDay[nDays-1]/CNVPDLS << "." 
                << (pPDay[nDays-1]%CNVPDLS<10?"0":"") << pPDay[nDays-1]%CNVPDLS << endl;
    cout << "Pay check      = $" << payChck[nDays-1]/CNVPDLS << "." 
                << (payChck[nDays-1]%CNVPDLS<10?"0":"") << payChck[nDays-1]%CNVPDLS << endl;

                   cout << "Day    Pay Per Day     Paycheck\n";
    cout << setw(3) << 1 << " " << setw(14) <<  pPDay << " " << setw(12) << payChck << " " << endl;
    cout << setw(3) << days << " " << setw(14) <<  pPDay[indx] << " " << setw(12) << payChck[indx] << " " << endl;
}