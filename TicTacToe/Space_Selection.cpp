#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    unsigned short int
    row, //row player wants to choose 
    clmn; //column player wants to choose
    char
    plyr = '\0'; //player chose of X or 0
    // individual cells
    char 
    c00='.', c01='.', c02='.',      //(0,0) (0,1) (0,2)
    c10='.', c11='.', c12='.',      //(1,0) (1,1) (1,2)
    c20='.', c21='.', c22='.';      //(2,0) (2,1) (2,2)

    //looop for player and npc to play
    for (int m = 0; m < 9; ++ m){
            
        // print board
        cout << endl;
        cout << c00 << " " << c01 << " " << c02 << endl;
        cout << c10 << " " << c11 << " " << c12 << endl;
        cout << c20 << " " << c21 << " " << c22 << endl;
        cout << endl;

        //player placemtn choice
        cout << "choose row ( 0, 1, or 2): ";
        cin >> row;
        cout << "choose column ( 0, 1, or 2): ";
        cin >> clmn;

        //out of range
        if (row > 2 || clmn > 2){
            cout << "\nOut of Range!!!!\nPlease try again\n";
            --m; //making sure move does not count
        } else {
            bool plcmnt = false;
        
            if (row == 0 && clmn == 0){
                if (c00 == '.'){
                    c00 = plyr;
                    plcmnt = true; 
                }
            }
            else if (row == 0 && clmn == 1){
                if (c01 == '.'){
                    c01 = plyr;
                    plcmnt = true; 
                }
            }
            else if (row == 0 && clmn == 2){
                if (c02 == '.'){
                    c02 = plyr;
                    plcmnt = true; 
                }
            }
            else if (row == 1 && clmn == 0){
                if (c10 == '.'){
                    c10 = plyr;
                    plcmnt = true; 
                }
            }
            else if (row == 1 && clmn == 1){
                if (c11 == '.'){
                    c11 = plyr;
                    plcmnt = true; 
                }
            }
            else if (row == 1 && clmn == 2){
                if (c12 == '.'){
                    c12 = plyr;
                    plcmnt = true; 
                }
            }
            else if (row == 2 && clmn == 0){
                if (c20 == '.'){
                    c20 = plyr;
                    plcmnt = true; 
                }
            }
            else if (row == 2 && clmn == 1){
                if (c21 == '.'){
                    c21 = plyr;
                    plcmnt = true; 
                }
            }
            else if (row == 2 && clmn == 2){
                if (c22 == '.'){
                    c22 = plyr;
                    plcmnt = true; 
                }
            }
            if (!plcmnt) { //no cell was updated 
                cout << "\nOccupied!!!!!\nPlease try again\n";
                --m; //making sure move still doesnt count 
            }
        }
    }
    return 0;
}