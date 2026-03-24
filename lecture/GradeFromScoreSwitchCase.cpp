
/*Independednt if statement
grade from scorre*/
#include <iostream>
#include <cstdlib> //Random number functions
#include <ctime>
using namespace std;

int main(int argv, char **argc){
    //Set Random # seed
    srand(static_cast<unsigned int>(time(0)));

    //declare variables
    unsigned char score, grade;

    //intialize variables
    score = rand()%51+50;//[50,100]

    //mappng
    switch(score/5){
        case 20:
        case 19:grade='A';break;
        case 17:grade='B';break;
        case 15:
        case 14:grade='C';break;
        case 13:
        case 12:grade='D';break;
        default:grade='F';
    }; 
    //display results
        cout <<"A score of "<<static_cast<unsigned short> (score)
            <<" give a grade of = "<<grade<<endl;
    return 0;



}