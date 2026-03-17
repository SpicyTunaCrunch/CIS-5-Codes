
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
    if(score >=90) grade = 'A';
    else if (score >=80) grade = 'B';
    else if (score >=70) grade = 'C';
    else if (score >=60) grade = 'D';
    else                 grade = 'F';


    
    //display results
        cout <<"A score of "<<static_cast<unsigned short> (score)
            <<" give a grade of = "<<grade<<endl;
    return 0;



}