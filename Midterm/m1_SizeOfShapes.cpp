/*
*File: Midterm QUestion 1 Size of Shapes
*Authot: Luis Roldan
*Created on April 27, 2026 
*Purpose: Input a number [1-50] representing the size of the shape and then a character [x,b,f] which 
*   represents the shape i.e. x->cross, b->backward slash, or f->forward slash.  
*   Here are 4 examples which give the 2 inputs with the shape of the result directly below.
*   !!!!Flowchart is needed!!!!!
*/

//Sys Libraries
#include <iostream> // input-output library
using namespace std; // entity organizer

//main f(x)
int main (int argc, char** argv){
    //Variables
    unsigned short n;
    char shape;       //f-> forward b->backward x->cross
    
    //Input or initialize values Here
    cout << "Create a numbered shape that can be sized." << endl;
    cout << "Input an integer number [1,50] and a character [x,b,f]." << endl;
    cin >> n >> shape;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (n % 2 != 0){
                if ( shape == 'b'){
                    if (i == j){
                        cout << (n - i);    } 
                    else {
                        cout << " ";    }
                }
                else if ( shape == 'f'){
                    if ( j == (n - i - 1)) {
                        cout << (i + 1);    }
                    else {
                        cout << " ";}
                }
                else if ( shape == 'x'){
                    if (i == j ){
                        cout << (n - i);    } 
                    else if (j == (n - i - 1)  ){
                        cout << (i + 1);    }
                    else {
                        cout << " ";    }
                }
            }
            else {
                if ( shape == 'b'){
                    if (i == j){
                        cout << (i + 1);    } 
                    else {
                        cout << " ";    }
                }
                else if ( shape == 'f'){
                    if ( j == (n - i - 1)) {
                        cout << (n - i);    }
                    else {
                        cout << " ";}
                }
                else if ( shape == 'x'){
                    if (i == j ){
                        cout << (i + 1);    } 
                    else if (j == (n - i - 1)  ){
                        cout << (n - i);    }
                    else {
                        cout << " ";    }
                }
            }

        }  
        cout << endl; 
    }
    return 0;
}