/* Problem 8 
    Calculte how far an object would drop if it freefalls for a certain length of time
*/

//preproceeor
#include <iostream>

//Entity Organiser 
using namespace std;

//Universal Constant
const float ACCEL = 32.0f; //Acceleration rate in feet per sec.

//main f(x)
int main ()
{
    //Variables
    float sec; //seconds the object fell for

        
          
    cout << "How many seconds did the object fall for?\n";
    cout << "Please type in a float, for example -> 4.3\n";
    cin >> sec;
    cout << "The object fell from a distance of " << (ACCEL*(sec*sec))*.5f << " feet." << endl;
    return 0;

}