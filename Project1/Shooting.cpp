/*
*Author: Luis Roldan
*Created on May 22, 2026
*Purpose: Battle Ship, SHooting 
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char** argv) {
    
    //Random seed
    srand(static_cast<unsigned int>(time(0)));
    
    unsigned short int
    hits, 
    shot, //players choice 
    s1, s2, s3;                    
    char        
    //grid individual cells  
    cA1 = '~', cA2 = '~', cA3 = '~', cA4 = '~', cA5 = '~', cA6 = '~', cA7 = '~',     //(A,0) (A,1) (A,2) (A,3) (A,4) (A,5), (A,6), (A, 7)
    pA1 = '~', pA2 = '~', pA3 = '~', pA4 = '~', pA5 = '~', pA6 = '~', pA7 = '~';     //players view of the board

    // print board
    cout << endl;
    cout << "   1 2 3 4 5 6 7\n\n"; 
    cout << "A  " << pA1 << " " << pA2 << " " << pA3 << " " << pA4 << " " << pA5 << " " << pA6 << " " << pA7 << " " << endl;
    cout << endl;

    //randomizing ship positions
    s1 = rand() % 7+1;
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
        s2 = rand() % 7+1;
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
        s3 = rand() % 7+1;
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
    hits = 0;
    do{
        cout << "Choose where you would like to hit.\n";
        cin >> shot;

    switch(shot){
        case 1:
            if(cA1=='S'){
                pA1='X';
                hits++;
                cout<<"HIT!\n";
            }
            else{
                pA1='O';
                cout<<"MISS!\n";
            }
            break;

        case 2:
            if(cA2=='S'){
                pA2='X';
                hits++;
                cout<<"HIT!\n";
            }
            else{
                pA2='O';
                cout<<"MISS!\n";
            }
            break;

        case 3:
            if(cA3=='S'){
                pA3='X';
                hits++;
                cout<<"HIT!\n";
            }
            else{
                pA3='O';
                cout<<"MISS!\n";
            }
            break;

        case 4:
            if(cA4=='S'){
                pA4='X';
                hits++;
                cout<<"HIT!\n";
            }
            else{
                pA4='O';
                cout<<"MISS!\n";
            }
            break;

        case 5:
            if(cA5=='S'){
                pA5='X';
                hits++;
                cout<<"HIT!\n";
            }
            else{
                pA5='O';
                cout<<"MISS!\n";
            }
            break;

        case 6:
            if(cA6=='S'){
                pA6='X';
                hits++;
                cout<<"HIT!\n";
            }
            else{
                pA6='O';
                cout<<"MISS!\n";
            }
            break;

        case 7:
            if(cA7=='S'){
                pA7='X';
                hits++;
                cout<<"HIT!\n";
            }
            else{
                pA7='O';
                cout<<"MISS!\n";
            }
            break;
    }

    cout << "\n   1 2 3 4 5 6 7\n";
    cout << "A  " << pA1 << " " << pA2 << " " << pA3 << " " << pA4 << " " << pA5 << " " << pA6 << " " << pA7 << endl;
        
    }while (hits < 3);

    return 0;
}