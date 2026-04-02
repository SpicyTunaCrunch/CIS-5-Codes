/*Truth Table April 2, 2026*/

#include <iostream>
using namespace std;

int main(int argc, char** argv){
    cout << "Truth table" << endl;
    cout << "X	Y	!X	!Y	X&&Y	X||Y	X^Y	X^Y^Y	"
    << "X^Y^X	!(X&&Y)	!X||!Y	!(X||Y)	!X&&!Y" <<endl;

    //mapping
    for (int x=0;x<=1;x++) {
        for (int y=0;y<=1;y++){
            cout << (x?'T':'F') << "    "
                << (y?'T':'F') << endl;
        }
        cout << endl;
        for ( int x=1; x>=0;x--){
            for (int y=1;y>=0;y--){
                cout << (!x?'T':'F') << "      "<< (!y?'T':'F') << endl;
            }
            cout << endl;
        }
    }
        return 0;
}
/*incomplete still have to work on it becasue its not outputting how i want*/