/*Pay in Pennies using integer*/

//sys Libaries 
#include <iostream>
#include <fstream>      //file input/output
using namespace std;

//Global Constant
const int CNVPDLS = 100;

int main (int argc, char** argv){
    //Variables
    short int nDays; //if using cin' cannot use char data type
    int pPDay, payChck;
    fstream in, out;

    //initialization
    in.open("in.dat",ios::in);
    out.open("out.dat",ios::out);
    pPDay = payChck = 1;
    in>>nDays;

    //Mapping
    for (int day = 2; day <= nDays;day++){
        pPDay*=2;
        payChck+=pPDay;
    }
    
    //close files
    in.close();
    out.close();
    out << "Number of Days = " << static_cast<int>(nDays) << endl;
    out << "Pay per Day    = $" << pPDay/CNVPDLS << "." << (pPDay%CNVPDLS<10?"0":"") << pPDay%CNVPDLS << endl;
    out << "Pay check      = $" << payChck/CNVPDLS << "." << (payChck%CNVPDLS<10?"0":"") << payChck%CNVPDLS << endl;
}
