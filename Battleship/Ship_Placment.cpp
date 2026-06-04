/*
*Author: Luis Roldan
*Created on May 22, 2026
*Purpose: Battle Ship, Ship Placements
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char** argv) {
    //Random seed
    srand(static_cast<unsigned int>(time(0)));

    unsigned short int
    s1, s2, s3;                    
    char        //grid individual cells  
    cA1 = '~', cA2 = '~', cA3 = '~', cA4 = '~', cA5 = '~', cA6 = '~', cA7 = '~';     //(A,0) (A,1) (A,2) (A,3) (A,4) (A,5), (A,6), (A, 7)

    

    // print board
    cout << endl;
    cout << "   1 2 3 4 5 6 7\n\n"; 
    cout << "A  " << cA1 << " " << cA2 << " " << cA3 << " " << cA4 << " " << cA5 << " " << cA6 << " " << cA7 << " " << endl;
    cout << endl;

    //randomizing ship positions
    s1 = rand() % (7+1);
    switch (s1){
        case 1: cA1 = 'S'; break;
        case 2: cA2 = 'S'; break;
        case 3: cA3 = 'S'; break;
        case 4: cA4 = 'S'; break;
        case 5: cA5 = 'S'; break; 
        case 6: cA6 = 'S'; break;
        case 7: cA7 = 'S'; break;
    }
    //Placing second ship randomly and making sure it doesnt overwrite first ship
    int sp2 = 1;
    while (sp2 < 2) {
        s2 = rand() % (7+1);
        if (s2 == 1 && cA1 == '~'){
            cA1 = 'S';
            sp2++;   }
        else if (s2 ==2 && cA2 == '~'){
            cA2 = 'S';
            sp2++;   }
        else if (s2 == 3 && cA3 == '~'){
            cA3 = 'S';
            sp2++;   }
        else if (s2 == 4 && cA4 == '~'){
            cA4 = 'S';
            sp2++;   }
        else if (s2 == 5 && cA5 == '~'){
            cA5 = 'S';
            sp2++;   }
        else if (s2 == 6 && cA6 == '~'){
            cA6 = 'S';
            sp2++;   }
        else if (s2 == 7 && cA7 == '~'){
            cA7 = 'S';
            sp2++;   }
    }
    int sp3 = 1;
    while (sp3 < 2) {
        s3 = rand() % (7+1);
        if (s3 == 1 && cA1 == '~'){
            cA1 = 'S';
            sp3++;   }
        else if (s3 ==2 && cA2 == '~'){
            cA2 = 'S';
            sp3++;   }
        else if (s3 == 3 && cA3 == '~'){
            cA3 = 'S';
            sp3++;   }
        else if (s3 == 4 && cA4 == '~'){
            cA4 = 'S';
            sp3++;   }
        else if (s3 == 5 && cA5 == '~'){
            cA5 = 'S';
            sp3++;   }
        else if (s3 == 6 && cA6 == '~'){
            cA6 = 'S';
            sp3++;   }
        else if (s3 == 7 && cA7 == '~'){
            cA7 = 'S';
            sp3++;   }
    }

    // print board
    cout << endl;
    cout << "   1 2 3 4 5 6 7\n\n"; 
    cout << "A  " << cA1 << " " << cA2 << " " << cA3 << " " << cA4 << " " << cA5 << " " << cA6 << " " << cA7 << " " << endl;
    cout << endl;

    return 0;
}