/*
*Author: Luis Roldan
*Created on May 5, 2026
*Purpose: Create a function that inputs 3 integers and returns both the min and maximua.
*         Use the prototype function supplied.
*         Like the other problems complete the function and use in the solution.
*/

//sys libraries
#include <iostream> //input output library
using namespace std; //entity organizer

//prototypes
void minmax(int, int, int);

//main f(x)
int main(int argc, char** argv){
int n1, n2, n3;
cout << "Input 3 numbers\n";
cin >> n1 >> n2 >> n3;
minmax(n1, n2, n3);
return 0;
}
void minmax(int n1, int n2,int n3){
    int 
    min, max;
    //calc min
    if (n1 < n2 & n1 < n3){
        min = n1;   }
    else if (n2 < n1 & n2 < n3){
        min = n1;   }
    else {
        min = n3;   }
    //calc max
    if (n1 > n2 & n1 > n3){
        max = n1;   }
    else if (n2 > n1 & n2 > n3){
        max = n2;   }
    else {
        max = n3;  }
    
    cout << "Min = " << min << endl;
    cout << "Max = "<< max;
    
}