/* Chapter #3 Practice, Exercise & Notes */

//Pre-Processor
#include <iostream>

//Entity Organizer
using namespace std;

int main ()
{
//Variables
//even if i dont asign values to vairables rn, I can do it later
unsigned short int length, width, area; //using 'unsigned short int' because data type range is 0-65000ish 

//Mapping in/output
cout << "This program calcualtes the area of a rectangle.\n";
cout << "Enter the length and width of the rectangle separated by a space.\n";
cin >> length >> width;
area = length*width;
cout << "The are of the rectangle is " << area << ".\n";

return 0;
}
//cin input value will reset  every time program is executed