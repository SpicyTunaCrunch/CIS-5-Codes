
/*Tebary Operator
grade from score
Mark's law: less tyoing, recomended by professor */
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

    //mapping input and output
    grade = score >=90? 'A':
            score >=80? 'B':
            score >=70? 'C':
            score >=6? 'D':'F';
    
            //display results
            cout <<"A score of "<<static_cast<unsigned short> (score)
            <<" give a grade of = "<<grade<<endl;
    return 0;



}